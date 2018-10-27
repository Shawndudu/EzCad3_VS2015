/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CPenboxBar.h
* �ļ���ʶ��
* ժҪ�� 
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#pragma once

#include "DialogPenbox.h"
//

/////////////////////////////////////////////////////////////////////////////
// CPenboxBar window

class CPenboxBar : public CDockablePane
{
// Construction
public:
	CPenboxBar();

// Attributes
public:
	 CDialogPenbox	m_wndPenbox;
	 void AdjustLayout();
// Operations
public: 
// Implementation
public:
	virtual ~CPenboxBar();

	// Generated message map functions
protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnPaint();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnSettingChange(UINT uFlags, LPCTSTR lpszSection);
		 
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

