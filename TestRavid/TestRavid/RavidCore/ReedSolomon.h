#pragma once

#include "FiniteField.h"

#include <memory>
#include <vector>

/*
 Abbreviation
 - CL : Carry-Less
 - GF : Galois Field(=Finite Field)
*/

namespace Ravid
{
	namespace Mathematics
	{
		class CInternalReedSolomon;

		class AFX_EXT_CLASS CReedSolomon : public CFiniteField
		{
		public:
			enum EPrimitivePolynomial
			{
				EPrimitivePolynomial_QRCode = 0x11d,
				EPrimitivePolynomial_DataMatrix = 0x12d
			};

			enum EFirstConsecutiveRoot
			{
				EFirstConsecutiveRoot_QRCode = 0,
				EFirstConsecutiveRoot_DataMatrix = 1
			};

			explicit CReedSolomon(_In_opt_ int nPrim = EPrimitivePolynomial_QRCode, _In_opt_ int nFCR = EFirstConsecutiveRoot_QRCode, _In_opt_ int nGenerator = 2);
			virtual ~CReedSolomon();

			void SetFiniteField(EPrimitivePolynomial ePP, EFirstConsecutiveRoot eFCR, int nGenerator);

			std::vector<int> Encode(_In_ const std::vector<int>& vctMsgIn, _In_ int nErrCnt);
			bool Encode(_In_ const std::vector<int>& vctMsgIn, _In_ int nErrCnt, _Out_ std::vector<int>& vctData, _Out_ std::vector<int>& vctErrorCorrection);

			bool Decode(_In_ const std::vector<int>& vctSrc, _In_ int nErrCnt, _Out_ std::vector<int>& vctCorrectedMsg, _Out_ std::vector<int>& vctCorrectedEcc, _In_opt_ const std::vector<int>& vctErasePos = std::vector<int>());

			bool Decode(_In_ const std::vector<unsigned char>& vctSrc, _In_ int nErrCnt, _Out_ std::vector<int>& vctCorrectedMsg, _Out_ std::vector<int>& vctCorrectedEcc, _In_opt_ const std::vector<int>& vctErasePos = std::vector<int>());

			void Clear();

			int GetErrorErasureCount(void);

		private:
			std::vector<int> GeneratorPoly(_In_ int nErrCnt);

			std::vector<int> CalcSyndromes(_In_ const std::vector<int>& vctMsg, _In_ int nErrCnt);
			bool Check(_In_ const std::vector<int>& vctMsg, _In_ int nErrCnt);

			std::vector<int> FindErrataLocator(_In_ const std::vector<int>& vctErrPos);
			std::vector<int> FindErrorEvaluator(_In_ const std::vector<int>& vctSynd, _In_ const std::vector<int>& vctErrLoc, _In_ int nErrCnt);
			std::vector<int> CorrectErrata(_In_ const std::vector<int>& vctMsgIn, _In_ const std::vector<int>& vctSynd, _In_ const std::vector<int>& vctErrPos);

			bool FindErrorLocator(_In_ const std::vector<int>& vctSynd, _In_ int nErrCnt, _Out_ std::vector<int>& vctErrLoc, _In_opt_ const std::vector<int>& vctEraseLoc = std::vector<int>(), _In_opt_ int nEraseCount = 0);
			bool FindErrors(_In_ const std::vector<int>& vctErrLoc, _In_ int nMsgCnt, _Out_ std::vector<int>& vctErrPos);
			std::vector<int> ForneySyndromes(_In_ const std::vector<int>& vctSynd, _In_ const std::vector<int>& vctPos, _In_ int nErrCnt);

			bool CorrectMessage(_In_ const std::vector<int>& vctMsgIn, _In_ int nErrCnt, _Out_ std::vector<int>& vctCorrectedMsg, _Out_ std::vector<int>& vctCorrectedEcc, _In_opt_ const std::vector<int>& vctErasePos = std::vector<int>());

		private:
			std::unique_ptr<CInternalReedSolomon> m_pInternal;
		};
	}
}






