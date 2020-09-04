#pragma once

namespace Ravid
{
	namespace Database
	{
		class AFX_EXT_CLASS CRavidRecordsetFieldInformation
		{
		private:
			CRavidRecordsetFieldInformation();

		public:
			CRavidRecordsetFieldInformation(CString strFieldName, ERavidRecordsetFieldType eType);
			virtual ~CRavidRecordsetFieldInformation();

			void SetFieldName(_In_ CString strFieldName);
			CString GetFieldName();

			void SetFieldType(_In_ ERavidRecordsetFieldType eType);
			ERavidRecordsetFieldType GetFieldType();

		private:
			CString m_strFieldName;
			ERavidRecordsetFieldType m_eType;
		};
	}
}
