#include "stdafx.h"
#include "DropWindow.h"

//��Ҫһ����괩͸�Ĵ���
int CDropWindow::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	//lpCreateStruct->dwExStyle |= WS_EX_LAYERED | WS_EX_TRANSPARENT;
	SetMsgHandled(FALSE);
	return 0;
}

BOOL CDropWindow::OnInitDialog(HWND wndFocus, LPARAM lInitParam)
{
	m_bLayoutInited = TRUE;
	ModifyStyleEx(0,  WS_EX_TRANSPARENT);
	SetWindowPos(HWND_TOPMOST, 0, 0, 0, 0, SWP_NOSIZE | SWP_NOMOVE);	
	
	return 0;
}

CDropWindow::CDropWindow() : SHostWnd(_T("LAYOUT:XML_MAINDROPS"))
{	
	m_bLayoutInited = FALSE;
}


CDropWindow::~CDropWindow()
{
}
