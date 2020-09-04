#pragma once

#include "DeviceDio.h"

namespace Ravid
{
	namespace Device
	{
		class AFX_EXT_CLASS CDeviceMVTechDio : public CDeviceDio
		{
		public:
			RavidUseDynamicCreation();

			RavidPreventCopySelf(CDeviceMVTechDio);

			DECLARE_DYNAMIC(CDeviceMVTechDio)

			CDeviceMVTechDio();
			virtual ~CDeviceMVTechDio();

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
			afx_msg void OnTimer(_In_ UINT_PTR nIDEvent);
			afx_msg void OnDestroy();

			virtual bool OnParameterChanged(_In_ int nParam, _In_ CString strValue) override;

		public:
			DECLARE_MESSAGE_MAP()

		protected:
			void OnBnClickedOutLed(_In_ UINT nID);

			virtual bool DoesModuleExist();

		protected:
			bool m_bInvert = false;

			DWORD m_dwInStatus = 0;
			DWORD m_dwOutStatus = 0;

			DWORD *m_arrDwCS = nullptr;
			DWORD *m_arrDwCSLen = nullptr;

			void* m_pDeviceObject = nullptr;
		};
	}
}
