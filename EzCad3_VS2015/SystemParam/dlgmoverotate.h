/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CDlgMoveRotate.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/
#if !defined(AFX_DLGMOVEROTATE_H__5DD53934_21B0_421B_BC2E_33AFA21662A3__INCLUDED_)
#define AFX_DLGMOVEROTATE_H__5DD53934_21B0_421B_BC2E_33AFA21662A3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// dlgmoverotate.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgMoveRotate dialog
#include "sysparam.h"
#include "..\resource.h"

class CDlgMoveRotate : public CDialog
{
// Construction
public:
	CDlgMoveRotate(CWnd* pParent = NULL);   // standard constructor
	void OK();
CSysParam* m_pParam;
// Dialog Data
	//{{AFX_DATA(CDlgMoveRotate)
	enum { IDD = IDD_DIALOG_SYS_MOVEROTATE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgMoveRotate)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgMoveRotate)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGMOVEROTATE_H__5DD53934_21B0_421B_BC2E_33AFA21662A3__INCLUDED_)
