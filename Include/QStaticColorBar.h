/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CQStaticColorBar.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2016��3��
* �汾��¼: �����ļ�
*/

#pragma once

 

class GLOABL_EXT_CLASS CQStaticColorBar : public CWnd
{
private:
	COLORREF m_clrColor;
	CWnd*    m_pParent;
public:	
	void SetParant(CWnd* pParent);
	void SetColor(COLORREF color);
	COLORREF GetColor();

// Construction
public:	
	CQStaticColorBar(CWnd* pParent=NULL);
	CQStaticColorBar(COLORREF color,CWnd* pParent=NULL);
// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(QStaticColorBar)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CQStaticColorBar();

	// Generated message map functions
protected:
	//{{AFX_MSG(QStaticColorBar)
	afx_msg void OnPaint();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);	
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////
