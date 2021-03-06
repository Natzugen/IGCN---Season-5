// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//
#pragma warning ( disable : 4786 )	// Disable Warning of Large Debuf Strings ( truncated to 255 len )
#pragma warning ( disable : 4244 )
#pragma warning ( disable : 4996 )
#pragma warning ( disable : 4995 )
#if !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
#define AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#define _WIN32_WINNT 0x500

// Windows Header Files:
#include <afx.h> //
#include <windows.h>
#include <winbase.h>
#include <winsock2.h>
#include "COMMCTRL.h"

// C RunTime Header Files
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <time.h>
#include <math.h>
#include <process.h>

#include <map>
#include <string>
#include <ios>
#include <algorithm>
#include <vector>
#include <set>
#include <strsafe.h>
// Local Header Files
#include ".\MuMsg\MuMsg.h"

// TODO: reference additional headers your program requires here
#pragma comment( lib , "wsock32.lib" )
#pragma comment( lib , "ws2_32.lib" )
#pragma comment( lib , "COMCTL32.lib" )


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__A9DB83DB_A9FD_11D0_BFD1_444553540000__INCLUDED_)
