#pragma once

#include <memory>

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;

		class CInternalBarcodeEncoder;

		class AFX_EXT_CLASS CBarcodeEncoder : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CBarcodeEncoder);

		public:
			enum E1DBarcodeEncoderType
			{
				E1DBarcodeEncoderType_EAN8,
				E1DBarcodeEncoderType_EAN13,
				E1DBarcodeEncoderType_EAN128,
				E1DBarcodeEncoderType_CODE11,
				E1DBarcodeEncoderType_CODE39,
				E1DBarcodeEncoderType_CODE128,
				E1DBarcodeEncoderType_MSI,
				E1DBarcodeEncoderType_UPCA,
				E1DBarcodeEncoderType_UPCE,
				E1DBarcodeEncoderType_Interleaved2Of5,
				E1DBarcodeEncoderType_Codabar
			};

			enum E1DBarcodeEncoderPattern
			{
				E1DBarcodeEncoderType_LLLLLLRRRRRR,
				E1DBarcodeEncoderType_LLGLGGRRRRRR,
				E1DBarcodeEncoderType_LLGGLGRRRRRR,
				E1DBarcodeEncoderType_LLGGGLRRRRRR,
				E1DBarcodeEncoderType_LGLLGGRRRRRR,
				E1DBarcodeEncoderType_LGGLLGRRRRRR,
				E1DBarcodeEncoderType_LGGGLLRRRRRR,
				E1DBarcodeEncoderType_LGLGLGRRRRRR,
				E1DBarcodeEncoderType_LGLGGLRRRRRR,
				E1DBarcodeEncoderType_LGGLGLRRRRRR,
			};


			CBarcodeEncoder();
			virtual ~CBarcodeEncoder();

// 			CBarcodeEncoder(_In_ const CBarcodeEncoder& refBE);
// 			CBarcodeEncoder(_In_ CBarcodeEncoder* pBE);

			EAlgorithmResult Write(_In_ const CString& strCode, _Out_ CRavidImage* pRi);
			EAlgorithmResult Write(_In_ const CString& strCode, _Out_ CRavidImage& refRi);

			EAlgorithmResult SetType(_In_ E1DBarcodeEncoderType eBET);
			EAlgorithmResult SetPattern(_In_ E1DBarcodeEncoderPattern eBEP);
			EAlgorithmResult SetPixelSize(_In_ int nPixelSize);

			E1DBarcodeEncoderType GetType(void);
			E1DBarcodeEncoderPattern GetPattern(void);
			int GetPixelSize(void);

		private:
			std::unique_ptr<CInternalBarcodeEncoder> m_pInternal;
		};
	}
}


