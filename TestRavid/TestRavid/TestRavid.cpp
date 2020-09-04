#include "stdafx.h"
#include "TestRavid.h"
#include "FormViewExample.h"
#include "EventHandlerExample.h"
#include "SequenceExample.h"

using namespace Ravid::Framework;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CTestRavid, CWinAppEx)
	ON_COMMAND(ID_HELP, &CWinAppEx::OnHelp)
END_MESSAGE_MAP()

CTestRavid::CTestRavid()
{
}

CTestRavid theApp;

BOOL CTestRavid::InitInstance()
{
	CWinAppEx::InitInstance();

	SetRegistryKey(_T("TestRavid"));

	CUIManager::AddEasyConfigurationView(RUNTIME_CLASS(CFormViewExample));

	bool bSettingMode = false;
	CFrameworkManager::Begin(_T("Settings"), bSettingMode);

	CUIManager::RunUIConfiguration(0);

	CEventHandlerExample* pEventHandler = new CEventHandlerExample;
	if(pEventHandler)
		CEventHandlerManager::AddEventHandler(pEventHandler);

	CSequenceExample* pSequence = new CSequenceExample;
	if(pSequence)
		CSequenceManager::RegisterSequence(pSequence);

	return true;
}

