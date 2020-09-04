#pragma once


// CRavidDlgInputBox ��ȭ �����Դϴ�.

#include "RavidDialogBase.h"

#include <vector>

namespace Ravid
{
	namespace Framework
	{
		class CRavidInputBoxInfo;

		class AFX_EXT_CLASS CRavidDlgInputBox : public CRavidDialogBase
		{
			RavidPreventCopySelf(CRavidDlgInputBox);

		public:
			DECLARE_DYNAMIC(CRavidDlgInputBox)

		public:
			CRavidDlgInputBox(_In_ CRavidInputBoxInfo* pRavidInputBoxInfo, _In_opt_ CWnd* pParent = nullptr);   // ǥ�� �������Դϴ�.
			virtual ~CRavidDlgInputBox();

			virtual ptrdiff_t OnMessage(_In_ Ravid::Framework::CMessageBase* pMessage);

			virtual bool CreateMe(CWnd* pParent = nullptr);

		// ��ȭ ���� �������Դϴ�.
		// #ifdef AFX_DESIGN_TIME
		// 	enum { IDD = IDD_RAVID_DLG_INPUT_BOX };
		// #endif

		protected:
			virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

			DECLARE_MESSAGE_MAP()
		public:
			virtual BOOL OnInitDialog();
			virtual void OnOK();
			virtual void OnCancel();
			afx_msg void OnDestroy();

			virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);

		protected:
			virtual bool InitializeInputBox();

			virtual bool UpdateInputBox();

			virtual bool CheckCondition();

		protected:
			typedef struct sInputInfo
			{
				bool bChanged = false;
				SRavidInputDlgDataInfo sDataInfo;
				SRavidInputDlgDataInfo sOrgDataInfo;

				UINT uiCtrlID = 0;
				CStatic* pStaticTitle = nullptr;
				CWnd* pCtrlData = nullptr;
			}
			SInputInfo;

			CRavidInputBoxInfo* m_pRavidInputBoxInfo = nullptr;

			CFont m_fontTitle;

			CStatic* m_pItemGroupBox = nullptr;

			std::vector<SInputInfo> m_vctInputInfo;

			long m_nBorderOffset = 0;
			long m_nItemHeight = 0;

		};
	}
}
