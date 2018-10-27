#pragma once


// CDlgLaserMonitor �Ի���

#include "DlgLaserMonitorFiber.h"
#include "DlgLaserMonitorSpi.h"
#include "DlgLaserMonitorQcw.h"
#include "DlgLaserMonitorYag.h"

class CDlgLaserMonitor : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgLaserMonitor)

public:
	CDlgLaserMonitor(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgLaserMonitor();
	UINT_PTR  m_nTimeID;
	int m_nCurLaserType = 0;
 
	CDlgLaserMonitorFiber m_dlgFiber;
	DlgLaserMonitorSpi m_dlgSpi;
	DlgLaserMonitorQcw m_dlgQcw;
	CDlgLaserMonitorYag  m_dlgYag;
// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_LASERMONITOR };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
protected:
	//{{AFX_MSG(CDlgLaserMonitor)
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnDestroy();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
	
public:
	virtual BOOL OnInitDialog();
	afx_msg LRESULT OnUserLaserChange(WPARAM wParam, LPARAM lParam);

};
