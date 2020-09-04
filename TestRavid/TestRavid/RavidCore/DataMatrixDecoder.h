#pragma once

#include "RavidQuadrangle.h"

#include <vector>
#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;

		class CInternalDataMatrixDecoder;

		class AFX_EXT_CLASS CDataMatrixDecoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CDataMatrixDecoder);

		public:
			enum EDataMatrixInspectionCount
			{
				EDataMatrixInspectionCount_Single = 0,
				EDataMatrixInspectionCount_All
			};

			enum EDataMatrixColorLayer
			{
				EDataMatrixColorLayer_Black = 0,
				EDataMatrixColorLayer_White,
				EDataMatrixColorLayer_Auto_BlackToWhite,
				EDataMatrixColorLayer_Auto_WhiteToBlack
			};

			enum EDataMatrixThresholdMethodOption
			{
				EDataMatrixThresholdMethodOption_Ostu = 0x1,
				EDataMatrixThresholdMethodOption_Adaptive1 = 0x2,
				EDataMatrixThresholdMethodOption_Adaptive2 = 0x4,
				EDataMatrixThresholdMethodOption_ISODATA = 0x8,
				EDataMatrixThresholdMethodOption_MaximumEntropy = 0x10
			};

			enum EDataMatrixFlippingRegion
			{
				EDataMatrixFlippingRegion_No = 0x1,
				EDataMatrixFlippingRegion_Yes = 0x2,
				EDataMatrixFlippingRegion_Auto = 0x3
			};

			enum EDataMatrixLineFittingMethod
			{
				EDataMatrixLineFittingMethod_Cluster = 0,
				EDataMatrixLineFittingMethod_HoughTransform,
				EDataMatrixLineFittingMethod_RANSAC
			};

			struct SDataMatrixInformation
			{
				CRavidQuadrangle<double> rqRegion;

				std::vector<CRavidQuadrangle<double>> vctGrid;

				int nSizeRows;
				int nSizeCols;
				int nErrorCount;

				CString strColor;
				CString strVersion;
				CString strCode;

				bool bFlip;
				bool bSuccess;
			};

			struct SDataMatrixExplicitSize
			{
				bool bUsing;
				int nRow;
				int nCol;
			};

			CDataMatrixDecoder();
			virtual ~CDataMatrixDecoder();

// 			CDataMatrixDecoder(_In_ const CDataMatrixDecoder& DMD);
// 			CDataMatrixDecoder(_In_ CDataMatrixDecoder* pDMD);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>* pRrRegion);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<int>* pRrRegion);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<long long>* pRrRegion);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<long long>* pRrRegion);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<float>* pRrRegion);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<float>* pRrRegion);

			EAlgorithmResult Read(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<double>* pRrRegion = nullptr);
			EAlgorithmResult Read(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<double>* pRrRegion = nullptr);

			EAlgorithmResult SetColorLayer(_In_ EDataMatrixColorLayer ePriorityColorLayer);
			EAlgorithmResult SetInspectionCount(_In_ EDataMatrixInspectionCount eDataMatrixInspectionCount);

			EDataMatrixColorLayer GetColorLayer(void);
			EDataMatrixInspectionCount GetInspectionCount(void);

			EAlgorithmResult SetMinRegionLength(_In_ int nMinDist);
			_Out_ int GetMinRegionLength(void);

			EAlgorithmResult SetMeasureAngleRatio(_In_ double dblMeasureAngleRatio);
			_Out_ double GetMeasureAngleRatio(void);

			EAlgorithmResult SetMeasureAngleUnit(_In_ double dblMeasurAngleUnit);
			_Out_ double GetMeasureAngleUnit(void);

			EAlgorithmResult SetFlippingRegion(_In_ EDataMatrixFlippingRegion eFlippingRegion);
			_Out_ EDataMatrixFlippingRegion GetFlippingRegion(void);

			void SetFittingLine(_In_ EDataMatrixLineFittingMethod eLFM);
			_Out_ EDataMatrixLineFittingMethod GetFittingLine(void);

			void SetCleanImage(_In_ bool bCleanImage);
			_Out_ bool IsCleanImage(void);

			EAlgorithmResult SetExplicitSize(_In_ SDataMatrixExplicitSize sDMES);
			_Out_ SDataMatrixExplicitSize GetExplicitSize(void);

			void SetGaussianProcess(_In_ bool bGaussianProcess);
			_Out_ bool IsGaussianProcess(void);

			EAlgorithmResult EnableDirectROI(_In_ CRavidQuadrangle<double>& rqrDirectROI);
			void DisableDirectROI();

			EAlgorithmResult SetThresholdMethod(_In_ int nDMTM);
			_Out_ int GetThresholdMethod();

			EAlgorithmResult EnableThresholdMethod(_In_ EDataMatrixThresholdMethodOption eDMTMO);
			EAlgorithmResult DisableThresholdMethod(_In_ EDataMatrixThresholdMethodOption eDMTMO);

			void Clear(void);

			size_t GetCount(void);

			std::vector<SDataMatrixInformation>* GetDataMatrixInformation();

		private:
			std::unique_ptr<CInternalDataMatrixDecoder> m_pInternal;
		};
	}
}
