// IncrementSystemActiveXCtl.cpp : Implementation of the CIncrementSystemActiveXCtrl ActiveX Control class.

#include "stdafx.h"
#include <atlbase.h>
#include <atlcom.h>
#include <MsHTML.h>
#include "mshtml.h"
#include "mshtmdid.h"
#include "resource.h"
#include <afxwin.h>
#include "IncrementSystemActiveX.h"
#include "IncrementSystemActiveXCtl.h"
#include "IncrementSystemActiveXPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#define WM_MYIEMESSAGE         (WM_USER+103)

IMPLEMENT_DYNCREATE(CIncrementSystemActiveXCtrl, COleControl)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CIncrementSystemActiveXCtrl, COleControl)
	//{{AFX_MSG_MAP(CIncrementSystemActiveXCtrl)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Dispatch map

BEGIN_DISPATCH_MAP(CIncrementSystemActiveXCtrl, COleControl)
	//{{AFX_DISPATCH_MAP(CIncrementSystemActiveXCtrl)
	// NOTE - ClassWizard will add and remove dispatch map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	DISP_FUNCTION_ID(CIncrementSystemActiveXCtrl, "NoticeClient", dispNoticeClient, NoticeClient, VT_I2, VTS_BSTR)
	//}}AFX_DISPATCH_MAP
END_DISPATCH_MAP()


/////////////////////////////////////////////////////////////////////////////
// Event map

BEGIN_EVENT_MAP(CIncrementSystemActiveXCtrl, COleControl)
	//{{AFX_EVENT_MAP(CIncrementSystemActiveXCtrl)
	// NOTE - ClassWizard will add and remove event map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_EVENT_MAP
END_EVENT_MAP()


/////////////////////////////////////////////////////////////////////////////
// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CIncrementSystemActiveXCtrl, 1)
	PROPPAGEID(CIncrementSystemActiveXPropPage::guid)
END_PROPPAGEIDS(CIncrementSystemActiveXCtrl)


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CIncrementSystemActiveXCtrl, "INCREMENTSYSTEMACTIVEX.IncrementSystemActiveXCtrl.1",
	0x4ebaddbf, 0xbe67, 0x4f6e, 0xa8, 0x10, 0x18, 0xa0, 0x3b, 0xd1, 0xce, 0xc8)


/////////////////////////////////////////////////////////////////////////////
// Type library ID and version

IMPLEMENT_OLETYPELIB(CIncrementSystemActiveXCtrl, _tlid, _wVerMajor, _wVerMinor)


/////////////////////////////////////////////////////////////////////////////
// Interface IDs

const IID BASED_CODE IID_DIncrementSystemActiveX =
		{ 0x3eab89a2, 0xae32, 0x4c7c, { 0xbc, 0x81, 0xd4, 0x9d, 0xdb, 0xfa, 0x7, 0x91 } };
const IID BASED_CODE IID_DIncrementSystemActiveXEvents =
		{ 0x2f4676c1, 0x4859, 0x4b75, { 0xbb, 0x5e, 0x2, 0x45, 0x74, 0xf2, 0x66, 0x97 } };


/////////////////////////////////////////////////////////////////////////////
// Control type information

static const DWORD BASED_CODE _dwIncrementSystemActiveXOleMisc =
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CIncrementSystemActiveXCtrl, IDS_INCREMENTSYSTEMACTIVEX, _dwIncrementSystemActiveXOleMisc)


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXCtrl::CIncrementSystemActiveXCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CIncrementSystemActiveXCtrl

BOOL CIncrementSystemActiveXCtrl::CIncrementSystemActiveXCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_INCREMENTSYSTEMACTIVEX,
			IDB_INCREMENTSYSTEMACTIVEX,
			afxRegApartmentThreading,
			_dwIncrementSystemActiveXOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXCtrl::CIncrementSystemActiveXCtrl - Constructor

CIncrementSystemActiveXCtrl::CIncrementSystemActiveXCtrl()
{
	InitializeIIDs(&IID_DIncrementSystemActiveX, &IID_DIncrementSystemActiveXEvents);

	// TODO: Initialize your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXCtrl::~CIncrementSystemActiveXCtrl - Destructor

CIncrementSystemActiveXCtrl::~CIncrementSystemActiveXCtrl()
{
	// TODO: Cleanup your control's instance data here.
}


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXCtrl::OnDraw - Drawing function

void CIncrementSystemActiveXCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXCtrl::DoPropExchange - Persistence support

void CIncrementSystemActiveXCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.

}


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXCtrl::OnResetState - Reset control to default state

void CIncrementSystemActiveXCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXCtrl message handlers
int CIncrementSystemActiveXCtrl::NoticeClient(char* phoneNum)
{
	UpdateData();
	HWND h_Wnd = ::FindWindow(NULL, _T("精细化助销平台"));
//	LPTSTR lpStr;
//	lpStr = (LPSTR)(LPCTSTR)phoneNum;
//	::PostMessage(h_Wnd, WM_MYIEMESSAGE, 0, (LPARAM)lpStr);
	CString temp(phoneNum);

	COPYDATASTRUCT cpd; // 给COPYDATASTRUCT结构赋值
	cpd.dwData = 0;
	cpd.cbData = temp.GetLength();

	cpd.lpData = (void*)temp.GetBuffer(cpd.cbData);

	::SendMessage(h_Wnd, WM_COPYDATA,NULL,(LPARAM)&cpd);
	return 1;
}
