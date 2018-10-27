/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CDlgWorkSpace.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/
#if !defined(AFX_DLGWORKSPACE_H__07B0CF40_6549_405F_BFEA_B0F7E07FE6AB__INCLUDED_)
#define AFX_DLGWORKSPACE_H__07B0CF40_6549_405F_BFEA_B0F7E07FE6AB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// dlgworkspace.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgWorkSpace dialog
#include "sysparam.h"
#include "..\resource.h"

class CDlgWorkSpace : public CDialog
{
// Construction
public:
	CDlgWorkSpace(CWnd* pParent = NULL);   // standard constructor

	void OnReInit();
	void OK();
		CSysParam* m_pParam;
// Dialog Data
	//{{AFX_DATA(CDlgWorkSpace)
	enum { IDD = IDD_DIALOG_SYS_WORKSPACE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgWorkSpace)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgWorkSpace)
	virtual BOOL OnInitDialog();
		virtual void OnOK();
	virtual void OnCancel();

	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGWORKSPACE_H__07B0CF40_6549_405F_BFEA_B0F7E07FE6AB__INCLUDED_)
