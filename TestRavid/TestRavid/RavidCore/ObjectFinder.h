#pragma once

#include "RavidRect.h"

#include <vector>

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalObjectFinder;

		class AFX_EXT_CLASS CObjectFinder : public CRavidObject
		{
		public:
			CObjectFinder();
			virtual ~CObjectFinder();

			RavidPreventCopySelf(CObjectFinder);

			typedef struct sObjectFinderRt
			{
				float fScore;
				float fAngle;
				float fScale;
				CRavidRect<double> rrResultRegion;
			}
			SObjectFinderResult;


			bool Clear();

			EAlgorithmResult Learn(_In_ CRavidImage& imgInfo, _In_opt_ CRavidGeometry* pROI = nullptr);
			EAlgorithmResult Learn(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidGeometry* pROI = nullptr);

			bool IsLearned();

			EAlgorithmResult Find(_In_ CRavidImage& imgInfo, _In_opt_ CRavidGeometry* pROI = nullptr);
			EAlgorithmResult Find(_In_ CRavidImage* pImgInfo, _In_opt_ CRavidGeometry* pROI = nullptr);


			EAlgorithmResult GetResults(_Out_ std::vector<SObjectFinderResult>& vctResults);


			// The file extension is ".rof"
			EAlgorithmResult Load(_In_ std::wstring strPatternFile);
			EAlgorithmResult Save(_In_ std::wstring strPatternFile);


			EAlgorithmResult GetPatternImage(_Out_ CRavidImage& imgOutPattern);
			EAlgorithmResult GetPatternImage(_Out_ CRavidImage* pImgOutPattern);


			// Settings
			EAlgorithmResult SetMaxInstance(_In_opt_ size_t stMaxInstance = 1);
			size_t GetMaxInstance();

			EAlgorithmResult SetMinimalDetectingScore(_In_opt_ float fScore = .5f);
			float GetMinimalDetectingScore();
			
			EAlgorithmResult SetAngleBias(_In_opt_ float fAngleBias = 0.f);
			float GetAngleBias();

			EAlgorithmResult SetAngleTolerance(_In_opt_ float fAngleTolerance = 0.f);
			float GetAngleTolerance();

			EAlgorithmResult SetScaleBias(_In_opt_ float fScaleBias = 1.f);
			float GetScaleBias();

			EAlgorithmResult SetScaleTolerance(_In_opt_ float fScaleTolerance = 0.f);
			float GetScaleTolerance();

			EAlgorithmResult SetInterpolation(_In_opt_ bool bUse = true);
			bool GetInterpolation();

		private:

			CInternalObjectFinder* m_pInternal = nullptr;
		};
	}
}

