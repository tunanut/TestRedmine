#pragma once

#include "DeviceImage.h"

namespace Ravid
{
	namespace Algorithms
	{
		class CRavidImage;
	}

	namespace Device
	{
		class AFX_EXT_CLASS CDeviceCamera : public CDeviceImage
		{
		public:
			DECLARE_DYNAMIC(CDeviceCamera)

		public:
			CDeviceCamera();
			virtual ~CDeviceCamera();

			virtual EDeviceInitializeResult Initialize() override = 0;
			virtual EDeviceTerminateResult Terminate() override = 0;

			virtual EDeviceGrabResult Grab() override = 0;
			virtual EDeviceLiveResult Live() override = 0;
			virtual EDeviceStopResult Stop() override = 0;


		protected:
			virtual bool AddControls();
		};
	}
}

