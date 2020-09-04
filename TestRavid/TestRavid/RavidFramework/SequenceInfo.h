#pragma once

#include "RavidObjectEx.h"

#include <memory>

namespace Ravid
{
	namespace Framework
	{
		class AFX_EXT_CLASS CSequenceInfo : public CRavidObjectEx
		{
		public:
			CSequenceInfo();
			virtual ~CSequenceInfo();

			// �ش� Sequence�� �����Ѵ�.
			bool Run(_In_opt_ ESequencePriority ePriority = ESequencePriority_Normal);

			// �ش� Sequence�� ����/ �Ͻ����� �Ѵ�.
			//  - ������ Sequence�� ������ �ڿ� ���� Step ���¸� 0���� Ŭ���� �մϴ�.
			//  - �Ͻ������� Sequence�� �Ͻ������� �ڿ� ���� Step ���¸� �״�� �Ӵϴ�. (�簳 ���� �ϵ���) 
			bool Stop(_In_ ESequenceStatus eFlag = ESequenceStatus_Stop);

			// �ش� Sequence�� ���� ������ ���´�.
			//  - The sequence is running status, if the return value is true. otherwise, the sequence is idle status.
			bool IsRunning();

			// �ش� Sequence�� ������ Ȱ��ȭ �� ������, ��Ȱ��ȭ �� ������ ���Ѵ�.
			//  - true : Ȱ��ȭ
			//  - false : ��Ȱ��ȭ
			void Enable(_In_ bool bEnable);

			// �ش� Sequence�� ���� Ȱ�� ���¸� Ȯ���Ѵ�.
			bool IsEnabled();

			// ���� Sequence Step���� �����Ѵ�.
			void SetStep(_In_ long nStep);

			// ���� Sequence Step���� ���´�.
			long GetStep();


			// ���� �Լ� ȣ�� �� �ش� ���� ������ �ٷ� ���� �� ������, Ư�� ���� ���� ���� �� ������ ������ Operation Mode�� ���Ѵ�.
			//  - true : �ش� ���� ������ �ٷ� ����.
			//  - false : ����ڰ� ������ �������� ���� �� ����.
			void SetImmediateStop(_In_ bool bImmediateStop);

			// SetImmediateStop���� ������ ���� ��ȯ�Ѵ�.
			bool GetImmediateStop();


			// �ش� Sequence�� �̸��� �����Ѵ�.
			// Sequence���� �� �ش� �Լ��� ȣ������ �ʰų�, �� ���ڿ� �Է� ��(ex. "") "Default sequence name" ���� ���� �ȴ�.
			void SetName(_In_ CString strName);

			// �ش� Sequence�� �̸��� ���´�.
			CString GetName();


			// �ش� Sequence �����ÿ� ���� �ð��� ������ ���� �������� ���� �� ���� �����Ѵ�. (���� : Millisecond)
			void SetSequenceStopTimeout(_In_ float fTimeoutMillisecond);

			// �ش� Sequence �����ÿ� ������� ���� �� �������Ḧ ������ �ð� �������� ���´�. (���� : Millisecond)
			float GetSequenceStopTimeout();

			ESequenceStatus GetStatus();

		protected:

			//////////////////////////////////////////////////////////////////////////
			// ����Ŭ���̽ÿ� �Ʒ� �߻� �Լ����� �ݵ�� ������ �ּ���.
			// �Ʒ� �Լ����� ���Ƿ� ȣ������ ���ʽÿ�.

			virtual void OnStart() = 0;
			virtual void OnPause() = 0;
			virtual void OnStop() = 0;

			virtual bool Work() = 0;

			//////////////////////////////////////////////////////////////////////////
			// SetImmediateStop �Լ����� false�� ���� �� IndicateStopPosition�Լ��� ȣ�� �ϴ� ������ ���� �� ���� ���� ���� �ʴµ�
			// ������ ���ϴ� ������ �� �������� �Ʒ� �Լ��� �߰��Ѵ�.
			void IndicateStopPosition();


		private:
			static UINT SequenceThread(_In_ LPVOID pParam);
			static UINT SequenceTimeoutMonitor(_In_ LPVOID pParam);

		protected:
			CString m_strName;
			float m_fStopTimeout = 10000.f;


			volatile long m_nStep = 0;

			volatile bool m_bImmediateStop = true;
			volatile bool m_bIsRunning = false;
			volatile bool m_bIsEnabled = true;
			volatile ESequenceStatus m_eStatus = ESequenceStatus_Stop;

			CWinThread* m_pThread = nullptr;
		};
	}
}