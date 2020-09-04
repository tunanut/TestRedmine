#pragma once

#include <memory>

namespace Ravid
{
	namespace Mathematics
	{
		class CInternalMatrix;

		class AFX_EXT_CLASS CMatrix : public CRavidObject
		{
			RavidUseDynamicCreation(this);

		public:
			CMatrix();
			virtual ~CMatrix();

			CMatrix(_In_ const CMatrix& matrix);
			CMatrix(_In_ CMatrix* pMatrix);
			CMatrix(_In_ ptrdiff_t nColumn, _In_ ptrdiff_t nRow);

			void operator+=(_In_ const int& nParam);
			void operator+=(_In_ const long long& llParam);
			void operator+=(_In_ const float& fParam);
			void operator+=(_In_ const double& dblParam);
			void operator+=(_In_ const CMatrix& cMat);
			
			void operator-=(_In_ const int& nParam);
			void operator-=(_In_ const long long& llParam);
			void operator-=(_In_ const float& fParam);
			void operator-=(_In_ const double& dblParam);
			void operator-=(_In_ const CMatrix& cMat);

			void operator*=(_In_ const int& nParam);
			void operator*=(_In_ const long long& llParam);
			void operator*=(_In_ const float& fParam);
			void operator*=(_In_ const double& dblParam);
			void operator*=(_In_ const CMatrix& cMat);

			void operator/=(_In_ const int& nParam);
			void operator/=(_In_ const long long& llParam);
			void operator/=(_In_ const float& fParam);
			void operator/=(_In_ const double& dblParam);

			CMatrix operator+(_In_ const int& nParam);
			CMatrix operator+(_In_ const long long& llParam);
			CMatrix operator+(_In_ const float& fParam);
			CMatrix operator+(_In_ const double& dblParam);
			CMatrix operator+(_In_ const CMatrix& cMat);

			CMatrix operator-(_In_ const int& nParam);
			CMatrix operator-(_In_ const long long& llParam);
			CMatrix operator-(_In_ const float& fParam);
			CMatrix operator-(_In_ const double& dblParam);
			CMatrix operator-(_In_ const CMatrix& cMat);

			CMatrix operator*(_In_ const int& nParam);
			CMatrix operator*(_In_ const long long& llParam);
			CMatrix operator*(_In_ const float& fParam);
			CMatrix operator*(_In_ const double& dblParam);
			CMatrix operator*(_In_ const CMatrix& cMat);

			CMatrix operator/(_In_ const int& nParam);
			CMatrix operator/(_In_ const long long& llParam);
			CMatrix operator/(_In_ const float& fParam);
			CMatrix operator/(_In_ const double& dblParam);

			void operator=(_In_ const CMatrix& matrix);
			void operator=(_In_ CMatrix* pMatrix);

			bool operator==(_In_ const CMatrix& cMat);
			bool operator!=(_In_ const CMatrix& cMat);

			bool InitMatrix(_In_ ptrdiff_t nColumn, _In_ ptrdiff_t nRow);

			virtual bool __fastcall IsValid() override;

			bool Copy(_In_ CMatrix& matrix);
			bool Copy(_In_ CMatrix* pMatrix);

			void Clear();

			ptrdiff_t GetColumn();
			ptrdiff_t GetRow();
			ptrdiff_t GetElementCount();
			ptrdiff_t GetTotalSize();

			double** GetMatrixYCache();
			double* GetMatrix();
			bool SetMatrix(_In_ double* pMatrix, _In_ ptrdiff_t nColumn, _In_ ptrdiff_t nRow);

			double* GetValue(_In_ ptrdiff_t nColumn, _In_ ptrdiff_t nRow);
			bool SetValue(_In_ ptrdiff_t nColumn, _In_ ptrdiff_t nRow, _In_ double value);

			bool Add(_In_ CMatrix& matrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);
			bool Add(_In_ CMatrix* pMatrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);

			bool Subtract(_In_ CMatrix& matrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);
			bool Subtract(_In_ CMatrix* pMatrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);

			bool Multiply(_In_ CMatrix& matrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);
			bool Multiply(_In_ CMatrix* pMatrix, _Out_opt_ CMatrix* pResultMatrix = nullptr);

			bool Transpose(_Out_opt_ CMatrix* pResultMatrix = nullptr);
			bool Invert(_Out_opt_ CMatrix* pResultMatrix = nullptr);
			bool Unit(_Out_opt_ CMatrix* pResultMatrix = nullptr);

			double GetDeterminant();

		protected:
			std::unique_ptr<CInternalMatrix> m_pInternal;
		};
	}
}

