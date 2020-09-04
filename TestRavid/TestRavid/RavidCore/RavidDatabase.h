#pragma once

#include <vector>
#include <afxmt.h>

namespace Ravid
{
	namespace Miscellaneous
	{
		class CSimpleEncryptor;
	}

	namespace Database
	{
		class CInternalRavidDatabase;
		class CRavidRecordset;
		class CRavidRecordsetFieldInformation;

		class AFX_EXT_CLASS CRavidDatabase
		{
		public:
			RavidPreventCopySelf(CRavidDatabase);

			CRavidDatabase();
			virtual ~CRavidDatabase();

			ERavidDatabaseResult Open(_In_ CString strFilePath, _In_opt_ CString strPassword = _T(""), _In_opt_ bool bReadOnly = false, _In_opt_ bool bCreateIfNoExistence = true);
			bool Save();
			bool Close();

			bool IsOpen();
			bool IsReadOnly();

			bool ExecuteSQL(_In_ CString strSQL);

			size_t GetTableCount();

			bool GetTableNameList(_Out_ std::vector<CString>* pVctTableNameList);

			bool DoesTableExist(_In_ CString strTableName);

			bool SetPassword(_In_ CString strCurrentPassword, _In_ CString strNewPassword);


			CString GetDBFilePath();

		private:

			CRavidRecordset* CreateTable(_In_ CString strTableName);

			bool DropTable(_In_ long nIndex);
			bool DropTable(_In_ CString strTableName);

			CRavidRecordset* GetTable(_In_ long nIndex);
			CRavidRecordset* GetTable(_In_ CString strTableName);

			bool SetTable(_In_ long nIndex, _In_ CRavidRecordset* pRecordset);
			bool SetTable(_In_ CString strTableName, _In_ CRavidRecordset* pRecordset);

			CString GetTableNameOfIndex(_In_ long nIndex);
			long GetIndexOfTableName(_In_ CString strTableName);

			bool ChangeTableName(_In_ long nIndex, _In_ CString strNewTableName);
			bool ChangeTableName(_In_ CString strTableName, _In_ CString strNewTableName);

			bool ConvertDataTypeStringToEnum(_In_ CString strDataType, _Out_ ERavidRecordsetFieldType& eDataType);
			bool ConvertStringOperatorToEnum(_In_ CString strOperator, _Out_ ERavidDBWhereClauseOperator& eOperator);

			bool ParseWhereClause(_In_ CString strWhere, _In_ std::vector<CRavidRecordsetFieldInformation*>& vctFields, _Out_ std::vector<SRavidDBWhereClauseCondition>& vctWhereCondition);

			bool ExtractString(_In_ CString& strSource, _In_ TCHAR chDelimiter, _Out_ CString& strResult);
			bool ExtractString(_In_ CString& strSource, _In_ std::vector<TCHAR>& vctDelimiter, _Out_ CString& strResult);

			bool DoesTableExist_Internal(_In_ CString& strTableName);
			bool Close_Internal();

			bool LockDBFile();
			bool UnlockDBFile();

			ERavidDatabaseResult ReadDBFile();
			bool WriteDBFile();

			bool ReadFile(_Out_ void* pDstBuffer, _In_ size_t szElementSize, _In_ FILE* pFilePointer, _In_opt_ bool bDecrypt = true);
			bool WriteFile(_In_ const void* pSrcBuffer, _In_ size_t szElementSize, _In_ FILE* pFilePointer, _In_opt_ bool bEncrypt = true);

			bool AssignBuffer(_Inout_ char** pBuffer, size_t szSize);
			bool DeleteBuffer(_Inout_ char** pBuffer);

			bool IsPasswordEmpty();

			void SetDBFilePath(_In_ CString strDBFilePath);
			/*CString GetDBFilePath();*/

			bool ExtractValue(_In_ CString& strSource, _In_ std::vector<CString>& vctDelimiter, _In_ std::vector<CString>& vctEnd, _Out_ CString& strResult, _Out_ bool& bEnd);

			bool EncryptData(_In_ CString strData, _Out_ std::vector<char>& vctData);
			bool DecryptData(_In_ std::vector<char>& vctData, _Out_ CString& strData);

			CInternalRavidDatabase* m_pInternal = nullptr;
			
			static const char m_arrDBFileHeader[];
			static const ptrdiff_t m_nDBFileHeaderLength;

			friend class CRavidRecordset;

			friend class CDBEditorManager;
		};
	}
}

