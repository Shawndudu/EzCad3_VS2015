/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CMarkWnd.h
* �ļ���ʶ��
* ժҪ�� 
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#pragma once

#include "MarkStd\\DlgMark.h"
 
class CMarkWnd : public CDockablePane
{
// ����
public:
	CMarkWnd();

	void AdjustLayout();

 
	CDlgMark m_dlgMark;
 

	PMarker GetMarker();

	int GetMinShowWidth();
// ����
public:
	virtual CSize CalcFixedLayout(BOOL bStretch, BOOL bHorz);
// ʵ��
public:
	virtual ~CMarkWnd();

protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);	

	DECLARE_MESSAGE_MAP()
	
};

