#pragma once

namespace Ravid
{
	namespace Miscellaneous
	{
		class AFX_EXT_CLASS COperatingSystemInfo : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(COperatingSystemInfo);

		public:
			COperatingSystemInfo();
			virtual ~COperatingSystemInfo();

			bool IsX64OperatingSystem();
			bool IsX64Process(HANDLE hProcess = 0);

			EOperatingSystemType GetOperatingSystemType();
		};
	}
}

