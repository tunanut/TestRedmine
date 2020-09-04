#pragma once

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalEllipseGauge;

		class CRavidImage;

		class AFX_EXT_CLASS CEllipseGauge : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CEllipseGauge);

		public:

			CEllipseGauge();
			virtual ~CEllipseGauge();

			enum ETransitionType
			{
				ETransitionType_BW = 0,
				ETransitionType_WB,
				ETransitionType_BWorWB,
				ETransitionType_BWB,
				ETransitionType_WBW,
			};

			enum ETransitionChoice
			{
				ETransitionChoice_Begin = 0,
				ETransitionChoice_End,
				ETransitionChoice_LargestAmplitude,
				ETransitionChoice_LargestArea,
				ETransitionChoice_Closest,
			};

			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<int>* pRrRegion);
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<int>* pRrRegion);
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<long long>* pRrRegion);
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<long long>* pRrRegion);
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<float>* pRrRegion);
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<float>* pRrRegion);
			EAlgorithmResult Measure(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidRect<double>* pRrRegion = nullptr);
			EAlgorithmResult Measure(_In_ CRavidImage& refImgInfo, _In_opt_ CRavidRect<double>* pRrRegion = nullptr);

			//////////////////////////////////////////////////////////////////////////
			// Measurement settings

			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>& rpCenter, _In_ double dblDiameter1, _In_ double dblDiameter2, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360., _In_opt_ double dblAngle = 0.);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>* pRpCenter, _In_ double dblDiameter1, _In_ double dblDiameter2, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360., _In_opt_ double dblAngle = 0.);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidRect<double>& rrRegion, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360.);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidRect<double>* pRrRegion, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360.);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidCircle<double>& rcRegion, _In_ double dblTolerance);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidCircle<double>* pRcRegion, _In_ double dblTolerance);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidEllipse<double>& reRegion, _In_ double dblTolerance);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidEllipse<double>* pReRegion, _In_ double dblTolerance);


			CRavidPoint<double> GetCenter();
			double GetRadius1();
			double GetRadius2();
			double GetDiameter1();
			double GetDiameter2();
			double GetTolerance();
			double GetAngle();
			double GetRadian();

			ETransitionType GetTransitionType();
			void SetTransitionType(_In_ ETransitionType eTransitionType);

			ETransitionChoice GetTransitionChoice();
			void SetTransitionChoice(_In_ ETransitionChoice eTransitionChoice);

			long GetThreshold();
			void SetThreshold(_In_ long nThreshold);

			long GetMinimumAmplitude();
			void SetMinimumAmplitude(_In_ long nMinimumAmplitude);

			double GetSamplingStep();
			void SetSamplingStep(_In_ double dblSamplingStep);

			double GetOutLiersThreshold();
			void SetOutLiersThreshold(_In_ double dblOutLiersThreshold);

			int GetNumOfPass();
			void SetNumOfPass(_In_ int nNumOfPass);

			long GetThickness();
			void SetThickness(_In_ long nThickness);

			//////////////////////////////////////////////////////////////////////////


			//////////////////////////////////////////////////////////////////////////
			// Measurement Result

			CRavidEllipse<double> GetMeasuredObject(_In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredObject(_Out_ CRavidEllipse<double>& reMeasuredObject, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredObject(_Out_ CRavidEllipse<double>* pReMeasuredObject, _In_opt_ int nIndex = 0);

			CRavidPoint<double> GetMeasuredCenter(_In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredCenter(_Out_ CRavidPoint<double>& rpCenter, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredCenter(_Out_ CRavidPoint<double>* pRpCenter, _In_opt_ int nIndex = 0);

			double GetMeasuredRadius1(_In_opt_ int nIndex = 0);
			double GetMeasuredRadius2(_In_opt_ int nIndex = 0);
			double GetMeasuredDiameter1(_In_opt_ int nIndex = 0);
			double GetMeasuredDiameter2(_In_opt_ int nIndex = 0);
			double GetMeasuredAngle(_In_opt_ int nIndex = 0);

			std::vector<CRavidPoint<double> > GetMeasuredValidPoints(_In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredValidPoints(_Out_ std::vector<CRavidPoint<double> >& vctResult, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredValidPoints(_Out_ std::vector<CRavidPoint<double> >* pVctResult, _In_opt_ int nIndex = 0);

			std::vector<CRavidPoint<double> > GetMeasuredInvalidPoints(_In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredInvalidPoints(_Out_ std::vector<CRavidPoint<double> >& vctResult, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredInvalidPoints(_Out_ std::vector<CRavidPoint<double> >* pVctResult, _In_opt_ int nIndex = 0);

			std::vector<CRavidPoint<double> > GetMeasuredPoints(_In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredPoints(_Out_ std::vector<CRavidPoint<double> >& vctResult, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredPoints(_Out_ std::vector<CRavidPoint<double> >* pVctResult, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredPoints(_Out_ std::vector<Ravid::TPoint<float> >* pVctResult, _In_opt_ int nIndex = 0);

			//////////////////////////////////////////////////////////////////////////

		private:

			void ClearInternalData();

			EAlgorithmResult FitEllipse(_In_ std::vector<Ravid::TPoint<float> >& vctValidPoint, _Out_ CRavidEllipse<double>& reEllipseResult);
			EAlgorithmResult PassEllipse(_Inout_ std::vector<Ravid::TPoint<float> >& vctValidPoint, _Out_ std::vector<Ravid::TPoint<float> >& vctInvalidPoint, _Inout_ CRavidEllipse<double>& reEllipseResult);

			CInternalEllipseGauge* m_pInternal = nullptr;
						
		};
	}
}

