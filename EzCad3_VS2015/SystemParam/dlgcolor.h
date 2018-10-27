/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CDlgColor.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/
#if !defined(AFX_DLGCOLOR_H__EF0BACD9_44AE_404D_9F77_F826639DEC5B__INCLUDED_)
#define AFX_DLGCOLOR_H__EF0BACD9_44AE_404D_9F77_F826639DEC5B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// dlgcolor.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgColor dialog
#include "sysparam.h"
#include "..\resource.h"
#include "QLamp.h"
#include "QStaticColorBar.h"
class CDlgColor : public CDialog
{
// Construction
public:
	CDlgColor(CWnd* pParent = NULL);   // standard constructor
	void OK();

	CSysParam* m_pParam;

// Dialog Data
	//{{AFX_DATA(CDlgColor)
	enum { IDD = IDD_DIALOG_SYS_COLOR };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	CQStaticColorBar m_scbBK;
	CQStaticColorBar m_scbPaper;
	CQStaticColorBar m_scbGuide;
	CQStaticColorBar m_scbGrid;
  
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgColor)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgColor)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnStnClickedStaticClrBk();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGCOLOR_H__EF0BACD9_44AE_404D_9F77_F826639DEC5B__INCLUDED_)
