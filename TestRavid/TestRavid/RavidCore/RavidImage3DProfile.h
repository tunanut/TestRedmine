#pragma once

#include "RavidImage.h"

namespace Ravid
{
	namespace Algorithms
	{
		class AFX_EXT_CLASS CRavidImage3DProfile : public CRavidImage
		{
		public:
			CRavidImage3DProfile();
			virtual ~CRavidImage3DProfile();

			virtual void Initialize(size_t st3DSizeX, size_t st3DSizeY = 1);
			virtual void Terminate();

			size_t Get3DSizeX();
			size_t Get3DSizeY();

			virtual float* GetRawData();

			enum EInnermostPosition
			{
				EInnermostPosition_FirstPixel = 0,
				EInnermostPosition_LastPixel,
			};

			virtual EAlgorithmResult CalculateData(_In_ double dblCameraAngle, _In_ double dblLaserAngle, _In_ double dblCameraAccuracyX, _In_ double dblMotionAccuracyY, _Out_ CRavidImage* pResult3D, _In_opt_ CRavidImage3DProfile* pBase = nullptr);
			virtual EAlgorithmResult CalculateDataForRotaryStage(_In_ double dblCameraAngle, _In_ double dblLaserAngle, _In_ double dblCameraAccuracy, _In_ double dblInnermostAccuracy, _In_ double dblInnermostRadius, _In_ EInnermostPosition eInnermostPosition, _Out_ CRavidImage* pResult3D, _In_opt_ CRavidImage3DProfile* pBase = nullptr);

			virtual EAlgorithmResult CalculateDataTest(_In_ double dblCameraAngle, _In_ double dblLaserAngle, _In_ double dblCameraAccuracy, _In_ double dblInnermostAccuracy, _In_ double dblInnermostRadius, _In_ EInnermostPosition eInnermostPosition, _Out_ CRavidImage* pResult3D, _In_opt_ CRavidImage3DProfile* pBase = nullptr);
			
		protected:
			size_t m_st3DSizeX = 0;
			size_t m_st3DSizeY = 0;
			
			float* m_pfPeak = nullptr;

		};
	}
}

