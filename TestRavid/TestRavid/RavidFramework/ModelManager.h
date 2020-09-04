#pragma once

#include "RavidObjectEx.h"

#include <vector>
#include <memory>

namespace Ravid
{
	namespace Database
	{
		class CRavidDatabase;
		class CRavidRecordset;
	}

	namespace Framework
	{
		class CModelInfo;
		class CModelConfigurationInfo;

		class AFX_EXT_CLASS CModelManager : public CRavidObjectEx
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CModelManager);

		private:
			CModelManager();

		public:
			virtual ~CModelManager();


			// �ʱ�ȭ
			static bool Initialize(_In_ LPCTSTR lpszModelRootPath, _In_opt_ LPCTSTR lpszParameterFileName = _T("ModelParam.mvtdb"));

			// �ʱ�ȭ ����
			static bool Terminate();

			// �ʱ�ȭ ���� Ȯ��
			static bool IsInitialized();

			static CString GetParameterFileName();

			// �� Root ��� ��������
			static CString GetModelRootPath();

			// �� ����Ʈ ����
			static bool UpdateModelList();


			// Model Info �ν��Ͻ��� ��ü ������ ���Ѵ�.
			static size_t GetModelInfoCount();

			// �ش� index�� ModelInfo �ν��Ͻ��� ���´�.
			static CModelInfo* GetModelInfo(_In_ int nNumber);


			// �ش� �� ��ȣ�� �ش��ϴ� Model Info�� ã�´�.
			static CModelInfo* FindModelInfo(_In_ int nModelNo);

			// �ش� �� �̸��� �ش��ϴ� Model Info�� ã�´�.
			static bool FindModelInfo(_In_ LPCTSTR lpszModelName, _Out_ std::vector<CModelInfo*>* pVctResult);

			// �ش� �� ��ȣ�� �ش��ϴ� Model Info�� ����. ���� ���� ��ȣ�� ������ �� �ش� ��ȣ�� ���� ���� ���� ����.
			static bool OpenModelInfo(_In_ int nModelNo);

			// �ش� �� �̸��� �ش��ϴ� Model Info�� ����. ���� ���� �̸��� ������ �� �ش� �̸��� ���� ���� ���� ����.
			static bool OpenModelInfo(_In_ LPCTSTR lpszModelName);


			// �ش� �� ��ȣ�� �ش��ϴ� Model Info�� �ݴ´�. ���� ���� ��ȣ�� ������ �� �ش� ��ȣ�� ���� ���� ���� �ݴ´�.
			static bool CloseModelInfo(_In_ int nModelNo);

			// �ش� �� �̸��� �ش��ϴ� Model Info�� �ݴ´�. ���� ���� �̸��� ������ �� �ش� �̸��� ���� ���� ���� �ݴ´�.
			static bool CloseModelInfo(_In_ LPCTSTR lpszModelName);


			// �ش� �� ��ȣ�� �ش��ϴ� Model Info�� �����Ѵ�. ���� ���� ��ȣ�� ������ �� �ش� ��ȣ�� ���� ���� ���� �����Ѵ�.
			static bool DeleteModelInfo(_In_ int nModelNo);

			// �ش� �� �̸��� �ش��ϴ� Model Info�� �����Ѵ�. ���� ���� �̸��� ������ �� �ش� �̸��� ���� ���� ���� �����Ѵ�.
			static bool DeleteModelInfo(_In_ LPCTSTR lpszModelName);


			// �ش� �� ��ȣ�� �ش��ϴ� Model Info�� �����Ѵ�. ���� ���� ��ȣ�� ������ �� �ش� ��ȣ�� ���� ���� ���� �����Ѵ�.
			static bool CopyModelInfo(_In_ int nModelNo);

			// �ش� �� �̸��� �ش��ϴ� Model Info�� �����Ѵ�. ���� ���� �̸��� ������ �� �ش� �̸��� ���� ���� ���� �����Ѵ�.
			static bool CopyModelInfo(_In_ LPCTSTR lpszModelName);

			static bool NewModelInfo(_In_ LPCTSTR lpszModelTypeName);




			static CString GetModelParameterDataTypeString(_In_ ERavidParameterDataType eRPDT);


			static SModelTypeInfo GetModelTypeInfo(_In_ CString strModelTypeName);

			static std::vector<SModelTypeInfo> GetModelTypeInfoList();

			static long GetModelTypeInfoSequenceNumber(_In_ CString strModelTypeName);

			static bool IsBeingSameModelTypeName(_In_ CString strModelTypeName);

			static bool RearrangementModelTypeInfo();

			static bool IsOpendModelType(_In_ CString strModelTypeName);
			static bool IsUsedModelType(_In_ CString strModelTypeName);


			static bool NewModelType(_In_ CModelConfigurationInfo* pRMCI);

			static bool ModifyModelType(_In_ CString strOrgModelTypeName, _In_ CModelConfigurationInfo* pRMCI);

			static bool DeleteModelType(_In_ CString strModelTypeName);

			static bool CopyModelType(_In_ CModelConfigurationInfo* pRMCI);

			static bool IsAbleToOpen(_In_ int nModelNo);

			static bool ChangeModelNumber(_In_ int nCurrentModelNo, _In_ int nNewModelNo);
			static bool ChangeModelName(_In_ int nCurrentModelNo, _In_ CString strNewModelName);
		private:

			// �� ����Ʈ Ŭ����
			static bool ClearModelList();

			static CModelManager* GetInstance();

			static bool OpenTable(_In_ Database::CRavidDatabase* pDatabase, _In_ CString strTableName, _Out_ Database::CRavidRecordset* pRS);

			static bool CreateModelTypeInfoTable();

			static bool OpenModelInfo(_In_ CModelInfo* pModelInfo);

		private:
			static LPCTSTR m_lpszModelParameterDataType[ERavidParameterDataType_Count];
			static LPCTSTR m_lpszModelTypeInfoTableFieldTitle[EModelTypeInfoTableField_Count];

		protected:
			bool m_bInitialized = false;
			CString m_strModelRootPath;
			CString m_strParameterFileName;
			std::vector<CModelInfo*> m_vctModelInfo;

			const CString m_strModelTypeInfoTableName = _T("Model type info");
		};
	}
}

