#pragma once

#include "DeviceTrigger.h"


namespace Ravid
{
	namespace Device
	{
		class AFX_EXT_CLASS CDeviceAxlTriggerSIOCN2CH : public CDeviceTrigger
		{
		public:
			RavidUseDynamicCreation();

			RavidPreventCopySelf(CDeviceAxlTriggerSIOCN2CH);

			DECLARE_DYNAMIC(CDeviceAxlTriggerSIOCN2CH)


			CDeviceAxlTriggerSIOCN2CH();
			virtual ~CDeviceAxlTriggerSIOCN2CH();

			virtual EDeviceInitializeResult Initialize() override;
			virtual EDeviceTerminateResult Terminate() override;

			virtual bool LoadSettings() override;

			virtual bool EnableTrigger() override;
			virtual bool DisableTrigger() override;

			virtual bool IsTriggerEnabled() override;

			virtual long GetEncoderCount() override;
			virtual long GetTriggerCount() override;
			virtual bool ResetCounter() override;

			virtual EAxlTriggerSIOCN2CHGetFunction GetUnitPerPulse(_Out_ double* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetUnitPerPulse(_In_ double dblParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerFunction(_Out_ EDeviceAxlTriggerSIOCN2CTriggerFunction* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerFunction(_In_ EDeviceAxlTriggerSIOCN2CTriggerFunction eParam);
			
			virtual EAxlTriggerSIOCN2CHGetFunction GetEncoderInputMethod(_Out_ EDeviceAxlTriggerSIOCN2CHEncoderInputMethod* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetEncoderInputMethod(_In_ EDeviceAxlTriggerSIOCN2CHEncoderInputMethod eParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetEncoderSource(_Out_ EDeviceAxlTriggerSIOCN2CHEncoderSource* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetEncoderSource(_In_ EDeviceAxlTriggerSIOCN2CHEncoderSource eParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetEncoderReverse(_Out_ bool* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetEncoderReverse(_In_ bool bParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerMode(_Out_ EDeviceAxlTriggerSIOCN2CHTriggerMode* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerMode(_In_ EDeviceAxlTriggerSIOCN2CHTriggerMode eParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerActiveLevel(_Out_ EDeviceAxlTriggerSIOCN2CHActiveLevel* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerActiveLevel(_In_ EDeviceAxlTriggerSIOCN2CHActiveLevel eParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerDirectionCheck(_Out_ EDeviceAxlTriggerSIOCN2CHTriggerDirectionCheck* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerDirectionCheck(_In_ EDeviceAxlTriggerSIOCN2CHTriggerDirectionCheck eParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerPulseWidth(_Out_ double* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerPulseWidth(_In_ double dblParam);
			
			virtual EAxlTriggerSIOCN2CHGetFunction GetStartPosition(_Out_ double* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetStartPosition(_In_ double dblParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetEndPosition(_Out_ double* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetEndPosition(_In_ double dblParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerPeriod(_Out_ double* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerPeriod(_In_ double dblParam);

			virtual EAxlTriggerSIOCN2CHGetFunction GetTriggerPosition(_Out_ CString* pParam);
			virtual EAxlTriggerSIOCN2CHSetFunction SetTriggerPosition(_In_ CString strParam);
			
			virtual bool GetAbsoluteTriggerPosition(_Out_ std::vector<DWORD>* pPositions);
			virtual void SetAbsoluteTriggerPosition(_In_ DWORD ulPosition);
			virtual void SetAbsoluteTriggerPosition(_In_ std::vector<DWORD> vctPositions);
			// Position clear func.
			virtual void ClearAbsoluteTriggerPosition();
			// Write position to Trigger board.
			virtual bool UpdateAbsoluteTriggerPosition();
			// Board memory init func.
			virtual bool ClearBoardAbsoluteTriggerPosition(_In_opt_ DWORD dwStartAddress = 0x00, _In_opt_ DWORD dwClearSize = 0x20000);

			afx_msg void OnTimer(UINT_PTR nIDEvent);
			virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);

			virtual bool OnParameterChanged(_In_ int nParam, _In_ CString strValue) override;

		public:
			DECLARE_MESSAGE_MAP()

		protected:
			virtual bool DoesModuleExist();

			virtual bool DisplayCounter();

		protected:
			bool m_bTriggerEnabled = false;

			std::vector<DWORD> m_vctTrigPos;
		};
	}
}

