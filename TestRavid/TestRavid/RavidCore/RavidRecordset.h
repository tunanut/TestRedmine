#pragma once

#include <memory>

namespace Ravid
{
	namespace Database
	{
		class CRavidDatabase;
		class CRavidRecordsetFieldInformation;
		class CInternalRavidRecordset;

		class AFX_EXT_CLASS CRavidRecordset
		{
		public:
			RavidPreventCopySelf(CRavidRecordset);

			static const TCHAR* m_arrFieldTypeString[];

			CRavidRecordset();
			CRavidRecordset(_In_ CRavidDatabase* pParentDataStorage, _In_ CString strSQL);

			virtual ~CRavidRecordset();

			bool Open(_In_ CRavidDatabase* pParentDataStorage, _In_ CString strSQL);
			bool Close();

			bool IsOpen();

			CString GetTableName();

			size_t GetFieldCount();
			size_t GetRecordCount();

			bool GetFieldIndex(_In_ CString strFieldName, _Out_ int& nIndex);

			bool SetFieldName(_In_ int nIndex, _In_ CString strNewFieldName);
			bool GetFieldName(_In_ int nIndex, _Out_ CString& strFieldName);

			bool SetFieldType(_In_ int nIndex, _In_ CString strNewFieldType);
			bool SetFieldType(_In_ int nIndex, _In_ ERavidRecordsetFieldType eType);
			bool GetFieldType(_In_ int nIndex, _Out_ ERavidRecordsetFieldType& eType);
			bool GetFieldType(_In_ int nIndex, _Out_ CString& strType);

			bool GetFieldType(_In_ CString strFieldName, _Out_ ERavidRecordsetFieldType& eType);
			bool GetFieldType(_In_ CString strFieldName, _Out_ CString& strType);

			bool InsertField(_In_ int nIndex, _In_ CString strFieldName, _In_ ERavidRecordsetFieldType eType);

			bool DeleteField(_In_ int nIndex);

			bool ConvertTypeEnumToTypeString(_In_ ERavidRecordsetFieldType eType, _Out_ CString& strType);
			bool ConvertTypeStringToTypeEnum(_In_ CString strType, _Out_ ERavidRecordsetFieldType& eType);

			bool IsBOF();
			bool IsEOF();

			bool MoveFirst();
			bool MoveNext();
			bool MovePrev();
			bool MoveLast();

			size_t GetRecordIndex();

			bool GetFieldValue(_In_ int nFieldIndex, _Out_ CString& strValue);
			bool GetFieldValue(_In_ int nFieldIndex, _Out_ void** ppValue);

			bool GetFieldValue(_In_ CString strFieldName, _Out_ CString& strValue);
			bool GetFieldValue(_In_ CString strFieldName, _Out_ void** ppValue);

			bool SetFieldValue(_In_ int nIndex, _In_ CString strValue);
			bool SetFieldValue(_In_ int nIndex, _In_ void* pValue);

			bool SetFieldValue(_In_ CString strFieldName, _In_ CString strValue);
			bool SetFieldValue(_In_ CString strFieldName, _In_ void* pValue);

			bool AddRecord();
			bool DeleteRecord();

		private:

			CRavidRecordset(_In_ CString strTableName, _In_ CRavidDatabase* pParentDataStorage);

			std::unique_ptr<CInternalRavidRecordset> m_pInternal;

			friend class CRavidDatabase;

			friend class CDBEditorManager;
		};
	}
}

