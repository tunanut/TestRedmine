#pragma once

#include "RavidObjectEx.h"

#include <memory>
#include <vector>

namespace Ravid
{
	namespace Framework
	{
		class AFX_EXT_CLASS CAuthorityManager : public CRavidObjectEx
		{
		public:
			enum EPermissionDataType
			{
				EPermissionDataType_DeviceItemEdit = 0,
				EPermissionDataType_DeviceControl,
				EPermissionDataType_ModelItemEdit,
				EPermissionDataType_ModelOpen,
				EPermissionDataType_ModelClose,
				EPermissionDataType_ModelNew,
				EPermissionDataType_ModelCopy,
				EPermissionDataType_ModelDelete,
				EPermissionDataType_ModelConfigurationAccess,
				EPermissionDataType_ModelConfigurationNew,
				EPermissionDataType_ModelConfigurationModify,
				EPermissionDataType_ModelConfigurationDelete,
				EPermissionDataType_ModelConfigurationDuplicate,
				EPermissionDataType_ImageProcessingTool,
				EPermissionDataType_ConfigurationSave,
				EPermissionDataType_ConfigurationSaveas,
				EPermissionDataType_ConfigurationNew,
				EPermissionDataType_ConfigurationDelete,
				EPermissionDataType_ConfigurationRename,
				EPermissionDataType_ChildFrameSize,
				EPermissionDataType_ImageViewAccuracyEdit,
				EPermissionDataType_ImageViewLayer,
				EPermissionDataType_Count
			};

			typedef struct sLayerPermission
			{
				long nViewObjectID = 0;
				long nLayerIndex = 0;
				EUserType ePermission = EUserType_NotLoggedOn;
			}
			SLayerPermission;

		private:
			CAuthorityManager();

		public:
			virtual ~CAuthorityManager();

			static bool Initialize();
			static bool Terminate();

			static bool IsInitialized();

			static CAuthorityManager* GetInstance();

			static CString GetCurrentUserName();
			static EUserType GetCurrentUserType();

			static EAuthResult LogIn(_In_ CString strUserName, _In_ CString strPassword);
			static EAuthResult LogOut();

			static EAuthResult ModifyPassword(_In_ CString strUserName, _In_ CString strOldPassword, _In_ CString strNewPassword);

			// It can't be changed to a level higher than currently logged on user
			static EAuthResult ModifyUserType(_In_ CString strUserName, EUserType eUserType);

			// Functions that can be used above administrator level
			static EAuthResult AddUser(_In_ CString strUserName, _In_ CString strPassword, _In_ EUserType eUserType);
			static EAuthResult DeleteUser(_In_ CString strUserName, _In_ CString strPassword);

			static long GetUserCount();

			static EAuthResult SetDeviceItemEditPermission(_In_ EUserType eUserType);
			static EUserType GetDeviceItemEditPermission();

			static EAuthResult SetDeviceControlPermission(_In_ EUserType eUserType);
			static EUserType GetDeviceControlPermission();

			static EAuthResult SetModelItemEditPermission(_In_ EUserType eUserType);
			static EUserType GetModelItemEditPermission();

			static EAuthResult SetModelOpenPermission(_In_ EUserType eUserType);
			static EUserType GetModelOpenPermission();

			static EAuthResult SetModelClosePermission(_In_ EUserType eUserType);
			static EUserType GetModelClosePermission();

			static EAuthResult SetModelNewPermission(_In_ EUserType eUserType);
			static EUserType GetModelNewPermission();

			static EAuthResult SetModelCopyPermission(_In_ EUserType eUserType);
			static EUserType GetModelCopyPermission();

			static EAuthResult SetModelDeletePermission(_In_ EUserType eUserType);
			static EUserType GetModelDeletePermission();

			static EAuthResult SetImageProcessingToolPermission(_In_ EUserType eUserType);
			static EUserType GetImageProcessingToolPermission();

			static EAuthResult SetChildFrameSizePermission(_In_ EUserType eUserType);
			static EUserType GetChildFrameSizePermission();

			static EAuthResult SetImageViewAccuracyEditPermission(_In_ EUserType eUserType);
			static EUserType GetImageViewAccuracyEditPermission();

			static EAuthResult SetImageViewLayerPermission(_In_ long nViewObjectID, _In_ long nLayerIndex, _In_ EUserType eUserType);
			static EUserType GetImageViewLayerPermission(_In_ long nViewObjectID, _In_ long nLayerIndex);

			static EAuthResult CheckUser(_In_ CString strUserName, _In_ CString strPassword);

			static EAuthResult GetUserInfoList(std::vector<SUserInfo>& vctInfoList);
			static EAuthResult GetUserInfoList(std::vector<SUserInfo>* pVctInfoList);

			static EAuthResult IsBeingRoot();

			//////////////////////////////////////////////////////////////
			// Author : Seungwoo Han
			// Date : 11 Apr, 2019
			// Tracking code : RS-190012
			//////////////////////////////////////////////////////////////
			static EAuthResult SetConfigurationSavePermission(_In_ EUserType eUserType);
			static EUserType GetConfigurationSavePermission();

			static EAuthResult SetConfigurationSaveasPermission(_In_ EUserType eUserType);
			static EUserType GetConfigurationSaveasPermission();

			static EAuthResult SetConfigurationNewPermission(_In_ EUserType eUserType);
			static EUserType GetConfigurationNewPermission();

			static EAuthResult SetConfigurationDeletePermission(_In_ EUserType eUserType);
			static EUserType GetConfigurationDeletePermission();

			static EAuthResult SetConfigurationRenamePermission(_In_ EUserType eUserType);
			static EUserType GetConfigurationRenamePermission();

			static EAuthResult SetModelConfigurationAccessPermission(_In_ EUserType eUserType);
			static EUserType GetModelConfigurationAccessPermission();

			static EAuthResult SetModelConfigurationNewPermission(_In_ EUserType eUserType);
			static EUserType GetModelConfigurationNewPermission();

			static EAuthResult SetModelConfigurationModifyPermission(_In_ EUserType eUserType);
			static EUserType GetModelConfigurationModifyPermission();

			static EAuthResult SetModelConfigurationDeletePermission(_In_ EUserType eUserType);
			static EUserType GetModelConfigurationDeletePermission();

			static EAuthResult SetModelConfigurationDuplicatePermission(_In_ EUserType eUserType);
			static EUserType GetModelConfigurationDuplicatePermission();

		private:
			static EAuthResult SetPermissionData(_In_ EPermissionDataType eType, _In_ CString strData, _In_opt_ CString strSubTitle = _T(""));
			static EAuthResult GetPermissionData(_In_ EPermissionDataType eType, _Out_ CString& strData, _In_opt_ CString strSubTitle = _T(""));

		protected:
			bool m_bInitialized = false;
			CString m_strCurrentUser = _T("");
			EUserType m_eUserType = EUserType_NotLoggedOn;
			static LPCTSTR m_lpszPermissionDataType[CAuthorityManager::EPermissionDataType_Count];
			EUserType m_ePermission[CAuthorityManager::EPermissionDataType_Count];
			std::vector<CAuthorityManager::SLayerPermission> m_vctLayerPermission;
		};
	}
}

