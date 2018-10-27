/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CDlgMarking.h
* �ļ���ʶ��
* ժҪ�� 
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#pragma once

#include "QPngButton.h"
#include "Matrix2d.h"

// CDlgMarking �Ի���

class CDlgMarking : public CDialog
{
	DECLARE_DYNAMIC(CDlgMarking)

public:
	CDlgMarking(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgMarking();

// �Ի�������
	enum { IDD = IDD_DIALOG_MARKING };
	CQPngButton m_buttonStop;

	CWnd*  m_pDlgMark;
	HANDLE m_hThreadMark;
	BOOL   m_bThreadExitFlag;
	int    m_nMarkReturnErr;

	BOOL     m_bRedLight;
	BOOL     m_bRedLightMoveState;
	void TranformEnt();

	BOOL     m_bMarkSelected;	
	BOOL     m_bContinues;
	BOOL     m_bMarkLayer;
	BOOL     m_bCalcTimeMode;
	BOOL     m_bOffLine;


	int m_nFileCount;
	 int m_nStartPartCount;

	PEntity m_pEntParent; 
	PMarker m_pMarker;
	CBitmap* m_pCurBmp;

	BOOL m_bEnableLight; 
	CMatrix2d m_mtxChangeEnt;
	int m_nChangeTranType;
	void ShowInfo(CString str);
	void ShowInfo2(CString str);

	virtual BOOL PreTranslateMessage(MSG* pMsg);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

	LRESULT  OnMotorMove(WPARAM wParam, LPARAM lParam);
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	virtual void OnCancel();
	virtual void OnOK();
	afx_msg void OnDestroy();	
	afx_msg void OnClose();
};

