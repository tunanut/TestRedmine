#pragma once

#include "RavidObjectEx.h"

#include <memory>

namespace Ravid
{
	namespace Device
	{
		class CDeviceBase;
	}

	namespace Framework
	{
		class CRavidLogViewer;
		class CPacket;
		class CTeachingObject;
		class CEventHandlerBase;
		class CRavidImageProcessingTool;
		class CRavidImageView;
		class CModelInfo;

		class AFX_EXT_CLASS CEventHandlerManager : public CRavidObjectEx
		{
		private:
			CEventHandlerManager();

		public:
			virtual ~CEventHandlerManager();

			static bool AddEventHandler(_In_ CEventHandlerBase* pEventHandler, _In_opt_ bool bAutoDestroy = true);
			static void ClearEventHandler();

			static CEventHandlerBase* GetEventHandler(_In_ long nIndex);
			static long GetEventHanderCount();



			static void BroadcastOnInspect(_In_ Algorithms::CRavidImage* pImgInfo, _In_ int nInspectionType, _In_opt_ CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);
			static void BroadcastOnLearn(_In_ Algorithms::CRavidImage* pImgInfo, _In_ CTeachingObject* pTeachingObject, _In_opt_ CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1);
			static void BroadcastOnAcquisition(_In_ Algorithms::CRavidImage* pImgInfo, _In_ int nChannel, _In_opt_ CRavidImageView* pView = nullptr, Device::CDeviceBase* pDevice = nullptr);
			static void BroadcastOnReceivingPacket(_In_ CPacket* pPacket, _In_ Device::CDeviceBase* pDevice);
			static void BroadcastOnLogMessage(_In_ SRavidLogData* pLogData);

			static void BroadcastOnSequenceStart();
			static void BroadcastOnSequencePause();
			static void BroadcastOnSequenceStop();

			static void BroadcastOnOpenModel(CModelInfo* pModelInfo);
			static void BroadcastOnCloseModel(CModelInfo* pModelInfo);

			static void BroadcastOnLogIn(_In_ CString strUserName, _In_ EUserType eChangedUserType);
			static void BroadcastOnLogOut();

			static void BroadcastOnModelParameterSaveChanged();

			static void BroadcastOnStartImageProcessingTool();
			static void BroadcastOnEndImageProcessingTool();

			static void BroadcastOnDeviceInitialized(_In_ Device::CDeviceBase* pDevice);
			static void BroadcastOnDeviceTerminated(_In_ Device::CDeviceBase* pDevice);

			static UINT BroadcastOnClose();

			static void BroadcastOnUserToolbarEventRavidMainFrame(_In_ UINT ulResourceID);
			static void BroadcastOnToolbarEventRavidMainFrame(_In_ ERavidToolBarEventMainFrame eEvent);
			static void BroadcastOnToolbarEventRavidChildFrameBase(_In_ CView* pView, _In_ ERavidToolBarEventChildFrameBase eEvent);
			static void BroadcastOnToolbarEventRavidImageView(_In_ CRavidImageView* pView, _In_ ERavidToolBarEventImageView eEvent);
			static void BroadcastOnToolbarEventRavidLogViewer(_In_ CRavidLogViewer* pView, _In_ ERavidToolBarEventLogViewer eEvent);
			static void BroadcastOnToolbarEventRavidImageProcessingTool(_In_ CRavidImageProcessingTool* pView, _In_ ERavidToolBarImageProcessingTool eEvent);

			static void BroadcastRunUIConfiguration(_In_ long nNumber);

			static void BroadcastOnTerminate();

			static void BroadcastOnCloseModelManager();
			static void BroadcastOnCloseDeviceManager();
			static void BroadcastOnCloseLogIn();
			static void BroadcastOnCloseAuthorityManager();
			static void BroadcastOnCloseScreenSaverSetting();

			static void BroadcastOnToolbarEventRavidImageViewTeaching(_In_ CRavidImageView* pView, _In_ int nSelectIdx);

		private:
			static bool AddFrameworkEventHandler(_In_ CEventHandlerBase* pEventHandler, _In_opt_ bool bAutoDestroy = true);
			static void ClearFrameworkEventHandler();
			static CEventHandlerManager* GetInstance();
			static CEventHandlerBase* GetFrameworkEventHandler(_In_ long nIndex);
			static long GetFrameworkEventHanderCount();

			friend class CUIManager;

		protected:
			typedef struct sEventHandlerData
			{
				CEventHandlerBase* pEventHandler;
				bool bAutoDestroy;
			}
			SEventHandlerData;


			std::vector<SEventHandlerData> m_vctEventHandlers;
			std::vector<SEventHandlerData> m_vctFrameworkEventHandlers;

		};
	}
}

