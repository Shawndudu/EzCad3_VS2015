#pragma once

#include "QLamp.h"
// DlgLaserMonitorSpi �Ի���

class DlgLaserMonitorSpi : public CDialogEx
{
	DECLARE_DYNAMIC(DlgLaserMonitorSpi)

public:
	DlgLaserMonitorSpi(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~DlgLaserMonitorSpi();

	CQLamp m_lamp1;
	void SetErrorStr(CString str);
	void UpdateState(BOOL& bOK);

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_LASER_SPI };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()

public:
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedButtonMonitor();
};
