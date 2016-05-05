#if !defined(AFX_INCREMENTSYSTEMACTIVEX_H__2284B06F_4F98_4164_A83E_D76E2BF1D582__INCLUDED_)
#define AFX_INCREMENTSYSTEMACTIVEX_H__2284B06F_4F98_4164_A83E_D76E2BF1D582__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// IncrementSystemActiveX.h : main header file for INCREMENTSYSTEMACTIVEX.DLL

#if !defined( __AFXCTL_H__ )
	#error include 'afxctl.h' before including this file
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXApp : See IncrementSystemActiveX.cpp for implementation.

class CIncrementSystemActiveXApp : public COleControlModule
{
public:
	BOOL InitInstance();
	int ExitInstance();
};

extern const GUID CDECL _tlid;
extern const WORD _wVerMajor;
extern const WORD _wVerMinor;

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INCREMENTSYSTEMACTIVEX_H__2284B06F_4F98_4164_A83E_D76E2BF1D582__INCLUDED)
