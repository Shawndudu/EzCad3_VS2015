#pragma once
#include "QLamp.h"

// CDlgLaserMonitorYag �Ի���

class CDlgLaserMonitorYag : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgLaserMonitorYag)

public:
	CDlgLaserMonitorYag(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgLaserMonitorYag();

	void UpdateState(BOOL& bOK );

	CQLamp m_lamp1;

	BOOL m_bReady;

	void SetErrorStr(CString str);

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_LASER_FIBER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public: 
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonPw();
};
