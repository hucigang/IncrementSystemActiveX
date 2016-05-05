// IncrementSystemActiveX.cpp : Implementation of CIncrementSystemActiveXApp and DLL registration.

#include "stdafx.h"
#include "IncrementSystemActiveX.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


CIncrementSystemActiveXApp NEAR theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x7d10672b, 0x3db7, 0x4b0b, { 0x91, 0x4c, 0x59, 0x9c, 0x7c, 0x21, 0xa5, 0x85 } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;


////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXApp::InitInstance - DLL initialization

BOOL CIncrementSystemActiveXApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: Add your own module initialization code here.
	}

	return bInit;
}


////////////////////////////////////////////////////////////////////////////
// CIncrementSystemActiveXApp::ExitInstance - DLL termination

int CIncrementSystemActiveXApp::ExitInstance()
{
	// TODO: Add your own module termination code here.

	return COleControlModule::ExitInstance();
}


/////////////////////////////////////////////////////////////////////////////
// DllRegisterServer - Adds entries to the system registry

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}


/////////////////////////////////////////////////////////////////////////////
// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
