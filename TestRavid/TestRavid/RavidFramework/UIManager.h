#pragma once

#include "RavidObjectEx.h"

#include <vector>
#include <memory>
#include <map>
#include <d2d1.h>
#include <dwrite.h>

class CMultiDocTemplate;
class Ravid::Algorithms::CRavidImage;

// Multi Document Template 생성시 사용하는 전처리기
#define DOC_TEMPLATE(resid,doc,childfrm,view) resid,RUNTIME_CLASS(doc),RUNTIME_CLASS(childfrm),RUNTIME_CLASS(view)

namespace Ravid
{
	namespace Miscellaneous
	{
		class CPerformanceCounter;
	}

	namespace Framework
	{
		class CRavidLogViewer;
		class CRavidFormViewBase;
		class CRavidChildFrameLogViewer;
		class CRavidDialogBase;
		class CRavidInputBoxInfo;
		class CUIConfig;
		class CUIConfigElement;
		class CRavidImageView;
		class CRavidMainFrame;
		class CRavidImageProcessingTool;
		class CRavidChildFrameImageProcessingTool;
		class CRavidDlgModelManager;
		class CRavidDlgNotification;
		class CRavidDlgProgress;

		class AFX_EXT_CLASS CUIManager : public CRavidObjectEx
		{
		private:
			CUIManager();
		public:
			virtual ~CUIManager();

			static bool AddEasyConfigurationView(_In_ CRuntimeClass* pView, _In_opt_ CRuntimeClass* pFrame = nullptr);
			static size_t GetUIConfigurationCount();
			static CUIConfig* GetUIConfiguration(_In_ int nNumber);
			static bool RunUIConfiguration(_In_ long nNumber);
			static CUIConfig* GetCurrentUIConfiguration();
			static long GetCurrentUIConfigurationNumber();

			static bool GetAllRavidChildFrame(_Out_ std::vector<CRavidChildFrameBase*>* pVctChildFrame);
			static bool GetAllRavidFormView(_Out_ std::vector<CRavidFormViewBase*>* pVctFormView);
			static bool GetAllRavidImageView(_Out_ std::vector<CRavidImageView*>* pVctImageView);
			static bool GetAllRavidDialog(_Out_ std::vector<CRavidDialogBase*>* pVctDialog);

			static CRavidObject* FindView(_In_ long nObjectID = -1);
			static CRavidObject* FindView(_In_ CRuntimeClass* pRuntimeClass, _In_ long nObjectID = -1);
			static CRavidObject* FindView(_In_ const std::type_info& classType, _In_ long nObjectID = -1);
			static CRavidObject* FindView(_In_ CString strClassNameIncludingNameSpace, _In_ long nObjectID = -1);

			static bool CaptureScreen(_Out_ Algorithms::CRavidImage& riDst, _In_opt_ CRavidRect<int> rrROI);
			static bool CaptureScreen(_Out_ Algorithms::CRavidImage& riDst, _In_opt_ CRavidRect<int>* pRrROI = nullptr);
			static bool CaptureScreen(_Out_ Algorithms::CRavidImage* pRiDst, _In_opt_ CRavidRect<int> rrROI);
			static bool CaptureScreen(_Out_ Algorithms::CRavidImage* pRiDst, _In_opt_ CRavidRect<int>* pRrROI = nullptr);

			static bool SetRavidTitle(_In_ CString strTitle, _In_opt_ bool bHidePrefix = false);
			static CString GetRavidTitle();

			static bool SetSkinType(_In_ ERavidSkinType eSkin);
			static ERavidSkinType GetSkinType();


			static bool SetRavidMainFrameColor(_In_ ERavidFrameColorType eRFCT, _In_ COLORREF clr);
			static COLORREF GetRavidMainFrameColor(_In_ ERavidFrameColorType eRFCT);

			static bool SetRavidMainFrameCaptionColor(_In_ ERavidCaptionColorType eRCCT, _In_ COLORREF clr);
			static COLORREF GetRavidMainFrameCaptionColor(_In_ ERavidCaptionColorType eRCCT);

			static bool SetRavidMainFrameToolBarColor(_In_ ERavidToolBarColorType eRTBCT, _In_ COLORREF clr);
			static COLORREF GetRavidMainFrameToolBarColor(_In_ ERavidToolBarColorType eRTBCT);

			static bool SetRavidChildFrameColor(_In_ ERavidFrameColorType eRFCT, _In_ COLORREF clr);
			static COLORREF GetRavidChildFrameColor(_In_ ERavidFrameColorType eRFCT);

			static bool SetRavidChildFrameToolBarColor(_In_ ERavidToolBarColorType eRTBCT, _In_ COLORREF clr);
			static COLORREF GetRavidChildFrameToolBarColor(_In_ ERavidToolBarColorType eRTBCT);


			static bool SetRavidFormViewControlColor(_In_ ERavidControlColorType eRCCT, _In_ COLORREF clr);
			static COLORREF GetRavidFormViewControlColor(_In_ ERavidControlColorType eRCCT);


			static bool SetRavidDialogFrameColor(_In_ ERavidFrameColorType eRFCT, _In_ COLORREF clr);
			static COLORREF GetRavidDialogFrameColor(_In_ ERavidFrameColorType eRFCT);

			static bool SetRavidDialogCaptionColor(_In_ ERavidCaptionColorType eRCCT, _In_ COLORREF clr);
			static COLORREF GetRavidDialogCaptionColor(_In_ ERavidCaptionColorType eRCCT);

			static bool SetRavidDialogControlColor(_In_ ERavidControlColorType eRCCT, _In_ COLORREF clr);
			static COLORREF GetRavidDialogControlColor(_In_ ERavidControlColorType eRCCT);


			static bool SetRavidMenuColor(_In_ ERavidMenuColorType eRMCT, _In_ COLORREF clr);
			static COLORREF GetRavidMenuColor(_In_ ERavidMenuColorType eRMCT);

			static bool SetRavidSheetColor(_In_ ERavidSheetColorType eRMCT, _In_ COLORREF clr);
			static COLORREF GetRavidSheetColor(_In_ ERavidSheetColorType eRMCT);


			static bool VisibleLogViewer(_In_ bool bVisible);
			static bool IsVisibleLogViewer();

			static bool VisibleImageProcessingTool(_In_ bool bVisible);
			static bool IsVisibleImageProcessingTool();

			static bool UseScreenSaver(_In_ bool bUse);
			static bool IsUsedScreenSaver();

			static bool SetScreenSaverTitle(_In_ CString strTitle);
			static CString GetScreenSaverTitle();

			static bool SetScreenSaverWaitingTime(_In_ DWORD dwTime);
			static DWORD GetScreenSaverWaitingTime();


			static bool SetAccuracyX(_In_ long nViewObjectID, _In_ double dblAccuracyX);
			static bool SetAccuracyY(_In_ long nViewObjectID, _In_ double dblAccuracyY);


			static bool RunRavidInputBox(_In_ CRavidInputBoxInfo* pRavidInputBoxInfo, _In_opt_ CWnd* pWndParent = nullptr);

			static bool RunRavidNotification(_In_ CString strMessage, _In_opt_ ERavidNotificationType eNotification = ERavidNotificationType_Information, _In_opt_ ERavidModalType eModalType = ERavidModalType_Modal);
			static void EndRavidNotification(_In_ CRavidDlgNotification* pNotificationDlg, _In_ ERavidNotificationButtonType  eNotificationButton = ERavidNotificationButtonType_AllOk);

			static bool RunRavidProgressDialog(_In_ CString strMessage, _In_ double dblMaxValue, ERavidModalType eModalType = ERavidModalType_Modal, _In_opt_ COLORREF clrTextColor = RGB(0, 0, 0), _In_opt_ bool bShowProgressBar = true, _In_opt_ COLORREF clrProgressBarColor = LIME, _In_opt_ CBitmap* pBmpBackground = nullptr, _In_opt_ COLORREF clrTransparentImage = RGB(255, 255, 255), _In_opt_ int nAlphaBlendValue = 127);
			static void EndRavidProgressDialog();
			static bool UpdateProgressDialogMessage(_In_ CString strMessage);
			static bool UpdateProgressDialogBar(_In_ double dblState);
			static bool UpdateMessageAndBar(_In_ CString strMessage, _In_ double dblState);

			static void ShowChildFrameObjectID(_In_ bool bShow);
			static bool IsShowChildFrameObjectID();

			static void ShowMainFrameToolBar(_In_ bool bShow);
			static bool IsShowMainFrameToolBar();

			static bool RavidChildFrameMoveWindow(_In_ long nObjectID, CRavidRect<int> rrPosition);
			static bool RavidChildFrameMoveWindow(_In_ long nObjectID, _In_ long nLeft, _In_ long nTop, _In_ long nRight, _In_ long nBottom);

			static void ShowUserName(_In_ bool bShow);
			static bool IsShowUserName();



			// Only framework use

			static bool SetRavidMainFrameToolBarBottomEdgeDraw(_In_ bool bDraw);
			static bool GetRavidMainFrameToolBarBottomEdgeDraw();

			static bool SetRavidMainFrameToolBarTitleMinimumDisplayWidth(_In_ long nWidth);
			static bool GetRavidMainFrameToolBarTitleMinimumDisplayWidth();

			static bool SetRavidMainFrameToolBarTitleStartOffsetX(_In_ long nOffsetX);
			static long GetRavidMainFrameToolBarTitleStartOffsetX();


			static bool SetRavidChildFrameToolBarBottomEdgeDraw(_In_ bool bDraw);
			static bool GetRavidChildFrameToolBarBottomEdgeDraw();

			static bool SetRavidChildFrameToolBarTitleMinimumDisplayWidth(_In_ long nWidth);
			static bool GetRavidChildFrameToolBarTitleMinimumDisplayWidth();

			static bool SetRavidChildFrameToolBarTitleStartOffsetX(_In_ long nOffsetX);
			static long GetRavidChildFrameToolBarTitleStartOffsetX();

			static CUIConfigElement* GetUIConfigurationElement(_In_ int nID, _In_ CString strName);

			static CRavidLogViewer* GetLogViewer();
			static CRavidChildFrameLogViewer* GetLogViewerFrame();
			static CRavidImageProcessingTool* GetImageProcessingTool();
			static CRavidChildFrameImageProcessingTool* GetImageProcessingToolFrame();
			static CRavidDlgModelManager* GetDlgModelManager();

			static bool IsImageProcessingToolInitilize();

			// Ravid에서 기본적으로 제공하는 RavidMainFrame을 생성한다.
			static bool CreateRavidMainFrame(_In_opt_ UINT uiToolBarResourceEnableID = 0, _In_opt_ UINT uiToolBarResourceDisableID = 0);
			static bool RegisterUIConfiguration();

			static bool Initialize();
			static bool Terminate();

			static bool UpdateChildFrameSize();

			static bool SetImageViewExtraData(_In_ long nViewObjectID, _In_ ERavidImageViewExtraDataType eType, _In_ CString strData);
			static bool GetImageViewExtraData(_In_ long nViewObjectID, _In_ ERavidImageViewExtraDataType eType, _Out_ CString& strData);

			static CRavidRect<int> GetMainFrameClientRect();

			static bool UpdateRavidMainFrameToolbar();


			static void BeginRavidUIResource();
			static void EndRavidUIResource(_In_opt_ bool bSynchronization = true);

			static HMODULE GetRavidFrameworkResource();
			static HMODULE GetBackupRavidFrameworkResource();


			static void SetResourceHandle(_In_ HMODULE hResource);

			static void CloseAllMDIClient();

			static bool RegisterMFCToolBarImages(_In_ HINSTANCE hResourceHandle, _In_ UINT uiID);
			static CMFCToolBarImages* GetRegisterMFCToolBarImages(_In_ HINSTANCE hResourceHandle, _In_ UINT uiID);

			static bool SetLastFocusChildFrame(_In_ CRavidChildFrameBase* pChildFrame);
			static CRavidChildFrameBase* GetLastFocusChildFrame();

			static ID2D1Factory* GetD2DFactory();
			static IDWriteFactory* GetDWriteFactory();

			static ID2D1StrokeStyle* GetD2DStrokeStyle(_In_ ERavidImageViewPenStyle ePenStyle);

			static bool SetImageViewDrawingElapsedTime(_In_ CRavidImageView* pImageView);
			static double GetImageViewDrawingIntervalTime();

			static bool AddNotificationDlg(CRavidDlgNotification* pDlg);

			static bool InternalClearNotifications();

			static bool SetRelativeLayout(_In_ bool bEnable = true);
			static bool GetRelativeLayout();

			static bool SetImageViewEnableScrollBar(_In_ long nViewObjectID, _In_ CString strData);
			static bool GetImageViewEnableScrollBar(_In_ long nViewObjectID);


			static bool ConfigurationSave();
			static bool ConfigurationSaveAs(_In_ CString strTitle);
			static ERavidConfigurationTitle ConfigurationRename(_In_ CString strTitle);
			static bool ConfigurationDelete(_In_ int nIndex);

			static bool HideConfiguration();
			static bool MakeUIConfig(_In_ CString strTitle, _In_ std::vector<SConfigurationElementInfo> vctCEI, _Out_ CUIConfig& uc);

		private:
			static bool FindChildWindow(_Inout_ SWindowElement& sWE);

			static bool AddUIConfiguration(_In_ CUIConfig& ravidUIConfig);
			static bool DeleteUIConfiguration(_In_ CUIConfig* pUIConfig);

			static bool ClearUIConfiguration();

			static CMultiDocTemplate* AddMultiDocTemplate(_In_ UINT nResourceID, _In_ CRuntimeClass* pDocument, _In_ CRuntimeClass* pChildFrame, _In_ CRuntimeClass* pView, _In_opt_ bool bDLLResource = false);

			static CUIManager* GetInstance();

			static CRuntimeClass* DecideChildFrame(CRuntimeClass* pView);

			static bool FindDialog(_In_ SWindowElement& sW, _Out_ std::vector<CRavidDialogBase*>* pVctDialog);

			static std::vector<SEasyConfigurationView>* GetEasyConfigurationView();

			static bool IsAvailableRegisterViewInfos();

			static bool CreateRegisterViewInfosTable(_In_opt_ bool bSave = true);

			static bool DropRegisterViewInfosTable(_In_opt_ bool bSave = true);

			static bool GetRegisterViewInfos(_Out_ std::vector<SRegisterViewInfo>& vctInfos);
			static bool GetRegisterViewInfos(_Out_ std::vector<SRegisterViewInfo>* pVctInfos);

			static bool GetConfigurationElementInfo(_Out_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >& vctInfos);
			static bool GetConfigurationElementInfo(_Out_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >* pVctInfos);

			static bool GetConfigurationElementInfoPx(_Out_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >& vctInfos);
			static bool GetConfigurationElementInfoPx(_Out_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >* pVctInfos);

			static bool UpdateRegisterViewInfosTable(_In_ std::vector<SRegisterViewInfo>& vctInfos);
			static bool UpdateRegisterViewInfosTable(_In_ std::vector<SRegisterViewInfo>* pVctInfos);

			static bool UpdateConfigurationElementInfo(_In_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >& vctInfos);
			static bool UpdateConfigurationElementInfo(_In_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >* pVctInfos);

			static bool UpdateConfigurationElementInfoPx(_In_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >& vctInfos);
			static bool UpdateConfigurationElementInfoPx(_In_ std::vector<std::pair<CString, std::vector<SConfigurationElementInfo> > >* pVctInfos);

			static bool UpdateRegisterViewInspectionMenuTable(_In_ int nSequence, _In_ ERegisterViewType eType, _In_ std::vector<CString>& vctMenu);
			static bool UpdateRegisterViewTeachingMenuTable(_In_ int nSequence, _In_ ERegisterViewType eType, _In_ std::vector<SRegisterTeachingMenuInfo>& vctMenu);

			static bool GetRegisterViewInspectionMenu(_In_ int nSequence, _Out_ std::vector<CString>& vctMenu);
			static bool GetRegisterViewTeachingMenu(_In_ int nSequence, _Out_ std::vector<SRegisterTeachingMenuInfo>& vctMenu);

			static ERegisterViewType GetViewType(_In_ CRavidObject* pObject);
			static ERegisterViewType GetViewType(_In_ CString strClass);

			static bool SetConfigurationData(_In_ EUIManagerConfigurationDataType eType, _In_ CString strData, _In_opt_ CString strSubTitle = _T(""));
			static bool GetConfigurationData(_In_ EUIManagerConfigurationDataType eType, _Out_ CString& strData, _In_opt_ CString strSubTitle = _T(""));

			static bool GetRelativeLayoutTable();

			friend class CAuthorityManager;
			friend class CRavidDlgViewConfigurationTool;
			friend class CRavidImageProcessingTool;
			friend class CRavidDlgFrameworkConfigurationTool;
			friend class CRavidDlgConfigurationNew;

		protected:
			virtual ptrdiff_t OnMessage(Ravid::Framework::CMessageBase* pMessage);

		private:
			static bool InitViewConfiguration();
			static bool GetViewConfiguration(_Out_ std::vector<SViewConfiguration>& vctInfos);
			static bool GetViewConfiguration(_Out_ std::vector<SViewConfiguration>* pVctInfos);
			static bool InsertViewConfiguration(_In_ std::vector<SViewConfiguration>& vctInfos);
			static bool InsertViewConfiguration(_In_ std::vector<SViewConfiguration>* pVctInfos);
			static bool DeleteViewConfiguration(_In_ int nSequence);

			static bool UpdateConfiguration(_In_ int nSequence, _In_ std::vector<SConfigurationElementInfo> vctCEI);
			static bool AllUpdateViewConfiguration(_In_ std::vector<SViewConfiguration>& vctInfos);
			static bool AllUpdateViewConfiguration(_In_ std::vector<SViewConfiguration>* pVctInfos);
			

		protected:
			ERavidSkinType m_eSkinType = ERavidSkinType_Bright;
			CRavidMainFrame* m_pMainWnd = nullptr;
			HMODULE m_hResource = 0;

			CString m_strRavidTitle = _T("Ravid");

			std::vector<CMultiDocTemplate*>* m_pVctTemplate = nullptr;

			HINSTANCE m_hInstBackup = 0;

			std::map<CStringA, CMultiDocTemplate*> m_mapDocTemplates;

			CUIConfig* m_pCurrentUIConfig = nullptr;
			std::vector<CUIConfig*> m_vctUIConfigs;

			COLORREF m_clrRavidMainFrame[ERavidFrameColorType_Count] = { 0, };
			COLORREF m_clrRavidMainFrameCaption[ERavidCaptionColorType_Count] = { 0, };
			COLORREF m_clrRavidMainFrameToolBar[ERavidToolBarColorType_Count] = { 0, };

			COLORREF m_clrRavidChildFrame[ERavidFrameColorType_Count] = { 0, };
			COLORREF m_clrRavidChildFrameToolBar[ERavidToolBarColorType_Count] = { 0, };

			COLORREF m_clrRavidFormViewControl[ERavidControlColorType_Count] = { 0, };

			COLORREF m_clrRavidDialogFrame[ERavidFrameColorType_Count] = { 0, };
			COLORREF m_clrRavidDialogCaption[ERavidCaptionColorType_Count] = { 0, };
			COLORREF m_clrRavidDialogControl[ERavidControlColorType_Count] = { 0, };

			COLORREF m_clrRavidMenu[ERavidMenuColorType_Count] = { 0, };

			COLORREF m_clrRavidSheet[ERavidSheetColorType_Count] = { 0, };

			bool m_bIsRavidMainFrameToolBarBottomEdge = false;
			bool m_bIsRavidChildFrameToolBarBottomEdge = false;

			long m_nRavidMainFrameToolBarTitleMinimumDisplayWidth = 0;
			long m_nRavidChildFrameToolBarTitleMinimumDisplayWidth = 0;

			long m_nRavidMainFrameToolBarTitleStartOffsetX = 0;
			long m_nRavidChildFrameToolBarTitleStartOffsetX = 0;

			std::vector<SEasyConfigurationView> m_vctEasyConfigurationView;

			std::vector<SRegisterMFCToolBarImagesInfo> m_vctRegisterMFCToolBarImages;

			static LPCTSTR m_lpszRavidImageViewExtraDataType[ERavidImageViewExtraDataType_Count];

			CRavidChildFrameBase* m_pLastFocuseChildFrame = nullptr;

			bool m_bIsShowChildFrameObjectID = true;

			bool m_bIsShowMainFrameToolBar = true;

			bool m_bIsShowUserName = true;

			ID2D1Factory* m_pD2DFactory = nullptr;
			IDWriteFactory* m_pDWriteFactory = nullptr;

			ID2D1StrokeStyle* m_pArrD2DStrokeStyle[ERavidImageViewPenStyle_Count] = { nullptr, };

			static LPCTSTR m_lpszConfigurationDataType[EUIManagerConfigurationDataType_Count];

			std::map<CRavidImageView*, Miscellaneous::CPerformanceCounter*> m_mapImageViewDrawingElapsedTime;

			CCriticalSection m_csNotification;
			std::vector<CRavidDlgNotification*> m_vctModelessNotificationDlgs;
			std::vector<CRavidDlgNotification*> m_vctModalNotificationDlgs;

			CRavidDlgProgress* m_pProgressDlg = nullptr;

			bool m_bRelativeLayout = true;

			CRavidChildFrameBase* m_pRCFB;
		};
	}
}
