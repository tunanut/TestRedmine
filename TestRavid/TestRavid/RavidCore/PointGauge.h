#pragma once

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalPointGauge;
		class CRavidImage;

		class AFX_EXT_CLASS CPointGauge : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CPointGauge);

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
				ETransitionChoice_All,
			};

		public:
			CPointGauge();
			virtual ~CPointGauge();

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

			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>& rpCenter, _In_ double dblTolerance, _In_ double dblAngle);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>* pRpCenter, _In_ double dblTolerance, _In_ double dblAngle);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>& rpStart, _In_ CRavidPoint<double>& rpEnd);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidPoint<double>* pRpStart, _In_ CRavidPoint<double>* pRpEnd);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidLine<double>& rlMeasurementLine);
			EAlgorithmResult SetMeasurementRegion(_In_ CRavidLine<double>* pRlMeasurementLine);

			CRavidPoint<double> GetCenter();
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

			long GetThickness();
			void SetThickness(_In_ long nThickness);

			//////////////////////////////////////////////////////////////////////////


			//////////////////////////////////////////////////////////////////////////
			// Measurement Result

			std::vector<CRavidPoint<double> > GetMeasuredPoints(_In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredPoints(_Out_ std::vector<CRavidPoint<double> >& vctResult, _In_opt_ int nIndex = 0);
			EAlgorithmResult GetMeasuredPoints(_Out_ std::vector<CRavidPoint<double> >* pVctResult, _In_opt_ int nIndex = 0);

			//////////////////////////////////////////////////////////////////////////

		private:

			void ClearInternalData();
			CInternalPointGauge* m_pInternal = nullptr;


		};
	}
}

