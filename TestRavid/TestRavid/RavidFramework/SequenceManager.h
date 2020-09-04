#pragma once

#include "RavidObjectEx.h"

#include <memory>

namespace Ravid
{
	namespace Framework
	{
		class CSequenceInfo;

		class AFX_EXT_CLASS CSequenceManager : public CRavidObjectEx
		{
		private:
			CSequenceManager();

		public:
			virtual ~CSequenceManager();

			// �ش� Sequence�� ��� �Ѵ�.
			static bool RegisterSequence(_In_ CSequenceInfo* pSequence, bool bAutoDestroyWhenTerminating = true);

			// �ش� Sequence�� ��� ���� �Ѵ�.
			static bool UnregisterSequence(_In_ CSequenceInfo* pSequence);

			static size_t GetSequenceCount();

			// ��ϵ� Sequences�� ��� �����Ѵ�. 
			static bool Run();

			// ��ϵ� ��� Sequence�� �����Ѵ�. (�񵿱� �Լ�)
			static bool Stop(_In_ ESequenceStatus eFlag = ESequenceStatus_Stop);

			// Stop�Լ��� �񵿱� �̹Ƿ� ���� Stop�Լ� ȣ�� ���� ��� Sequence�� ������ �� ���� ��ٷ��� �Ѵٸ� �Ʒ� �Լ��� ȣ���ؼ� ��ٸ���.
			static bool WaitStopForAllSequence();

			// Sequence���� ���������� Ȯ���Ѵ�. ��ϵ� Sequence�� �� �ϳ��� Sequence�� �����߿� �ִٸ� true�� �����Ѵ�.
			static bool IsRunning();

			static ESequenceStatus GetStatus();

			static CSequenceInfo* GetSequence(_In_ size_t stNumber);

		private:
			static CSequenceManager* GetInstance();

		protected:
			std::vector<CSequenceInfo*> m_vctSequences;
			std::vector<bool> m_vctSequenceAutoDestroyFlags;

		};
	}
}

