/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CDlgLayerParam.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#pragma once


// CDlgLayerParam �Ի���

class CDlgLayerParam : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgLayerParam)

public:
	CDlgLayerParam(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgLayerParam();

	CString m_strName;
	int m_nCount;

	int m_nStartDelayMs;
	int m_nEndDelayMs;
	BOOL m_bWaitForInput;
	WORD   m_wIoHigh;//����IO����Ϊ�ߵ�λ
	WORD   m_wIoLow;//����IO����Ϊ�͵�λ

	WORD   m_wStartOutputIoHigh;//��ʼ���IO����Ϊ�ߵ�λ
	WORD   m_wStartOutputIoLow;//��ʼ���IO����Ϊ�͵�λ
	WORD   m_wFinishOutputIoHigh;//��ʼ���IO����Ϊ�ߵ�λ
	WORD   m_wFinishOutputIoLow;//��ʼ���IO����Ϊ�͵�λ


// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_LAYERPARAM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
};
