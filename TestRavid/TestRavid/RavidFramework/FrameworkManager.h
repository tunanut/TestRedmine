#pragma once

#include "RavidObjectEx.h"

#include <memory>

namespace Ravid
{
	namespace Database
	{
		class CRavidDatabase;
	}

	namespace Framework
	{
		class AFX_EXT_CLASS CFrameworkManager : public CRavidObjectEx
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CFrameworkManager);

			enum EFrameworkSettingDataType
			{
				EFrameworkSettingDataType_Security = 0,
				EFrameworkSettingDataType_Count,
			};

			enum EFrameworkSettingLoginData
			{
				EFrameworkSettingLoginData_TryMaxCount = 5,
				EFrameworkSettingLoginData_LockTimes = 300,
			};

		private:
			CFrameworkManager();

		public:
		virtual ~CFrameworkManager();


			static bool Begin(_In_opt_ LPCTSTR lpszSettingFile = nullptr, _In_opt_ bool bSettingMode = false, _In_opt_ UINT uiToolBarResourceEnableID = 0, _In_opt_ UINT uiToolBarResourceDisableID = 0);

			static bool End();



			static bool IsSettingMode();

			static Database::CRavidDatabase* GetFrameworkDatabase();

			static bool SetSecurityKey(_In_ CString strSecurityKey);
			static bool ChangeSecurityKey(_In_ CString strCurrentSecurityKey, _In_ CString strNewSecurityKey);
			static bool IsSetSecurityKey();

			static bool LockSecurity();
			static bool UnlockSecurity(_In_ CString strSecurityKey);

			static bool IsUnlockedSecurity();

			static bool IsRestrictSecurity(_Out_ CString& strTime);
			static bool GetRestrictSecurityTrialInfo(_Out_ int& nCount, _Out_ CString& strTime);
			static bool SetRestrictSecurityTrialInfo(_In_ int nCount, _In_ CTime tTime);
			static bool ConvertStringToTime(_In_ CString strTime, _Out_ CTime& tTime);
			static CTime GetRestrictSecurityTime(_In_ CTime& tInTimem);

		private:
			static CFrameworkManager* GetInstance();

			static bool SetFrameworkSettingData(_In_ EFrameworkSettingDataType eType, _In_ CString strData);
			static bool GetFrameworkSettingData(_In_ EFrameworkSettingDataType eType, _Out_ CString& strData);

			static LPCTSTR m_lpszFrameworkSettingDataType[EFrameworkSettingDataType_Count];

		protected:
			Database::CRavidDatabase* m_pDatabase = nullptr;

			bool m_bIsSettingMode = false;
			bool m_bIsSecurity = true;

		};
	}
}

