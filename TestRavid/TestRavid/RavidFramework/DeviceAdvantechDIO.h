#pragma once

#include "DeviceDio.h"

namespace Automation
{
	namespace BDaq
	{
		class InstantDiCtrl;
		class InstantDoCtrl;
	};
};
namespace Ravid
{
	namespace Device
	{
		class AFX_EXT_CLASS CDeviceAdvantechDio : public CDeviceDio
		{
		public:
			RavidUseDynamicCreation();

			RavidPreventCopySelf(CDeviceAdvantechDio);

			DECLARE_DYNAMIC(CDeviceAdvantechDio)
			
			CDeviceAdvantechDio();
			virtual ~CDeviceAdvantechDio();

			virtual EDeviceInitializeResult Initialize() override;
			virtual EDeviceTerminateResult Terminate() override;

			virtual bool LoadSettings() override;

			virtual bool ReadOutBit(_In_ int nBit) override;
			virtual bool ReadInBit(_In_ int nBit) override;

			virtual BYTE ReadOutByte() override;
			virtual BYTE ReadInByte() override;

			virtual WORD ReadOutWord() override;
			virtual WORD ReadInWord() override;

			virtual DWORD ReadOutDword() override;
			virtual DWORD ReadInDword() override;

			virtual bool WriteOutBit(_In_ int nBit, _In_ bool bOn) override;
			virtual bool WriteInBit(_In_ int nBit, _In_ bool bOn) override;

			virtual bool WriteOutByte(_In_ BYTE cByte) override;
			virtual bool WriteInByte(_In_ BYTE cByte) override;

			virtual bool WriteOutWord(_In_ WORD wWord) override;
			virtual bool WriteInWord(_In_ WORD wWord) override;

			virtual bool WriteOutDword(_In_ DWORD dwDword) override;
			virtual bool WriteInDword(_In_ DWORD dwDword) override;

			virtual bool ClearOutPort() override;
			virtual bool ClearInPort() override;

			virtual long GetOutputPortCount() override;
			virtual long GetInputPortCount() override;

			virtual BOOL OnInitDialog();

			afx_msg void OnDestroy();
			afx_msg void OnTimer(_In_ UINT_PTR nIDEvent);

			virtual bool OnParameterChanged(_In_ int nParam, _In_ CString strValue) override;

		public:
			DECLARE_MESSAGE_MAP()

		protected:
			virtual void OnBnClickedOutLed(_In_ UINT nID);

			virtual bool DoesModuleExist();

		protected:
			Automation::BDaq::InstantDoCtrl* m_pDoCtrl = nullptr;
			Automation::BDaq::InstantDiCtrl* m_pDiCtrl = nullptr;
		};
	}
}

