#pragma once

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalCircleGauge;
		class CRavidImage;

		class AFX_EXT_CLASS CCircleGauge : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CCircleGauge);

		public:

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

			CCircleGauge();
			virtual ~CCircleGauge();

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

			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>& rpCenter, _In_ double dblDiameter, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360., _In_opt_ double dblAngle = 0.);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>* pRpCenter, _In_ double dblDiameter, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360., _In_opt_ double dblAngle = 0.);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidRect<double>& rrRegion, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360.);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidRect<double>* pRrRegion, _In_ double dblTolerance, _In_opt_ double dblStartDeg = 0., _In_opt_ double dblDeltaDeg = 360.);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidCircle<double>& rcRegion, _In_ double dblTolerance);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidCircle<double>* pRcRegion, _In_ double dblTolerance);


			CRavidPoint<double> GetCenter();
			double GetRadius();
			double GetDiameter();
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

			CRavidCircle<double> GetMeasuredObject(_In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredObject(_Out_ CRavidCircle<double>& rcMeasuredObject, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredObject(_Out_ CRavidCircle<double>* pRcMeasuredObject, _In_opt_ int nIndex = 0);

			CRavidPoint<double> GetMeasuredCenter(_In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredCenter(_Out_ CRavidPoint<double>& rpCenter, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredCenter(_Out_ CRavidPoint<double>* pRpCenter, _In_opt_ int nIndex = 0);

			double GetMeasuredRadius(_In_opt_ int nIndex = 0);
			double GetMeasuredDiameter(_In_opt_ int nIndex = 0);

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

			EAlgorithmResult FitCircle(_In_ std::vector<Ravid::TPoint<float> >& vctValidPoint, _Out_ CRavidCircle<double>& rcCircleResult);
			EAlgorithmResult PassCircle(_Inout_ std::vector<Ravid::TPoint<float> >& vctValidPoint, _Out_ std::vector<Ravid::TPoint<float> >& vctInvalidPoint, _Inout_ CRavidCircle<double>& rcCircleResult);

			CInternalCircleGauge* m_pInternal = nullptr;
		};
	}
}

