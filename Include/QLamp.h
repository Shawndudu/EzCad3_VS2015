/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� QLamp.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#ifndef QLAMP_H
#define QLAMP_H
#include "QStaticBmp.h"

#define LAMP_GRAY   0 
#define LAMP_GREEN  1
#define LAMP_RED    2
 
class GLOABL_EXT_CLASS  CQLamp : public CQStaticBmp
{
public:
	CQLamp();
	~CQLamp();
	BOOL m_bFlash;
	UINT_PTR  m_nTimeID;
	int  m_nLastState;
	int  m_nFlashState;

	void Red();	
	void Green();	
	void Off();
	void SetFlash(BOOL bFlash,int nFlashClr);

	// Attributes
public:
	
	// Operations
public:
	
	// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQLamp)
	//}}AFX_VIRTUAL
	
	// Implementation
public:

	
	// Generated message map functions
protected:
	//{{AFX_MSG(CQLamp)
	afx_msg void OnTimer(UINT_PTR nIDEvent);
		afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


#endif