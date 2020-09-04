#pragma once

#include <vector>
#include <string>
#include <memory>
#include "RavidQuadrangle.h"
#include "RavidRect.h"

namespace Ravid
{
	namespace Algorithms
	{
		class CInternalOCR;
		class CRavidImage;

		struct SOCRCandidate
		{
			CRavidQuadrangle<double> rqBoundary;
			CRavidRect<int>		 rrBoundary;

			int		nLineId;

			char	cCharacter;
			double	dblScore;
			double	dblAngle;
		};

		struct SOCRModel
		{
			double dblClass;
			double dblPriorProb;
		};

		class AFX_EXT_CLASS COpticalCharacterRecognizer : public CRavidObject
		{
		public:
			RavidUseDynamicCreation();
			RavidPreventCopySelf(COpticalCharacterRecognizer);

			enum ECharColor
			{
				WhiteOnBlack = 0,
				BlackOnWhite,
				LightOnDark,
				DarkOnLight
			};

			COpticalCharacterRecognizer();
			virtual ~COpticalCharacterRecognizer();

			EAlgorithmResult Segment(_In_ CRavidImage* pImgInfo, _Out_ std::vector<SOCRCandidate>& vctCandidates, _In_opt_ CRavidGeometry* pRgRegion = nullptr);
			EAlgorithmResult Train(_In_ CRavidImage* pImgInfo, _In_ const std::vector<SOCRCandidate>& vctCandidates);
			EAlgorithmResult Decode(_In_ CRavidImage* pImgInfo, _Out_ std::vector<SOCRCandidate>& vctChars, _In_opt_ CRavidGeometry* pRgRegion = nullptr);

			EAlgorithmResult Save(_In_ const std::wstring& strPathFile);
			EAlgorithmResult Load(_In_ const std::wstring& strPathFile);

			std::vector<SOCRModel>& GetModel() const;
			EAlgorithmResult DeleteModel(_In_ double dblClass);

			EAlgorithmResult SetThreshold(_In_ int nThreshold);
			int	GetThreshold() const;

			EAlgorithmResult SetMinWidth(_In_ int nMinWidth);
			int	GetMinWidth() const;

			EAlgorithmResult SetMaxWidth(_In_ int nMaxWidth);
			int	GetMaxWidth() const;

			EAlgorithmResult SetMinHeight(_In_ int nMinHeight);
			int	GetMinHeight() const;

			EAlgorithmResult SetMaxHeight(_In_ int nMaxHeight);
			int	GetMaxHeight() const;

			EAlgorithmResult SetCharacterColor(_In_ ECharColor eColor);
			ECharColor GetCharacterColor() const;

			EAlgorithmResult SetLineSegment(_In_ bool bUseLineSegment);
			bool GetLineSegment() const;

			EAlgorithmResult SetLineGap(_In_ double dblGap);
			double GetLineGap() const;

			EAlgorithmResult SetAngleCorrection(_In_ bool bUseAngleCorrection);
			bool GetAngleCorrection() const;

			EAlgorithmResult SetWithScale(_In_ bool bScaled);
			bool GetWithScale() const;

			EAlgorithmResult SetWithRotation(_In_ bool bRotation);
			bool GetWithRotation() const;

			EAlgorithmResult SetSampleRate(_In_ int nSampleRate);
			int GetLSampleRate() const;

			EAlgorithmResult SetTolerance(_In_ double dblTolerance);
			double GetTolerance() const;

		private:
			std::unique_ptr<CInternalOCR> m_pInternal;
		};

	}
}

