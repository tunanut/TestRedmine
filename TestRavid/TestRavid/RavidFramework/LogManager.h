#pragma once

#include "RavidObjectEx.h"

#include <memory>
#include <queue>
#include <map>

namespace Ravid
{
	namespace Framework
	{
		class AFX_EXT_CLASS CLogManager : public CRavidObjectEx
		{
			RavidUseDynamicCreation();
			RavidPreventCopySelf(CLogManager);

		private:
			CLogManager();

		public:
			virtual ~CLogManager();

			static bool Initialize(_In_ CString strLoggingRootFolder);
			static bool Terminate();

			static bool IsInitialized();

			static void SetRootPath(_In_ CString strLoggingRootFolder);
			static CString GetRootPath();

			static bool SetLogTypeName(_In_ long nLogType, _In_ CString strLogTypeName);
			static CString GetLogTypeName(_In_ long nLogType);

			static bool Write(_In_ long nLogType, _In_ CString strFormat, ...);

			static bool Write(_In_ long nLogType, _In_ long nImportanceType, _In_ CString strFormat, ...);

		private:
			static UINT WritingThread(_In_ LPVOID pParam);

			static CLogManager* GetInstance();

		protected:
			CWinThread* m_pWritingThread = nullptr;
			volatile bool m_bInitialized = false;
			CString m_strLoggingRootFolder;
			std::queue<SRavidLogData*> m_queLogData;
			std::map<long, CString> m_mapLogTypes;

		};
	}
}

