/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CColorButton.h
* �ļ���ʶ��
* ժҪ��  
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/
#pragma once

#include "..\Resource.h"

// CDlgPenColor �Ի���
class CColorButton : public CButton
{
// Construction
public:
	CColorButton();

	COLORREF m_clrBtn; 
public:
	virtual ~CColorButton();

	void SetColor(COLORREF clrPen)
	{
		m_clrBtn = clrPen;
		Invalidate();
	}
	virtual void DrawItem(LPDRAWITEMSTRUCT lpDrawItemStruct);
	// Generated message map functions
protected:
	//{{AFX_MSG(CColorButton)
	//afx_msg void OnPaint();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

class CShowHideButton : public CMFCButton
{
	// Construction
public:
	CShowHideButton();
	 
	BOOL m_bShowOnOff;
public:
	virtual ~CShowHideButton();

	void SetShow(BOOL b);
	 
	// Generated message map functions
protected:
	//{{AFX_MSG(CColorButton)
	//afx_msg void OnPaint();
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};