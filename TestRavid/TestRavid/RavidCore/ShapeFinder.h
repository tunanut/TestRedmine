#pragma once

#include "RavidRect.h"

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalShapeFinder;

		class AFX_EXT_CLASS CShapeFinder : public CRavidObject
		{
		public:
			CShapeFinder();
			virtual ~CShapeFinder();

			RavidPreventCopySelf(CShapeFinder);
			
			typedef struct _sShapeFinderResult
			{
				float fScore;
				float fAngle;
				float fScale;
				CRavidRect<double> rrRegion;

			} SShapeFinderResult;

			EAlgorithmResult Learn(_In_ CRavidImage* pRiSrc, _In_opt_ CRavidGeometry* pRgRegion = nullptr);
			EAlgorithmResult Find(_In_ CRavidImage* pRiSrc, _Out_ std::vector<SShapeFinderResult>& vctResults, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult GetModelFeaturePoints(_In_ float fAngleDegree, _In_ float fScale, _Out_ std::vector<CRavidPoint<float>>& vctFeaturePoints);

			EAlgorithmResult Save(_In_ std::wstring strModelFile);
			EAlgorithmResult Load(_In_ std::wstring strModelFile);

			EAlgorithmResult SetInstanceNumber(_In_ int nInstanceNumber);
			int				 GetInstanceNumber();

			EAlgorithmResult SetMaxLevel(_In_ int nMaxLevel);
			int				 GetMaxLevel();

			EAlgorithmResult SetStrength(_In_ float fStrength);
			float			 GetStrength();

			EAlgorithmResult SetAngleStart(_In_ float fAngleDegreeStart);
			float			 GetAngleStart();

			EAlgorithmResult SetAngleEnd(_In_ float fAngleDegreeEnd);
			float			 GetAngleEnd();

			EAlgorithmResult SetScaleMin(_In_ float fScaleMin);
			float			 GetScaleMin();

			EAlgorithmResult SetScaleMax(_In_ float fScaleMax);
			float			 GetScaleMax();

			EAlgorithmResult SetMinScore(_In_ float fMinScore);
			float			 GetMinScore();

			EAlgorithmResult SetExtendedArea(_In_ float fExtendedArea);
			float			 GetExtendedArea();

			EAlgorithmResult SetContrast(_In_ bool bInvertedContrast);
			bool			 GetContrast();

			EAlgorithmResult SetStrengthModeAuto(_In_ bool bStrengthModeAuto);
			bool			 GetStrengthModeAuto();


		private:
			CInternalShapeFinder* m_pInternal = nullptr;
		};

	}
}

