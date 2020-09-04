
// RavidChildFrameLogViewer.h : CRavidChildFrameLogViewer Ŭ������ �������̽�
//

#pragma once

#include "RavidChildFrameBase.h"

namespace Ravid
{
	namespace Framework
	{
		class AFX_EXT_CLASS CRavidChildFrameLogViewer : public CRavidChildFrameBase
		{
			RavidUseDynamicCreation(); 

			DECLARE_DYNCREATE(CRavidChildFrameLogViewer)
		public:
			CRavidChildFrameLogViewer();
			virtual ~CRavidChildFrameLogViewer();

			// ������ �޽��� �� �Լ�
		protected:
			DECLARE_MESSAGE_MAP()
		public:
			afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

			virtual BOOL PreTranslateMessage(MSG* pMsg);
			afx_msg void OnSize(UINT nType, int cx, int cy);

			virtual bool InitialzeToolBar();
			virtual bool UpdateToolbarStatus();

			afx_msg void OnBnClickedMaximize();
			afx_msg void OnBnClickedRestore();
			afx_msg void OnBnClickedClose();

			virtual CRavidRect<int> GetRavidMainFrameClientRect();

			bool RecalcTable();

			virtual void SetFrameSizeChangeMode(_In_ ERavidFrameSizeChangeMode eFSCM);

			virtual bool ChangeFramePosition(_In_ CRavidRect<int> rrOldPosition, _In_ CRavidRect<int> rrNewPosition, _Out_ std::vector<CRavidRect<int> >* pVctResultPosition);
			
			virtual bool VisibleToolBarButton(_In_ ERavidToolBarEventLogViewer eEvent, _In_ bool bVisible);

		};
	}
}
