
// RavidToolCmdUI.h : RavidToolCmdUI Ŭ������ �������̽�
//

#pragma once


namespace Ravid
{
	namespace Framework
	{
		class CRavidToolCmdUI : public CCmdUI        // class private to this file !
		{
		public: // re-implementations only
			virtual void Enable(BOOL bOn);
			virtual void SetCheck(int nCheck);
			virtual void SetText(LPCTSTR lpszText);
			virtual void SetRadio(BOOL bOn = TRUE);
		};
	}
}