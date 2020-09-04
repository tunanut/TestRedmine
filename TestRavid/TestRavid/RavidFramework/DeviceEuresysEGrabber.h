#pragma once

#include "DeviceFrameGrabber.h"

namespace Euresys
{
	class EGenTL;
}

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;
	}

	namespace Device
	{
		class CMyEGrabber;

		class AFX_EXT_CLASS CDeviceEuresysEGrabber : public CDeviceFrameGrabber
		{
		public:
			RavidUseDynamicCreation();

			RavidPreventCopySelf(CDeviceEuresysEGrabber);

			DECLARE_DYNAMIC(CDeviceEuresysEGrabber)

		public:
			CDeviceEuresysEGrabber();
			virtual ~CDeviceEuresysEGrabber();

			virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);

			virtual EDeviceInitializeResult Initialize() override;
			virtual EDeviceTerminateResult Terminate() override;

			virtual bool LoadSettings() override;

			virtual EDeviceGrabResult Grab() override;
			virtual EDeviceLiveResult Live() override;
			virtual EDeviceStopResult Stop() override;

			virtual EEuresysGetFunction GetInitializetype(_Out_ EDeviceEGrabberInitializeType* pParam);
			virtual EEuresysSetFunction SetInitializetype(_In_ EDeviceEGrabberInitializeType eParam);

			virtual EEuresysGetFunction GetEuresysPath(_Out_ CString* pParam);
			virtual EEuresysSetFunction SetEuresysPath(_In_ CString strParam);

			//ImageFormatControl
			virtual EEuresysGetFunction GetWidth(_Out_ int* pParam);
			virtual EEuresysSetFunction SetWidth(_In_ int nParam);

			virtual EEuresysGetFunction GetHeight(_Out_ int* pParam);
			virtual EEuresysSetFunction SetHeight(_In_ int nParam);

			virtual EEuresysGetFunction GetOffsetX(_Out_ int* pParam);
			virtual EEuresysSetFunction SetOffsetX(_In_ int nParam);

			virtual EEuresysGetFunction GetOffsetY(_Out_ int* pParam);
			virtual EEuresysSetFunction SetOffsetY(_In_ int nParam);

			virtual EEuresysGetFunction GetReverseX(_Out_ EDeviceEGrabberSwitch* pParam);
			virtual EEuresysSetFunction SetReverseX(_In_ EDeviceEGrabberSwitch eParam);

			virtual EEuresysGetFunction GetPixelFormat(_Out_ EDeviceEGrabberPixelFormat* pParam);
			virtual EEuresysSetFunction SetPixelFormat(_In_ EDeviceEGrabberPixelFormat eParam);

			//AcquisitionControl
			virtual EEuresysGetFunction GetTriggerSelector(_Out_ EDeviceEGrabberTriggerSelector* pParam);
			virtual EEuresysSetFunction SetTriggerSelector(_In_ EDeviceEGrabberTriggerSelector eParam);

			virtual EEuresysGetFunction GetTriggerMode(_Out_ EDeviceEGrabberSwitch* pParam);
			virtual EEuresysSetFunction SetTriggerMode(_In_ EDeviceEGrabberSwitch eParam);

			virtual EEuresysGetFunction GetTriggerSource(_Out_ EDeviceEGrabberTriggerSource* pParam);
			virtual EEuresysSetFunction SetTriggerSource(_In_ EDeviceEGrabberTriggerSource eParam);

			virtual EEuresysGetFunction GetTriggerDelay(_Out_ double* pParam);
			virtual EEuresysSetFunction SetTriggerDelay(_In_ double dblParam);

			virtual EEuresysGetFunction GetLineDebounceTime(_Out_ double* pParam);
			virtual EEuresysSetFunction SetLineDebounceTime(_In_ double dblParam);

			virtual EEuresysGetFunction GetExposureMode(_Out_ EDeviceEGrabberExposureMode* pParam);
			virtual EEuresysSetFunction SetExposureMode(_In_ EDeviceEGrabberExposureMode eParam);

			virtual EEuresysGetFunction GetExposureTime(_Out_ double* pParam);
			virtual EEuresysSetFunction SetExposureTime(_In_ double dblParam);

			virtual EEuresysGetFunction GetAcquisitionFramerateEnable(_Out_ EDeviceEGrabberSwitch* pParam);
			virtual EEuresysSetFunction SetAcquisitionFramerateEnable(_In_ EDeviceEGrabberSwitch eParam);

			virtual EEuresysGetFunction GetAcquisitionFramerate(_Out_ double* pParam);
			virtual EEuresysSetFunction SetAcquisitionFramerate(_In_ double dblParam);

			virtual EEuresysGetFunction GetLineSelector(_Out_ EDeviceEGrabberLineSelector* pParam);
			virtual EEuresysSetFunction SetLineSelector(_In_ EDeviceEGrabberLineSelector eParam);

			virtual EEuresysGetFunction GetLineInverter(_Out_ EDeviceEGrabberSwitch* pParam);
			virtual EEuresysSetFunction SetLineInverter(_In_ EDeviceEGrabberSwitch eParam);

			virtual EEuresysGetFunction GetUserOutputSelector(_Out_ EDeviceEGrabberUserOutputSelector* pParam);
			virtual EEuresysSetFunction SetUserOutputSelector(_In_ EDeviceEGrabberUserOutputSelector eParam);

			virtual EEuresysGetFunction GetUserOutputValue(_Out_ EDeviceEGrabberSwitch* pParam);
			virtual EEuresysSetFunction SetUserOutputValue(_In_ EDeviceEGrabberSwitch eParam);

			virtual EEuresysGetFunction GetTimerSelector(_Out_ EDeviceEGrabberTimerSelector* pParam);
			virtual EEuresysSetFunction SetTimerSelector(_In_ EDeviceEGrabberTimerSelector eParam);

			virtual EEuresysGetFunction GetTimerDuration(_Out_ double* pParam);
			virtual EEuresysSetFunction SetTimerDuration(_In_ double dblParam);

			virtual EEuresysGetFunction GetTimerDelay(_Out_ double* pParam);
			virtual EEuresysSetFunction SetTimerDelay(_In_ double dblParam);

			virtual EEuresysGetFunction GetCounterEventSource(_Out_ EDeviceEGrabberCounterEventSource* pParam);
			virtual EEuresysSetFunction SetCounterEventSource(_In_ EDeviceEGrabberCounterEventSource eParam);

			virtual EEuresysGetFunction GetCounterValue(_Out_ int* pParam);
			virtual EEuresysSetFunction SetCounterValue(_In_ int nParam);

			virtual EEuresysGetFunction GetGainSelector(_Out_ EDeviceEGrabberGainSelector* pParam);
			virtual EEuresysSetFunction SetGainSelector(_In_ EDeviceEGrabberGainSelector eParam);

			virtual EEuresysGetFunction GetGainRawIInteger(_Out_ int* pParam);
			virtual EEuresysSetFunction SetGainRawIInteger(_In_ int nParam);

			virtual EEuresysGetFunction GetGain(_Out_ double* pParam);
			virtual EEuresysSetFunction SetGain(_In_ double dblParam);

			virtual EEuresysGetFunction GetBlackLevelSelector(_Out_ EDeviceEGrabberBlackLevelSelector* pParam);
			virtual EEuresysSetFunction SetBlackLevelSelector(_In_ EDeviceEGrabberBlackLevelSelector eParam);

			virtual EEuresysGetFunction GetBlackLevelRaw(_Out_ int* pParam);
			virtual EEuresysSetFunction SetBlackLevelRaw(_In_ int nParam);

			virtual EEuresysGetFunction GetGammaEnable(_Out_ EDeviceEGrabberSwitch* pParam);
			virtual EEuresysSetFunction SetGammaEnable(_In_ EDeviceEGrabberSwitch eParam);
			
			virtual EEuresysGetFunction GetGamma(_Out_ double* pParam);
			virtual EEuresysSetFunction SetGamma(_In_ double dblParam);

			virtual EEuresysGetFunction GetNoiseReductionEnable(_Out_ EDeviceEGrabberSwitch* pParam);
			virtual EEuresysSetFunction SetNoiseReductionEnable(_In_ EDeviceEGrabberSwitch eParam);

			virtual EEuresysGetFunction GetLUTEnable(_Out_ EDeviceEGrabberSwitch* pParam);
			virtual EEuresysSetFunction SetLUTEnable(_In_ EDeviceEGrabberSwitch eParam);

			virtual EEuresysGetFunction GetLUTPositionSelector(_Out_ EDeviceEGrabberLUTPositionSelector* pParam);
			virtual EEuresysSetFunction SetLUTPositionSelector(_In_ EDeviceEGrabberLUTPositionSelector eParam);

			virtual EEuresysGetFunction GetLUTPositionX(_Out_ int* pParam);
			virtual EEuresysSetFunction SetLUTPositionX(_In_ int nParam);

			virtual EEuresysGetFunction GetLUTPositionY(_Out_ int* pParam);
			virtual EEuresysSetFunction SetLUTPositionY(_In_ int nParam);

			Euresys::EGenTL* GetDevice();

			virtual bool OnParameterChanged(_In_ int nParam, _In_ CString strValue) override;

		protected:
			virtual bool DoesModuleExist();
			bool MakeNewBuffer(_In_ int nSizeX, _In_ int nSizeY, _In_opt_ EDeviceEGrabberPixelFormat ePixelFormat = EDeviceEGrabberPixelFormat_Mono8);

		protected:
			static UINT LiveThread(_In_ LPVOID pParam);

		public:
			DECLARE_MESSAGE_MAP()

		protected:
			Euresys::EGenTL* m_pTL = nullptr;
			CMyEGrabber* m_pEGrabber = nullptr;

			CWinThread* m_pLiveThread = nullptr;

		public:
			int m_nGrabCount = -1;

			//reference
		public:
			int64_t __getInteger(std::string& feature);
			void __setInteger(std::string& feature, int64_t value);

			double __getFloat(std::string& feature);
			void __setFloat(std::string& feature, double value);

			std::string __getString(std::string& feature);
			void __setString(std::string& feature, std::string& value);
		};
	}
}


