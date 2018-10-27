/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CDlgGeneral.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/
#if !defined(AFX_DLGGENERAL_H__62338B84_DFE1_47D0_B0DF_21F68116341C__INCLUDED_)
#define AFX_DLGGENERAL_H__62338B84_DFE1_47D0_B0DF_21F68116341C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// dlggeneral.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgGeneral dialog
#include "sysparam.h"
#include "..\resource.h"

class CDlgGeneral : public CDialog
{
// Construction
public:
	CDlgGeneral(CWnd* pParent = NULL);   // standard constructor

		CSysParam* m_pParam;
		
	CComboBox m_comboxUnit;
	void OK();
// Dialog Data
	//{{AFX_DATA(CDlgGeneral)
	enum { IDD = IDD_DIALOG_SYS_GENERAL };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgGeneral)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgGeneral)
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	virtual void OnCancel();
	afx_msg void OnButtonStart(); 
	afx_msg void OnButtonFinish(); 
 
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCheckEnprojectview();
	afx_msg void OnBnClickedCheckShowgrid();
	afx_msg void OnBnClickedCheckShowfast();
	afx_msg void OnBnClickedCheckShowdir();
	afx_msg void OnDeltaposSpinThread(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnDeltaposSpinThread2(NMHDR *pNMHDR, LRESULT *pResult);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGGENERAL_H__62338B84_DFE1_47D0_B0DF_21F68116341C__INCLUDED_)
