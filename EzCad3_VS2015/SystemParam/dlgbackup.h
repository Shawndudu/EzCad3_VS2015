/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CDlgBackup.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/
#if !defined(AFX_DLGBACKUP_H__8B454184_FDC5_4491_87EB_DB55593F14CA__INCLUDED_)
#define AFX_DLGBACKUP_H__8B454184_FDC5_4491_87EB_DB55593F14CA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// dlgbackup.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgBackup dialog
#include "sysparam.h"
#include "..\resource.h"

class CDlgBackup : public CDialog
{
// Construction
public:
	CDlgBackup(CWnd* pParent = NULL);   // standard constructor
	void OK();
	
		CSysParam* m_pParam;
// Dialog Data
	//{{AFX_DATA(CDlgBackup)
	enum { IDD = IDD_DIALOG_SYS_BACKUP };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgBackup)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgBackup)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnKillfocusEditSavetime();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGBACKUP_H__8B454184_FDC5_4491_87EB_DB55593F14CA__INCLUDED_)
