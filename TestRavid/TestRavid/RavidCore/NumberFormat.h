#pragma once

namespace Ravid
{
	namespace Miscellaneous
	{
		template <typename T>
		class CInternalNumberFormat;

		template <typename T>
		class AFX_EXT_CLASS CNumberFormat : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CNumberFormat);

		public:
			CNumberFormat();
			virtual ~CNumberFormat();

			T GetNumber();
			void SetNumber(_In_ int nValue);
			void SetNumber(_In_ long long llValue);
			void SetNumber(_In_ float fValue);
			void SetNumber(_In_ double dblValue);

			long GetDecimalPlace();
			void SetDecimalPlace(_In_ long nValue);

			bool GetIncludingComma();
			void SetIncludingComma(_In_ bool bSet);

			CString GetResult();

		protected:
			CInternalNumberFormat<T>* m_pInternal = nullptr;
		
		};
	}
}

