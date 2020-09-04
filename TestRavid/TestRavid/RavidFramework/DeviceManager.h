#pragma once

#include "RavidObjectEx.h"

#include <vector>
#include <memory>

namespace Ravid
{
	namespace Device
	{
		class CDeviceBase;

		class AFX_EXT_CLASS CDeviceManager : public Framework::CRavidObjectEx
		{
		private:
			CDeviceManager();

		public:
			virtual ~CDeviceManager();

			static bool Initialize();
			static bool Terminate();

			static bool IsInitialized();

			static size_t GetDeviceCount();

			static CDeviceBase* GetDeviceByIndex(_In_ size_t stIndex);
			static CDeviceBase* GetDeviceByIndex(_In_ CRuntimeClass* pRuntimeClass, _In_opt_ size_t stIndex = 0);
			static CDeviceBase* GetDeviceByIndex(_In_ const type_info& typeInfo, _In_opt_ size_t stIndex = 0);
			static CDeviceBase* GetDeviceByIndex(_In_ CString strClassNameIncludingNameSpace, _In_opt_ size_t stIndex = 0);

			static CDeviceBase* GetDeviceByObjectID(_In_ long nObjectID);
			static CDeviceBase* GetDeviceByObjectID(_In_ CRuntimeClass* pRuntimeClass, _In_opt_ long nObjectID = -1);
			static CDeviceBase* GetDeviceByObjectID(_In_ const type_info& typeInfo, _In_opt_ long nObjectID = -1);
			static CDeviceBase* GetDeviceByObjectID(_In_ CString strClassNameIncludingNameSpace, _In_opt_ long nObjectID = -1);

			static bool ShowDevicePropertyPage(_In_opt_ size_t stIndex = 0, _In_opt_ CDeviceBase* pCurrentDevice = nullptr);

			static std::vector<CDeviceBase*>* GetAvailableDevices();

			static bool IsAvailableRegisterDeviceInfos();
			static bool CreateRegisterDeviceInfosTable(_In_opt_ bool bSave = true);
			static bool DropRegisterDeviceInfosTable(_In_opt_ bool bSave = true);
			static bool GetRegisterDeviceInfos(_Out_ std::vector<SRegisterDeviceInfo>& vctInfos);
			static bool GetRegisterDeviceInfos(_Out_ std::vector<SRegisterDeviceInfo>* pVctInfos);
			static bool UpdateRegisterDeviceInfosTable(_In_ std::vector<SRegisterDeviceInfo>& vctInfos);
			static bool UpdateRegisterDeviceInfosTable(_In_ std::vector<SRegisterDeviceInfo>* pVctInfos);

			static CDeviceManager* GetInstance();

			static EDeviceLibraryStatus GetFoundLibrary(CString strLib);
			static bool SetFoundLibrary(CString strLib, bool bStatus);

		private:
			static bool RegisterDevice(_In_ CDeviceBase* pDevice, _In_opt_ bool bAutoDestroy = true);

			static bool UnregisterDevice(_In_ size_t stIndex);
			static bool UnregisterDevice(_In_ CDeviceBase* pDevice);

			static CDeviceBase* FindAvailableDevice(_In_ CString strClassName);

		protected:
			bool m_bInitialized = false;
			std::vector<std::pair<CDeviceBase*, bool> > m_vctDevices;
			std::vector<CDeviceBase*> m_vctVisibleDevices;
			std::vector<CDeviceBase*> m_vctAvailableDevices;
			std::vector<std::pair<CString, bool>> m_vctLibraryStatus;

		};
	}
}
