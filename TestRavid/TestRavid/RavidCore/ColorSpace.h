#pragma once

namespace Ravid
{
	namespace Algorithms
	{
		class AFX_EXT_CLASS CColorSpace : public CRavidObject
		{
		public:
			CColorSpace();
			virtual ~CColorSpace();

			EAlgorithmResult ConvertRGBToHSV(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pV, _In_opt_ int nRGBDepth = 8);
			EAlgorithmResult ConvertRGBToHSV(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ Framework::CMultipleVariable* pRmcHSV, _In_opt_ int nRGBDepth = 8);
			EAlgorithmResult ConvertRGBToHSV(_In_ COLORREF crRGB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pV);
			EAlgorithmResult ConvertRGBToHSV(_In_ COLORREF crRGB, _Out_ Framework::CMultipleVariable* pRmcHSV);
			EAlgorithmResult ConvertRGBToHSV(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pV, _In_opt_ int nRGBDepth = 8);
			EAlgorithmResult ConvertRGBToHSV(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ Framework::CMultipleVariable* pRmcHSV, _In_opt_ int nRGBDepth = 8);

			EAlgorithmResult ConvertHSVToRGB(_In_ float fH, _In_ float fS, _In_ float fV, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
			EAlgorithmResult ConvertHSVToRGB(_In_ float fH, _In_ float fS, _In_ float fV, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
			EAlgorithmResult ConvertHSVToRGB(_In_ float fH, _In_ float fS, _In_ float fV, _Out_ COLORREF* pCrRGB);
			EAlgorithmResult ConvertHSVToRGB(_In_ float fH, _In_ float fS, _In_ float fV, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);
			EAlgorithmResult ConvertHSVToRGB(_In_ Framework::CMultipleVariable& rmvHSV, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
			EAlgorithmResult ConvertHSVToRGB(_In_ Framework::CMultipleVariable& rmvHSV, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
			EAlgorithmResult ConvertHSVToRGB(_In_ Framework::CMultipleVariable& rmvHSV, _Out_ COLORREF* pCrRGB);
			EAlgorithmResult ConvertHSVToRGB(_In_ Framework::CMultipleVariable& rmvHSV, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);

			EAlgorithmResult ConvertRGBToHSL(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pL, _In_opt_ int nRGBDepth = 8);
			EAlgorithmResult ConvertRGBToHSL(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ Framework::CMultipleVariable* pRmcHSL, _In_opt_ int nRGBDepth = 8);
			EAlgorithmResult ConvertRGBToHSL(_In_ COLORREF crRGB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pL);
			EAlgorithmResult ConvertRGBToHSL(_In_ COLORREF crRGB, _Out_ Framework::CMultipleVariable* pRmcHSL);
			EAlgorithmResult ConvertRGBToHSL(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ float* pH, _Out_ float* pS, _Out_ float* pL, _In_opt_ int nRGBDepth = 8);
			EAlgorithmResult ConvertRGBToHSL(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ Framework::CMultipleVariable* pRmcHSL, _In_opt_ int nRGBDepth = 8);

			EAlgorithmResult ConvertHSLToRGB(_In_ float fH, _In_ float fS, _In_ float fL, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
			EAlgorithmResult ConvertHSLToRGB(_In_ float fH, _In_ float fS, _In_ float fL, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
			EAlgorithmResult ConvertHSLToRGB(_In_ float fH, _In_ float fS, _In_ float fL, _Out_ COLORREF* pCrRGB);
			EAlgorithmResult ConvertHSLToRGB(_In_ float fH, _In_ float fS, _In_ float fL, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);
			EAlgorithmResult ConvertHSLToRGB(_In_ Framework::CMultipleVariable& rmvHSL, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
			EAlgorithmResult ConvertHSLToRGB(_In_ Framework::CMultipleVariable& rmvHSL, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
			EAlgorithmResult ConvertHSLToRGB(_In_ Framework::CMultipleVariable& rmvHSL, _Out_ COLORREF* pCrRGB);
			EAlgorithmResult ConvertHSLToRGB(_In_ Framework::CMultipleVariable& rmvHSL, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);

			EAlgorithmResult ConvertRGBToCMYK(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ WORD* pC, _Out_ WORD* pM, _Out_ WORD* pY, _Out_ WORD* pK, _In_opt_ int nRGBDepth = 8);
			EAlgorithmResult ConvertRGBToCMYK(_In_ WORD wR, _In_ WORD wG, _In_ WORD wB, _Out_ Framework::CMultipleVariable* pRmcCMYK, _In_opt_ int nRGBDepth = 8);
			EAlgorithmResult ConvertRGBToCMYK(_In_ COLORREF crRGB, _Out_ WORD* pC, _Out_ WORD* pM, _Out_ WORD* pY, _Out_ WORD* pK);
			EAlgorithmResult ConvertRGBToCMYK(_In_ COLORREF crRGB, _Out_ Framework::CMultipleVariable* pRmcCMYK);
			EAlgorithmResult ConvertRGBToCMYK(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ WORD* pC, _Out_ WORD* pM, _Out_ WORD* pY, _Out_ WORD* pK, _In_opt_ int nRGBDepth = 8);
			EAlgorithmResult ConvertRGBToCMYK(_In_ Framework::CMultipleVariable& rmvRGB, _Out_ Framework::CMultipleVariable* pRmcCMYK, _In_opt_ int nRGBDepth = 8);

			EAlgorithmResult ConvertCMYKToRGB(_In_ WORD wC, _In_ WORD wM, _In_ WORD wY, _In_ WORD wK, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
			EAlgorithmResult ConvertCMYKToRGB(_In_ WORD wC, _In_ WORD wM, _In_ WORD wY, _In_ WORD wK, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
			EAlgorithmResult ConvertCMYKToRGB(_In_ WORD wC, _In_ WORD wM, _In_ WORD wY, _In_ WORD wK, _Out_ COLORREF* pCrRGB);
			EAlgorithmResult ConvertCMYKToRGB(_In_ WORD wC, _In_ WORD wM, _In_ WORD wY, _In_ WORD wK, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);
			EAlgorithmResult ConvertCMYKToRGB(_In_ Framework::CMultipleVariable& rmvCMYK, _Out_ BYTE* pR, _Out_ BYTE* pG, _Out_ BYTE* pB);
			EAlgorithmResult ConvertCMYKToRGB(_In_ Framework::CMultipleVariable& rmvCMYK, _Out_ WORD* pR, _Out_ WORD* pG, _Out_ WORD* pB, _In_ int nRGBDepth);
			EAlgorithmResult ConvertCMYKToRGB(_In_ Framework::CMultipleVariable& rmvCMYK, _Out_ COLORREF* pCrRGB);
			EAlgorithmResult ConvertCMYKToRGB(_In_ Framework::CMultipleVariable& rmvCMYK, _Out_ Framework::CMultipleVariable* pRmcRGB, _In_ int nRGBDepth);

		};
	}
}

