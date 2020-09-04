#pragma once

#include "RavidQuadrangle.h"
#include "Matrix.h"

#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalQRCodeDecoder;

		class AFX_EXT_CLASS CQRCodeDecoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CQRCodeDecoder);
		public:
			enum ECodeColor
			{
				ECodeColor_Black = 0,
				ECodeColor_White,
				ECodeColor_Auto_BlackToWhite,
				ECodeColor_Auto_WhiteToBlack,
			};

			enum EUseFlip
			{
				EUseFlip_No = 0,
				EUseFlip_Yes,
				EUseFlip_Auto,
			};

			enum EThresholdMethod
			{
				EThresholdMethod_Otsu = 0x01,
				EThresholdMethod_ISOData = 0x02,
				EThresholdMethod_MaximumEntropy = 0x04,
				EThresholdMethod_BlockLocalOtsuWithTuning = 0x08,
				EThresholdMethod_None = 0b01 << 4,
			};

			enum EErrorCorrectingLevel
			{
				EErrorCorrectingLevel_None = -1,
				EErrorCorrectingLevel_L = 1,
				EErrorCorrectingLevel_M = 0,
				EErrorCorrectingLevel_Q = 3,
				EErrorCorrectingLevel_H = 2,
			};

			enum EModel
			{
				EModel_None = 0,
				EModel_1 = 1,
				EModel_2 = 2,
			};

			enum EVersion
			{
				EVersion_Auto = 0,
				EVersion_01 = 1,
				EVersion_02 = 2,
				EVersion_03 = 3,
				EVersion_04 = 4,
				EVersion_05 = 5,
				EVersion_06 = 6,
				EVersion_07 = 7,
				EVersion_08 = 8,
				EVersion_09 = 9,
				EVersion_10 = 10,
				EVersion_11 = 11,
				EVersion_12 = 12,
				EVersion_13 = 13,
				EVersion_14 = 14,
				EVersion_15 = 15,
				EVersion_16 = 16,
				EVersion_17 = 17,
				EVersion_18 = 18,
				EVersion_19 = 19,
				EVersion_20 = 20,
				EVersion_21 = 21,
				EVersion_22 = 22,
				EVersion_23 = 23,
				EVersion_24 = 24,
				EVersion_25 = 25,
				EVersion_26 = 26,
				EVersion_27 = 27,
				EVersion_28 = 28,
				EVersion_29 = 29,
				EVersion_30 = 30,
				EVersion_31 = 31,
				EVersion_32 = 32,
				EVersion_33 = 33,
				EVersion_34 = 34,
				EVersion_35 = 35,
				EVersion_36 = 36,
				EVersion_37 = 37,
				EVersion_38 = 38,
				EVersion_39 = 39,
				EVersion_40 = 40,
				EVersion_None = 41,
			};

			typedef struct AFX_EXT_CLASS sQRCodeResult
			{
				CRavidQuadrangle<double> rqRegion;
				std::vector<CRavidQuadrangle<double>> vctRegionGridType;
				CRavidQuadrangle<double> rqrFindPattern[3];
				Ravid::Mathematics::CMatrix rmMatrix;

				EErrorCorrectingLevel eeclEcLevel;
				EModel emModel;
				EVersion evVersion;
				CString strText;

				sQRCodeResult() { Clear(); }
				virtual ~sQRCodeResult() { Clear(); }

				void Clear();
			}
			SQRCodeResult;

			CQRCodeDecoder();
			virtual ~CQRCodeDecoder();

			void Clear();

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>* pRrRegion);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<int>* pRrRegion);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<long long>* pRrRegion);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<long long>* pRrRegion);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<float>* pRrRegion);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<float>* pRrRegion);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<double>* pRrRegion);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<double>* pRrRegion);

			EAlgorithmResult SetCodeColor(_In_ ECodeColor eCodeColor);
			_Out_ ECodeColor GetCodeColor();

			EAlgorithmResult SetUseFlip(_In_ EUseFlip eFlip);
			_Out_ EUseFlip GetUseFlip();

			EAlgorithmResult SetThresholdMethod(_In_ CQRCodeDecoder::EThresholdMethod eMethod, _In_ bool bUse);
			EAlgorithmResult GetThresholdMethod(_In_ CQRCodeDecoder::EThresholdMethod eMethod, _Out_ bool& bUseOut);

			void SetUseGaussianBlur(_In_ bool bUse);
			_Out_ bool GetUseGaussianBlur();

			EAlgorithmResult SetStickVersion(_In_ CQRCodeDecoder::EVersion eVersion);
			_Out_ EVersion GetStickVersion();

			void SetCleanImage(_In_ bool bCleanImage);
			_Out_ bool GetCleanImage();

			size_t GetReadResultCount();

			EAlgorithmResult GetReadOutLine(_Out_ CRavidQuadrangle<double>& rqResult, _In_ int nIdx = 0);
			EAlgorithmResult GetReadOutLine(_Out_ CRavidQuadrangle<double>* pRqResult, _In_ int nIdx = 0);

			EAlgorithmResult GetGridTypeOfReadRegion(_Out_ std::vector<CRavidQuadrangle<double>>& vctResult, _In_ int nIdx = 0);
			EAlgorithmResult GetGridTypeOfReadRegion(_Out_ std::vector<CRavidQuadrangle<double>>* pVctResult, _In_ int nIdx = 0);

			EAlgorithmResult GetReadMatrix(_Out_ Ravid::Mathematics::CMatrix& rm, _In_ int nIdx = 0);
			EAlgorithmResult GetReadMatrix(_Out_ Ravid::Mathematics::CMatrix* pRm, _In_ int nIdx = 0);

			EAlgorithmResult GetReadVersion(_Out_ EVersion& evResult, _In_ int nIdx = 0);
			_Out_ EVersion GetReadVersion(_In_ int nIdx = 0);

			EAlgorithmResult GetReadModel(_Out_ EModel& emResult, _In_ int nIdx = 0);
			_Out_ EModel GetReadModel(_In_ int nIdx = 0);

			EAlgorithmResult GetReadEcLevel(_Out_ EErrorCorrectingLevel& eclResult, _In_ int nIdx = 0);
			_Out_ EErrorCorrectingLevel GetReadEcLevel(_In_ int nIdx = 0);

			EAlgorithmResult GetReadString(_Out_ CString& strResult, _In_ int nIdx = 0);
			_Out_ CString GetReadString(_In_ int nIdx = 0);

			EAlgorithmResult GetReadResultAt(_Out_ SQRCodeResult& sqrcResult, _In_ int nIdx = 0);
			EAlgorithmResult GetReadResultAt(_Out_ SQRCodeResult* pSqrcResult, _In_ int nIdx = 0);

			EAlgorithmResult GetReadAllResult(_Out_ std::vector<SQRCodeResult>& vctResult);
			EAlgorithmResult GetReadAllResult(_Out_ std::vector<SQRCodeResult>* pVctResult);

		private:
			std::unique_ptr<CInternalQRCodeDecoder> m_pInternal;

		};
	}
}