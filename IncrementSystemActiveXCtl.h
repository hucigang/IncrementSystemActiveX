#if !defined(AFX_INCREMENTSYSTEMACTIVEXCTL_H__E5AB96A1_5413_4159_8B7A_66F7FDE70673__INCLUDED_)
#define AFX_INCREMENTSYSTEMACTIVEXCTL_H__E5AB96A1_5413_4159_8B7A_66F7FDE70673__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// IncrementSystemActiveXCtl.h : Declaration of the CIncrementSystemActiveXCtrl ActiveX Control class.

/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXCtrl : See IncrementSystemActiveXCtl.cpp for implementation.

class CIncrementSystemActiveXCtrl : public COleControl
{
	DECLARE_DYNCREATE(CIncrementSystemActiveXCtrl)

// Constructor
public:
	CIncrementSystemActiveXCtrl();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIncrementSystemActiveXCtrl)
	public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();
	//}}AFX_VIRTUAL

// Implementation
protected:
	~CIncrementSystemActiveXCtrl();

	DECLARE_OLECREATE_EX(CIncrementSystemActiveXCtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CIncrementSystemActiveXCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CIncrementSystemActiveXCtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CIncrementSystemActiveXCtrl)		// Type name and misc status

// Message maps
	//{{AFX_MSG(CIncrementSystemActiveXCtrl)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
		
		afx_msg int NoticeClient(char* phoneNum);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	//{{AFX_DISPATCH(CIncrementSystemActiveXCtrl)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DISPATCH
	DECLARE_DISPATCH_MAP()

// Event maps
	//{{AFX_EVENT(CIncrementSystemActiveXCtrl)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_EVENT
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	//{{AFX_DISP_ID(CIncrementSystemActiveXCtrl)
		// NOTE: ClassWizard will add and remove enumeration elements here.
		//    DO NOT EDIT what you see in these blocks of generated code !
		dispNoticeClient = 1L,
	//}}AFX_DISP_ID
	};
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INCREMENTSYSTEMACTIVEXCTL_H__E5AB96A1_5413_4159_8B7A_66F7FDE70673__INCLUDED)
