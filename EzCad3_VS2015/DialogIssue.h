#pragma once


// CDialogIssue �Ի���

class CDialogIssue : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogIssue)

public:
	CDialogIssue(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogIssue();

	int m_nMarkerId;

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_ISSUE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonSavetofile();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButtonEmail();
};
