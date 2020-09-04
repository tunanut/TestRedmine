#pragma once

#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;

		class CInternalDataMatrixEncoder;

		class AFX_EXT_CLASS CDataMatrixEncoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CDataMatrixEncoder);

		public:
			enum EDataMatrixECCMode
			{
				EDataMatrixECCMode_200ASCII_AND_DIGIT = 0,
				EDataMatrixECCMode_200C40,
				EDataMatrixECCMode_200TEXT,
				EDataMatrixECCMode_200X12,
				EDataMatrixECCMode_200EDIFACT,
				EDataMatrixECCMode_200BASE256,
			};

			CDataMatrixEncoder();
			virtual ~CDataMatrixEncoder();

// 			CDataMatrixEncoder(_In_ const CDataMatrixEncoder& DME);
// 			CDataMatrixEncoder(_In_ CDataMatrixEncoder* pDME);

			EAlgorithmResult Write(_In_ const CString& strCode, _Out_ CRavidImage* pRi);
			EAlgorithmResult Write(_In_ const CString& strCode, _Out_ CRavidImage& refRi);

			EAlgorithmResult SetMode(_In_ EDataMatrixECCMode eDME);
			EAlgorithmResult SetPixelSize(_In_ int nPixelSize);

			EDataMatrixECCMode GetMode(void);
			int GetPixelSize(void);

		private:
			std::unique_ptr<CInternalDataMatrixEncoder> m_pInternal;

		};
	}
}


