#pragma once

namespace Ravid
{
	namespace Framework
	{
		class CInterMultipleCondition;

		class AFX_EXT_CLASS CMultipleCondition : public CRavidObject
		{
		public:
			CMultipleCondition();
			virtual ~CMultipleCondition();

			CMultipleCondition(_In_ CMultipleCondition& rmvdCondition);

			CMultipleCondition(_In_ const ELogicalCondition& elcCondition);
			CMultipleCondition(_In_ const ELogicalCondition& elcCondition1, const ELogicalCondition& elcCondition2);
			CMultipleCondition(_In_ const ELogicalCondition& elcCondition1, const ELogicalCondition& elcCondition2, const ELogicalCondition& elcCondition3);
			CMultipleCondition(_In_ const ELogicalCondition& elcCondition1, const ELogicalCondition& elcCondition2, const ELogicalCondition& elcCondition3, const ELogicalCondition& elcCondition4);

			void operator=(_In_ CMultipleCondition rmvdMultiConst);
			void operator=(_In_ ELogicalCondition elcCondition);

			virtual void Clear();

			_Out_ bool Copy(_In_ CMultipleCondition& rmvdMultipleCondition);
			_Out_ bool Copy(_In_ CMultipleCondition* pRmcdMultipleCondition);

			_Out_ bool SetAt(_In_ size_t stIndex, _In_ const ELogicalCondition& elcCondition);
			_Out_ ELogicalCondition GetAt(_In_ size_t stIndex);

			_Out_ bool InsertAt(_In_ size_t stIndex, _In_ const ELogicalCondition& elcCondition);
			_Out_ bool DeleteAt(_In_ size_t stIndex);

			_Out_ void AddValue(_In_ const ELogicalCondition& elcCondition);

			_Out_ size_t GetSize();

		protected:
			CInterMultipleCondition* m_pInternal = nullptr; 
			
		};
	}
}

