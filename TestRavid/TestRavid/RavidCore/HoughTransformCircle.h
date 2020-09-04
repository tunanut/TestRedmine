#pragma once

#include <vector>

class CRavidGeometry;

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalHoughTransformCircle;
		class CRavidImage;

		class AFX_EXT_CLASS CHoughTransformCircle : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CHoughTransformCircle);

		public:
			CHoughTransformCircle();
			virtual ~CHoughTransformCircle();

			EAlgorithmResult Transform( _In_ const std::vector<CRavidPoint<double>>& vctRp, _In_ CRavidGeometry* pRgRegion, _Out_ std::vector<CRavidCircle<double>>& vctCircles);

			EAlgorithmResult Transform(_In_ const std::vector<CRavidPoint<double>>* vctRp, _In_ CRavidGeometry* pRgRegion, _Out_ std::vector<CRavidCircle<double>>& vctCircles);

			EAlgorithmResult Transform(_In_ CRavidImage* pImgInfo, _Out_ std::vector<CRavidCircle<int>>& vctCircles, _In_opt_ CRavidGeometry* pROI);

			EAlgorithmResult Transform(_In_ CRavidImage* pImgInfo, _Out_ std::vector<CRavidCircle<int>>* pVctCircles, _In_opt_ CRavidGeometry* pROI);

			EAlgorithmResult Transform(_In_ CRavidImage& refImgInfo, _Out_ std::vector<CRavidCircle<int>>& vctCircles, _In_opt_ CRavidGeometry* pROI);

			EAlgorithmResult Transform(_In_ CRavidImage& refImgInfo, _Out_ std::vector<CRavidCircle<int>>* pVctCircles, _In_opt_ CRavidGeometry* pROI);

			EAlgorithmResult SetThreshold(_In_ int nThreshold);
			EAlgorithmResult SetMaxCircleCount(_In_ int nMaxCircleCnt);
			EAlgorithmResult SetRegionRange(_In_ int nRegionalRange);
			EAlgorithmResult SetRadius(_In_ int nMinRadius, _In_ int nMaxRadius);

			int GetThreshold() const;
			int GetMaxCircleCount() const;
			int GetRegionRange() const;
			void GetRadius(_Out_ int& nMinRadius, _Out_ int& nMaxRadius) const;
		
		private:
			CInternalHoughTransformCircle* m_pInternal = nullptr;

		};
	}
}

