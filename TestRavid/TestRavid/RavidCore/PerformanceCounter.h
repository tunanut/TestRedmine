#pragma once

#include <vector>

namespace Ravid
{
	namespace Miscellaneous
	{
		class CInternalPerformanceCounter;

		class AFX_EXT_CLASS CPerformanceCounter : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CPerformanceCounter);

		public:
			CPerformanceCounter(void);
			virtual ~CPerformanceCounter(void);

			void Start();
			bool CheckPoint();

			float GetElapsedTime();
			bool GetCheckPoints(_Out_ std::vector<float>* pReturn);

		private:
			CInternalPerformanceCounter* m_pInternal = nullptr;
			
		};
	}
}

