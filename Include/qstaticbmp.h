/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CQStaticBmp.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2016��3��
* �汾��¼: �����ļ�
*/


#if !defined(AFX_QSTATICBMP_H__AB0C890B_8CF9_4A02_AB9B_BB0036821A6A__INCLUDED_)
#define AFX_QSTATICBMP_H__AB0C890B_8CF9_4A02_AB9B_BB0036821A6A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// qstaticbmp.h : header file
//
 
/////////////////////////////////////////////////////////////////////////////
// CQStaticBmp window

class GLOABL_EXT_CLASS CQStaticBmp : public CWnd
{
// Construction
public:
	CQStaticBmp();

	BOOL m_bFitWnd;
	CBitmap m_bitmap;

	BOOL LoadBitmapsFile(CString bmpfile);
	BOOL LoadBitmaps(CString lpszBitmap);
	BOOL LoadBitmaps(UINT nBitmap);



// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQStaticBmp)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CQStaticBmp();

	// Generated message map functions
protected:
	//{{AFX_MSG(CQStaticBmp)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QSTATICBMP_H__AB0C890B_8CF9_4A02_AB9B_BB0036821A6A__INCLUDED_)
