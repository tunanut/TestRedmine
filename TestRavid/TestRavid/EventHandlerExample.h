#pragma once

using namespace Ravid;
using namespace Ravid::Framework;

class CEventHandlerExample : public Ravid::Framework::CEventHandlerBase
{
public:
	CEventHandlerExample();
	virtual ~CEventHandlerExample();

	virtual void OnInspect(_In_ Algorithms::CRavidImage* pImgInfo, _In_ int nInspectionType, _In_opt_ CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1) { }
	virtual void OnTeach(_In_ Algorithms::CRavidImage* pImgInfo, _In_ CTeachingObject* pTeachingObject, _In_opt_ CRavidImageView* pView = nullptr, _In_opt_ int nChannel = -1) { }
	virtual void OnAcquisition(_In_ Ravid::Algorithms::CRavidImage* pImgInfo, _In_ int nChannel, _In_opt_ Ravid::Framework::CRavidImageView* pView = nullptr, _In_opt_ Ravid::Device::CDeviceBase* pDevice = nullptr) { }
	virtual void OnReceivingPacket(_In_ CPacket* pPacket, _In_ Device::CDeviceBase* pDevice) { }
	virtual void OnLogMessage(_In_ SRavidLogData* pLogData) { }

	virtual void OnSequenceStart() { }
	virtual void OnSequencePause() { }
	virtual void OnSequenceStop() { }

	virtual void OnOpenModel(_In_ CModelInfo* pModelInfo) { }
	virtual void OnCloseModel(_In_ CModelInfo* pModelInfo) { }
};

