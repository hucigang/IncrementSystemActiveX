// IncrementSystemActiveXPpg.cpp : Implementation of the CIncrementSystemActiveXPropPage property page class.

#include "stdafx.h"
#include "IncrementSystemActiveX.h"
#include "IncrementSystemActiveXPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


IMPLEMENT_DYNCREATE(CIncrementSystemActiveXPropPage, COlePropertyPage)


/////////////////////////////////////////////////////////////////////////////
// Message map

BEGIN_MESSAGE_MAP(CIncrementSystemActiveXPropPage, COlePropertyPage)
	//{{AFX_MSG_MAP(CIncrementSystemActiveXPropPage)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CIncrementSystemActiveXPropPage, "INCREMENTSYSTEMACTIVEX.IncrementSystemActiveXPropPage.1",
	0xd293758, 0x8b94, 0x4251, 0xbe, 0x6a, 0x38, 0x1d, 0, 0x6b, 0xe0, 0x6c)


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXPropPage::CIncrementSystemActiveXPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CIncrementSystemActiveXPropPage

BOOL CIncrementSystemActiveXPropPage::CIncrementSystemActiveXPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_INCREMENTSYSTEMACTIVEX_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXPropPage::CIncrementSystemActiveXPropPage - Constructor

CIncrementSystemActiveXPropPage::CIncrementSystemActiveXPropPage() :
	COlePropertyPage(IDD, IDS_INCREMENTSYSTEMACTIVEX_PPG_CAPTION)
{
	//{{AFX_DATA_INIT(CIncrementSystemActiveXPropPage)
	// NOTE: ClassWizard will add member initialization here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_INIT
}


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXPropPage::DoDataExchange - Moves data between page and properties

void CIncrementSystemActiveXPropPage::DoDataExchange(CDataExchange* pDX)
{
	//{{AFX_DATA_MAP(CIncrementSystemActiveXPropPage)
	// NOTE: ClassWizard will add DDP, DDX, and DDV calls here
	//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA_MAP
	DDP_PostProcessing(pDX);
}


/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXPropPage message handlers
