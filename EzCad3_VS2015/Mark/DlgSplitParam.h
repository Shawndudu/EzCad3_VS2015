/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CDlgSplitParam.h
* �ļ���ʶ��
* ժҪ��  
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#pragma once


// CDlgSplitParam �Ի���

class CDlgSplitParam : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgSplitParam)

public:
	CDlgSplitParam(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgSplitParam();
	BOOL  m_bHideX;
	BOOL  m_bHideY;
	BOOL  m_bShowDisableA;


	int  m_nSplitModeX;
	double m_dSplitSizeX;

	int  m_nSplitModeY;
	double m_dSplitSizeY;
	int m_nSplitAttrib;

	BOOL m_bKeepEntOrder;
 
	BOOL m_bCylinderWrap;
	BOOL m_bSphereWrap;
	BOOL m_bRevolveWrap;
	BOOL m_bSplitByGLB;
	BOOL  m_bDisableAxisA;


	CComboBox	m_comboModeX;
	CComboBox	m_comboModeY;

	BOOL m_bNoCutEntity;
	BOOL m_bShowCylinderWrap;

	BOOL m_bShowSphereWrap;

	BOOL m_bUseSplitCenAsMarkingCen;
	void UpdataModeX();
	void UpdataModeY();

	BOOL m_bEnableA;
	BOOL m_bMark360;
	int  m_nMarkCount;
	double  m_dMarkAngle;

	void UpdateWrapType();
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SPLITPARAM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public: 
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCheckKeeporder();
	afx_msg void OnCbnSelchangeComboMode();
	afx_msg void OnCbnSelchangeComboModeY();
	afx_msg void OnBnClickedCheckRevolvewarp();
	afx_msg void OnBnClickedCheckSpherewarp();
	afx_msg void OnBnClickedCheckCylinderwarp(); 
	afx_msg void OnBnClickedButtonCount();
	afx_msg void OnBnClickedButtonAngle();
	afx_msg void OnBnClickedCheck360();
	afx_msg void OnBnClickedCheckDisableaxisa();
};
