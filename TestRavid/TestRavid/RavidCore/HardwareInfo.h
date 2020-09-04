#pragma once

namespace Ravid
{
	namespace Miscellaneous
	{
		class AFX_EXT_CLASS CHardwareInfo : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CHardwareInfo);

		public:
			CHardwareInfo();
			virtual ~CHardwareInfo();

			static ECPUInstructionType GetCPUInstruction();

			static ULONGLONG GetTotalMemory();
			static ULONGLONG GetAvailableMemory();

			static double GetCPUUsage();

			static int GetProcessorPackageCount();
			static int GetNumaNodeCount();
			static int GetPhysicalProcessorCoreCount();
			static int GetLogicalProcessorCoreCount();
			static int GetProcessorL1CacheCount();
			static int GetProcessorL2CacheCount();
			static int GetProcessorL3CacheCount();

			static int GetProcessorL1CacheSize();
			static int GetProcessorL2CacheSize();
			static int GetProcessorL3CacheSize();

			static int GetProcessorL1LineSize();
			static int GetProcessorL2LineSize();
			static int GetProcessorL3LineSize();
		};
	}
}

