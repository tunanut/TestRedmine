#pragma once

#include "../Libraries/Includes/RavidSecurity/RavidObject.h"

namespace Ravid
{
	namespace Framework
	{
		class CInterMultipleVariable;
		class AFX_EXT_CLASS CMultipleVariable : public CRavidObject
		{
		public:
			CMultipleVariable();
			virtual ~CMultipleVariable();

			CMultipleVariable(_In_ const CMultipleVariable& rmvMultiConstant);

			CMultipleVariable(_In_ const double& dblConst1);
			CMultipleVariable(_In_ const double& dblConst1, _In_ const double& dblConst2);
			CMultipleVariable(_In_ const double& dblConst1, _In_ const double& dblConst2, _In_ const double& dblConst3);
			CMultipleVariable(_In_ const double& dblConst1, _In_ const double& dblConst2, _In_ const double& dblConst3, _In_ const double& dblConst4);

			void operator=(_In_ CMultipleVariable& rmMultiConst);
			void operator=(_In_ double dblConst1);

			double& operator[](_In_ int nIdx);
			double operator[](_In_ int nIdx) const;

			virtual void Clear();

			_Out_ bool Copy(_In_ CMultipleVariable& rmvMultiConstant);
			_Out_ bool Copy(_In_ CMultipleVariable* pRmcMultiConstant);

			_Out_ bool SetAt(_In_ size_t stIndex, _In_ double dblVal);
			_Out_ double GetAt(_In_ size_t stIndex);

			_Out_ bool InsertAt(_In_ size_t stIndex, _In_ double dblVal);
			_Out_ bool DeleteAt(_In_ size_t stIndex);

			_Out_ void AddValue(_In_ double dblValue);

			_Out_ size_t GetSize();
		protected:
			CInterMultipleVariable* m_pInternal = nullptr;
			

		};
	}
}
