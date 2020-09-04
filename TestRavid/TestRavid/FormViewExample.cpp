#include "stdafx.h"
#include "resource.h"
#include "FormViewExample.h"

IMPLEMENT_DYNCREATE(CFormViewExample, CRavidFormViewBase)

CFormViewExample::CFormViewExample()
	: CRavidFormViewBase(IDD_FORM_VIEW_EXAMPLE)
{

}

CFormViewExample::~CFormViewExample()
{
}

void CFormViewExample::DoDataExchange(CDataExchange* pDX)
{
	CRavidFormViewBase::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CFormViewExample, CRavidFormViewBase)
END_MESSAGE_MAP()

#ifdef _DEBUG
void CFormViewExample::AssertValid() const
{
	CRavidFormViewBase::AssertValid();
}

#ifndef _WIN32_WCE
void CFormViewExample::Dump(CDumpContext& dc) const
{
	CRavidFormViewBase::Dump(dc);
}
#endif
#endif //_DEBUG
