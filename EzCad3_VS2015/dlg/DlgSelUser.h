#pragma once

#include "..\resource.h"
// CDlgSelUser �Ի���

class CDlgSelUser : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgSelUser)

public:
	CDlgSelUser(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgSelUser();

	CComboBox m_comboUser;
// �Ի�������
	enum { IDD = IDD_DIALOG_SELUSER };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	virtual BOOL OnInitDialog();
};
