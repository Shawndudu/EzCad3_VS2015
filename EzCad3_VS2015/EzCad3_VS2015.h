/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� EzCad3_VS2015.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

// EzCad3_VS2015.h : EzCad3_VS2015 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������

#define ENABLE_CMD

// CEzCad3_VS2015App:
// �йش����ʵ�֣������ EzCad3_VS2015.cpp
//
class CQSingleDocTemplate : public CSingleDocTemplate
{
public:
	CQSingleDocTemplate(UINT nIDResource, CRuntimeClass* pDocClass,
		CRuntimeClass* pFrameClass, CRuntimeClass* pViewClass);

	void ChangeDocStr();
};

class CEzCad3_VS2015App : public CWinAppEx
{
public:
	CEzCad3_VS2015App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

	void   InititalQKernal();
	void   CloseQKernal();

	BOOL ShowAgreeLicence();

	void SetEz3DocToReg();

// ʵ��
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();
	afx_msg void OnFileOpen();
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CEzCad3_VS2015App theApp;
