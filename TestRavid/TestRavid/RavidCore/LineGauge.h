#pragma once

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalLineGauge;
		class CRavidImage;

		class AFX_EXT_CLASS CLineGauge : public CRavidObject
		{
			RavidUseDynamicCreation();
			//RavidPreventCopySelf(CLineGauge); 사유 : 변경 전 참조 존재

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

			CLineGauge();
			virtual ~CLineGauge();

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

			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>& rpCenter, _In_ double dblLength, _In_ double dblTolerance, _In_ double dblAngle);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>* pRpCenter, _In_ double dblLength, _In_ double dblTolerance, _In_ double dblAngle);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>& rpStart, _In_ CRavidPoint<double>& rpEnd, _In_ double dblTolerance);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>* pRpStart, _In_ CRavidPoint<double>* pRpEnd, _In_ double dblTolerance);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidLine<double>& rlMeasurementLine, _In_ double dblTolerance);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidLine<double>* pRlMeasurementLine, _In_ double dblTolerance);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidRect<double>& rrRegion);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidRect<double>* pRrRegion);

			CRavidPoint<double> GetCenter();
			double GetLength();
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

			CRavidLine<double> GetMeasuredObject(_In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredObject(_Out_ CRavidLine<double>& rlMeasuredObject, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredObject(_Out_ CRavidLine<double>* pRlMeasuredObject, _In_opt_ int nIndex = 0);

			CRavidPoint<double> GetMeasuredCenter(_In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredCenter(_Out_ CRavidPoint<double>& rpCenter, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredCenter(_Out_ CRavidPoint<double>* pRpCenter, _In_opt_ int nIndex = 0);

			double GetMeasuredLength(_In_opt_ int nIndex = 0);
			double GetMeasuredAngle(_In_opt_ int nIndex = 0);
			double GetMeasuredRadian(_In_opt_ int nIndex = 0);

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

			EAlgorithmResult FitLine(_In_ std::vector<Ravid::TPoint<float> >& vctValidPoint, _Out_ CRavidLine<double>& rlLineGauge);
			EAlgorithmResult PassLine(_Inout_ std::vector<Ravid::TPoint<float> >& vctValidPoint, _Out_ std::vector<Ravid::TPoint<float> >& vctInvalidPoint, _Inout_ CRavidLine<double>& rlLineGauge);

			CInternalLineGauge* m_pInternal = nullptr;


			friend class CRectangleGauge;
			friend class CQuadrangleGauge;
		};
	}
}

