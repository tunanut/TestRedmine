#pragma once

#include "DeviceBase.h"

namespace Ravid
{
	namespace Framework
	{
		class CPacket;
	}

	namespace Miscellaneous
	{
		class CPerformanceCounter;
	}

	namespace Device
	{
		class AFX_EXT_CLASS CDeviceComm : public CDeviceBase
		{
		public:
			CDeviceComm();
			virtual ~CDeviceComm();

			virtual EDeviceInitializeResult Initialize() override = 0;
			virtual EDeviceTerminateResult Terminate() override = 0;

			virtual ECommSendResult Send(_In_ Framework::CPacket& packet) = 0;
			virtual ECommSendResult Send(_In_ Framework::CPacket* pPacket) = 0;


			virtual bool IsSending();
			virtual bool IsReceiving();

			virtual unsigned long long GetTotalReceivedBytes();
			virtual unsigned long long GetTotalSentBytes();

		protected:
			unsigned long long m_ullSentBytes = 0;
			unsigned long long m_ullReceivedBytes = 0;

			Miscellaneous::CPerformanceCounter* m_pPcSending = nullptr;
			Miscellaneous::CPerformanceCounter* m_pPcReceiving = nullptr;
		};
	}
}

