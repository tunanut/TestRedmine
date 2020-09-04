#pragma once

#include <vector>
#include <memory>

class CRavidGeometry;

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalConnectedComponent;

		class CRavidImage;

		class AFX_EXT_CLASS CConnectedComponent : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CConnectedComponent);

		public:

			enum EThresholdType
			{
				EThresholdType_Single = 0,
				EThresholdType_Double,
			};

			enum EMultipleChannelCondition
			{
				EMultipleChannelCondition_1 = 0,
				EMultipleChannelCondition_1or2,
				EMultipleChannelCondition_1and2,
				EMultipleChannelCondition_1or2or3,
				EMultipleChannelCondition_1and2and3,
				EMultipleChannelCondition_1or2or3or4,
				EMultipleChannelCondition_1and2and3and4,
			};

			enum EFilterItem
			{
				EFilterItem_Area = 0,
				EFilterItem_Angle,
				EFilterItem_BoundingBoxCenterX,
				EFilterItem_BoundingBoxCenterY,
				EFilterItem_BoundingBoxWidth,
				EFilterItem_BoundingBoxHeight,
				EFilterItem_GravityCenterX,
				EFilterItem_GravityCenterY,
				EFilterItem_MinimumEnclosingRectangleCenterX,
				EFilterItem_MinimumEnclosingRectangleCenterY,
				EFilterItem_MinimumEnclosingRectangleHeight,
				EFilterItem_MinimumEnclosingRectangleWidth,
				EFilterItem_MinimumEnclosingRectangleCircularity,
			};

			enum ESortItem
			{
				ESortItem_Area = 0,
				ESortItem_Angle,
				ESortItem_BoundingBoxCenterX,
				ESortItem_BoundingBoxCenterY,
				ESortItem_BoundingBoxWidth,
				ESortItem_BoundingBoxHeight,
				ESortItem_GravityCenterX,
				ESortItem_GravityCenterY,
				ESortItem_MinimumEnclosingRectangleCenterX,
				ESortItem_MinimumEnclosingRectangleCenterY,
				ESortItem_MinimumEnclosingRectangleHeight,
				ESortItem_MinimumEnclosingRectangleWidth,
				ESortItem_MinimumEnclosingRectangleCircularity,
			};

			enum ESortMethod
			{
				ESortMethod_AscendingOrder = 0,
				ESortMethod_DescendingOrder
			};

			CConnectedComponent();
			virtual ~CConnectedComponent();


			EAlgorithmResult Encode(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidGeometry* pROI = nullptr);

			EAlgorithmResult SetSingleThreshold(_In_ Framework::CMultipleVariable rmv);
			EAlgorithmResult GetSingleThreshold(_Out_ Framework::CMultipleVariable &rmv);
			EAlgorithmResult SetDoubleThreshold(_In_ Framework::CMultipleVariable rmvMin, _In_ Framework::CMultipleVariable rmvMax);
			EAlgorithmResult GetDoubleThreshold(_Out_ Framework::CMultipleVariable &rmvMin, _Out_ Framework::CMultipleVariable &rmvMax);

			EAlgorithmResult CConnectedComponent::SetLogicalCondition(_In_ ELogicalCondition lc);
			EAlgorithmResult CConnectedComponent::GetLogicalCondition(_Out_ ELogicalCondition& lc);

			EAlgorithmResult CConnectedComponent::SetMultipleChannelCondition(_In_ EMultipleChannelCondition mcc);
			EAlgorithmResult CConnectedComponent::GetMultipleChannelCondition(_Out_ EMultipleChannelCondition& mcc);

			EAlgorithmResult GetBoundarySize(_Out_ std::vector<CRavidPoint<int> >& vctBoundaryCount);
			EAlgorithmResult GetBoundarySize(_Out_ CRavidGeometryArray& rgaResult);
			EAlgorithmResult GetBoundarySize(_Out_ CRavidGeometryArray* pRgaResult);
			std::vector<CRavidPoint<int> > GetBoundarySize();

			EAlgorithmResult GetBoundary(_Out_ std::vector<CRavidRect<int> >& vctBoundary);
			EAlgorithmResult GetBoundary(_Out_ CRavidGeometryArray& rgaResult);
			EAlgorithmResult GetBoundary(_Out_ CRavidGeometryArray* pRgaResult);
			std::vector<CRavidRect<int> > GetBoundary();

			EAlgorithmResult GetArea(_Out_ std::vector<size_t>& vctArea);
			std::vector<size_t> GetArea();

			EAlgorithmResult GetConvexHull(_Out_ std::vector<std::vector<CRavidPoint<int>> >& vctConvex);
			EAlgorithmResult GetConvexHull(_Out_ CRavidGeometryArray& rgaResult);
			EAlgorithmResult GetConvexHull(_Out_ CRavidGeometryArray* pRgaResult);
			std::vector<std::vector<CRavidPoint<int>> > GetConvexHull();

			EAlgorithmResult GetContour(_Out_ std::vector<std::vector<CRavidPoint<int>> >& vctContour);
			EAlgorithmResult GetContour(_Out_ CRavidGeometryArray& rgaResult);
			EAlgorithmResult GetContour(_Out_ CRavidGeometryArray* pRgaResult);
			std::vector<std::vector<CRavidPoint<int>> > GetContour();

			EAlgorithmResult GetMinimumEnclosingRectangle(_Out_ std::vector<CRavidQuadrangle<double> >& vctMER);
			EAlgorithmResult GetMinimumEnclosingRectangle(_Out_ CRavidGeometryArray& rgaResult);
			EAlgorithmResult GetMinimumEnclosingRectangle(_Out_ CRavidGeometryArray* pRgaResult);
			std::vector<CRavidQuadrangle<double> > GetMinimumEnclosingRectangle();

			EAlgorithmResult GetAngles(_Out_ std::vector<float>& vctAngles);
			std::vector<float> GetAngles();

			EAlgorithmResult GetGravityPoint(_Out_ std::vector<CRavidPoint<double> >& vctGravityPoints);
			std::vector<CRavidPoint<double> > GetGravityPoint();

			EAlgorithmResult GetFeret(_Out_ std::vector<CRavidLine<double> >& vctFeretMax, _Out_ std::vector<CRavidLine<double> >& vctFeretMin);
			EAlgorithmResult GetFeret(_Out_ CRavidGeometryArray& rgaMaxResult, _Out_ CRavidGeometryArray& rgaMinResult);
			EAlgorithmResult GetFeret(_Out_ CRavidGeometryArray* pRgaMaxResult, _Out_ CRavidGeometryArray* pRgaMinResult);

			EAlgorithmResult GetCircularity(_Out_ std::vector<float>& vctCircularity);
			EAlgorithmResult GetCircularity(_Out_ std::vector<float>* pVctCircularity);
			std::vector<float> GetCircularity();

			EAlgorithmResult Filter(_In_ EFilterItem eItem, _In_ double dblValue, _In_ ELogicalCondition eCondition);

			EAlgorithmResult Sort(_In_ ESortItem eItem, _In_ ESortMethod eMethod);


			//////////////////////////////////////////////////////////////////////////
		private:
			std::unique_ptr<CInternalConnectedComponent> m_pInternal;

		};
	}
}
