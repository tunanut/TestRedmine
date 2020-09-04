#pragma once

#include "RavidQuadrangle.h"

#include <vector>
#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalRavidImage;

		class CInternalBarcodeDecoder;

		class CRavidImage;

		class AFX_EXT_CLASS CBarcodeDecoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CBarcodeDecoder);

		public:

			enum E1DBarcodeDecoderType
			{
				E1DBarcodeDecoderType_Unknown = -1,
				E1DBarcodeDecoderType_EAN8,
				E1DBarcodeDecoderType_EAN13,
				E1DBarcodeDecoderType_EAN128,
				E1DBarcodeDecoderType_CODE11,
				E1DBarcodeDecoderType_CODE39,
				E1DBarcodeDecoderType_CODE128,
				E1DBarcodeDecoderType_MSI,
				E1DBarcodeDecoderType_UPCA,
				E1DBarcodeDecoderType_UPCE,
				E1DBarcodeDecoderType_Interleaved2Of5,
				E1DBarcodeDecoderType_Codabar
			};

			struct BarcodeInformation
			{
				bool bSuccess;
				CRavidQuadrangle<double> rqr;
				CString strSymbologyType;
				CString strResult;
			};

			CBarcodeDecoder();
			virtual ~CBarcodeDecoder();

			////////////////////

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>* pRrRegion);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<int>* pRrRegion);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<long long>* pRrRegion);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<long long>* pRrRegion);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<float>* pRrRegion);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<float>* pRrRegion);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<double>* pRrRegion = nullptr);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<double>* pRrRegion = nullptr);

			////////////////////

			EAlgorithmResult SetType(_In_ E1DBarcodeDecoderType eBarcodeType);
			EAlgorithmResult SetMinWidth(_In_ double dblMinWidth);

			E1DBarcodeDecoderType GetType(void);
			double GetMinWidth(void);

			BarcodeInformation GetBarcodeInfomation(void);

			std::vector<std::pair<bool, CString>>* GetBarcodeResult(void);

		private:
			std::unique_ptr<CInternalBarcodeDecoder> m_pInternal;

		};
	}
}
