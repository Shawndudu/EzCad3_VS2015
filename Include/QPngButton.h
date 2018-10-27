/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CQPngButton.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/
#pragma once

#include <GdiPlus.h> 
#include <gdiplusHeaders.h>
#include <gdiplusGraphics.h>

using namespace Gdiplus;
class GLOABL_EXT_CLASS CQPngButton : public CButton
{
private:
	Image* m_pImgBtn;
public:
	void DrawButton(CDC *pDC, CRect rectBtn);
	// Construction
public:
	CQPngButton(CWnd* pParent = NULL);
	void LoadImage(CString strFile);
	 
 	// Attributes
public:

	// Operations
public:

	// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQPngButton)
	//}}AFX_VIRTUAL

	// Implementation
public:
	virtual ~CQPngButton();

	// Overrides
public:
 	// Generated message map functions
protected:
	//{{AFX_MSG(CQPngButton) 
	afx_msg void OnPaint();
 	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
