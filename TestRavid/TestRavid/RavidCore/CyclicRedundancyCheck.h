#pragma once

namespace Ravid
{
	namespace Miscellaneous
	{
		class AFX_EXT_CLASS CCyclicRedundancyCheck : public CRavidObject
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CCyclicRedundancyCheck);

		public:
			CCyclicRedundancyCheck();
			virtual ~CCyclicRedundancyCheck();

			BYTE MakeCRC8(_In_ unsigned char* pSrcData, _In_ size_t stLength);
			unsigned short MakeCRC16(_In_ unsigned char* pSrcData, _In_ size_t stLength);
			unsigned int MakeCRC32(_In_ unsigned char* pSrcData, _In_ size_t stLength);
		};
	}
}

