#pragma once

#include <vector>

class CRavidGeometry;

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalHoughTransformLine;
		class CRavidImage;

		class AFX_EXT_CLASS CHoughTransformLine : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CHoughTransformLine);

		public:

			CHoughTransformLine();
			virtual ~CHoughTransformLine();

			EAlgorithmResult Transform(_In_ const std::vector<CRavidPoint<double> >& vctRp, _In_ CRavidGeometry* pRgRegion, _Out_ std::vector<CRavidLine<double> >& vctLines);

			EAlgorithmResult Transform(_In_ const std::vector<CRavidPoint<double> >* pVctRp, _In_ CRavidGeometry* pRgRegion, _Out_ std::vector<CRavidLine<double> >& vctLines);

			EAlgorithmResult Transform(_In_ CRavidImage* pImgInfo, _Out_ std::vector<CRavidLine<int>>& vctLines, _In_opt_ CRavidGeometry* pROI = nullptr);

			EAlgorithmResult Transform(_In_ CRavidImage* pImgInfo, _Out_ std::vector<CRavidLine<int>>* pVctLines, _In_opt_ CRavidGeometry* pROI = nullptr);

			EAlgorithmResult Transform(_In_ CRavidImage& refImgInfo, _Out_ std::vector<CRavidLine<int>>& vctLines, _In_opt_ CRavidGeometry* pROI = nullptr);

			EAlgorithmResult Transform(_In_ CRavidImage& refImgInfo, _Out_ std::vector<CRavidLine<int>>* pVctLines, _In_opt_ CRavidGeometry* pROI = nullptr);

			EAlgorithmResult SetThreshold(_In_ int nThreshold);
			int GetThreshold(void) const;

			EAlgorithmResult SetMaxLineCount(_In_ int nMaxLineCnt);
			int GetMaxLineCount(void) const;

			EAlgorithmResult SetRegionRange(_In_ int nRegionalRange);
			int GetRegionRange(void) const;

		private:
			CInternalHoughTransformLine* m_pInternal = nullptr;

		};
	}
}

