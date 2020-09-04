
// RavidDoc.h : CRavidDoc Ŭ������ �������̽�
//

#pragma once

namespace Ravid
{
	namespace Framework
	{
		class AFX_EXT_CLASS CRavidDoc : public CDocument
		{
		protected: // serialization������ ��������ϴ�.
			CRavidDoc();
			DECLARE_DYNCREATE(CRavidDoc)

		// Ư���Դϴ�.
		public:

		// �۾��Դϴ�.
		public:

		// �������Դϴ�.
		public:
			virtual BOOL OnNewDocument();
			virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
			virtual void InitializeSearchContent();
			virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// �����Դϴ�.
		public:
			virtual ~CRavidDoc();
#ifdef _DEBUG
			virtual void AssertValid() const;
			virtual void Dump(CDumpContext& dc) const;
#endif

		protected:

		// ������ �޽��� �� �Լ�
		protected:
			DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// �˻� ó���⿡ ���� �˻� �������� �����ϴ� ����� �Լ�
			void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
		};
	}
}
