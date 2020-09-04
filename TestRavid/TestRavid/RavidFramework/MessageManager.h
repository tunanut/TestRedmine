#pragma once

#include "RavidObjectEx.h"
#include <deque>

namespace Ravid
{
	namespace Framework
	{
		class CMessageBase;

		class AFX_EXT_CLASS CMessageManager : public CRavidObjectEx
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CMessageManager);

		private:
			CMessageManager();

		public:
			virtual ~CMessageManager();

			static bool Initialize();
			static bool Terminate();

			static bool IsInitialized();

			static ptrdiff_t SendMessage(_In_ CMessageBase* pMessage);
			static bool PostMessage(_In_ CMessageBase* pMessage);

		private:
			static bool ClearMessage();

			static UINT PostMessageThread(_In_ LPVOID pParam);

			static CMessageManager* GetInstance();

		protected:
			volatile bool m_bInitialized = false;

			CWinThread* m_pPostMessageThread = nullptr;

			std::deque<CMessageBase*> m_deqPostMessage;

			CCriticalSection m_csPostMessage;
		};
	}
}

