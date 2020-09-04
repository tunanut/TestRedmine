#pragma once

#include "DeviceTrigger.h"

namespace Ravid
{
	namespace Device
	{
		class AFX_EXT_CLASS CDeviceMVTechTrigger : public CDeviceTrigger
		{
		public:
			RavidUseDynamicCreation();

			RavidPreventCopySelf(CDeviceMVTechTrigger);

			DECLARE_DYNAMIC(CDeviceMVTechTrigger)
			
			CDeviceMVTechTrigger();
			virtual ~CDeviceMVTechTrigger();

			virtual EDeviceInitializeResult Initialize() override;
			virtual EDeviceTerminateResult Terminate() override;

			virtual bool LoadSettings() override;

			virtual bool EnableTrigger() override;
			virtual bool DisableTrigger() override;

			virtual bool IsTriggerEnabled() override;

			virtual long GetEncoderCount() override;
			virtual long GetTriggerCount() override;
			virtual bool ResetCounter() override;

			virtual EMVTTriggerGetFunction GetStartPosition(_Out_ int* pParam);
			virtual EMVTTriggerSetFunction SetStartPosition(_In_ int nParam);

			virtual EMVTTriggerGetFunction GetEndPosition(_Out_ int* pParam);
			virtual EMVTTriggerSetFunction SetEndPosition(_In_ int nParam);

			virtual EMVTTriggerGetFunction GetTriggerCycle(_Out_ int* pParam);
			virtual EMVTTriggerSetFunction SetTriggerCycle(_In_ int nParam);

			virtual EMVTTriggerGetFunction GetTriggerPulseDurationTime(_Out_ int* pParam);
			virtual EMVTTriggerSetFunction SetTriggerPulseDurationTime(_In_ int nParam);

			virtual EMVTTriggerGetFunction GetEncoderIncreasementDirection(_Out_ EDeviceMVTTriggerEncoderIncreasementDirection* pParam);
			virtual EMVTTriggerSetFunction SetEncoderIncreasementDirection(_In_ EDeviceMVTTriggerEncoderIncreasementDirection eParam);

			virtual EMVTTriggerGetFunction GetTriggerCountingDirection(_Out_ EDeviceMVTTriggerTriggerCountingDirection* pParam);
			virtual EMVTTriggerSetFunction SetTriggerCountingDirection(_In_ EDeviceMVTTriggerTriggerCountingDirection eParam);

			afx_msg void OnTimer(UINT_PTR nIDEvent);
			virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);

			virtual bool OnParameterChanged(_In_ int nParam, _In_ CString strValue) override;

		public:
			DECLARE_MESSAGE_MAP()

		protected:
			virtual bool DoesModuleExist();

			virtual bool DisplayCounter();

		protected:
			DWORD* m_arrDwCS = nullptr;
			DWORD* m_arrDwCSLen = nullptr;

			bool m_bTriggerEnabled = false;

			void* m_pDeviceObject = nullptr;
		};
	}
}

