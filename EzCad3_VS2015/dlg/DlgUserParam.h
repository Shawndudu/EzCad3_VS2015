#pragma once

#include "QUser.h"
// CDlgUserParam �Ի���

class CDlgUserParam : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgUserParam)

public:
	QUser* m_pUser; 
	BOOL m_bDisableName;
	CDlgUserParam(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgUserParam();

// �Ի�������
	enum { IDD = IDD_DIALOG_USERPARAM };
	virtual void OnOK();
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
};
