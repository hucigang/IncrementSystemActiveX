#if !defined(AFX_INCREMENTSYSTEMACTIVEXPPG_H__E7D03366_497F_466D_8289_6452D65B7967__INCLUDED_)
#define AFX_INCREMENTSYSTEMACTIVEXPPG_H__E7D03366_497F_466D_8289_6452D65B7967__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// IncrementSystemActiveXPpg.h : Declaration of the CIncrementSystemActiveXPropPage property page class.

////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXPropPage : See IncrementSystemActiveXPpg.cpp.cpp for implementation.

class CIncrementSystemActiveXPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CIncrementSystemActiveXPropPage)
	DECLARE_OLECREATE_EX(CIncrementSystemActiveXPropPage)

// Constructor
public:
	CIncrementSystemActiveXPropPage();

// Dialog Data
	//{{AFX_DATA(CIncrementSystemActiveXPropPage)
	enum { IDD = IDD_PROPPAGE_INCREMENTSYSTEMACTIVEX };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	//{{AFX_MSG(CIncrementSystemActiveXPropPage)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INCREMENTSYSTEMACTIVEXPPG_H__E7D03366_497F_466D_8289_6452D65B7967__INCLUDED)
