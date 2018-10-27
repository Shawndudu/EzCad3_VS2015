/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CDlgUser.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/
#if !defined(AFX_DLGUSER_H__A1A0759D_F8C7_4564_8A04_EA1E0AE0067F__INCLUDED_)
#define AFX_DLGUSER_H__A1A0759D_F8C7_4564_8A04_EA1E0AE0067F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// dlguser.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgUser dialog
#include "sysparam.h"
#include "..\resource.h"

class CDlgUser : public CDialog
{
// Construction
public:
	CDlgUser(CWnd* pParent = NULL);   // standard constructor
	void OK();

		CSysParam* m_pParam;
// Dialog Data
	//{{AFX_DATA(CDlgUser)
	enum { IDD = IDD_DIALOG_SYS_USER };
	CListBox	m_listUser;
	BOOL m_bEnUser;
	//}}AFX_DATA
void ShowEnuser();
void UpdateUserList();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgUser)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgUser)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnButtonAdd();
	afx_msg void OnButtonDel();
	afx_msg void OnCheckEnuser();
	afx_msg void OnButtonModify();
	afx_msg void OnDblclkListUser();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGUSER_H__A1A0759D_F8C7_4564_8A04_EA1E0AE0067F__INCLUDED_)
