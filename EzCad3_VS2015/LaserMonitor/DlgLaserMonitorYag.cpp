// D:\��Ŀ\EzCad3_VS2015\EzCad3_VS2015\LaserMonitor\DlgLaserMonitorFiber.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "..\EzCad3_VS2015.h"
#include "DlgLaserMonitorYag.h"
#include "afxdialogex.h"
#include "QGlobal.h"
#include "..\MainFrm.h"
#include "..\Mark\MarkStd\DlgMark.h"
// CDlgLaserMonitorYag �Ի���

IMPLEMENT_DYNAMIC(CDlgLaserMonitorYag, CDialogEx)

CDlgLaserMonitorYag::CDlgLaserMonitorYag(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_LASER_FIBER, pParent)
{
	m_bReady = FALSE;
}

CDlgLaserMonitorYag::~CDlgLaserMonitorYag()
{
	
}

void CDlgLaserMonitorYag::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	
	DDX_Control(pDX, IDC_STATIC_LAMP1, m_lamp1); 
}


BEGIN_MESSAGE_MAP(CDlgLaserMonitorYag, CDialogEx) 
	ON_BN_CLICKED(IDC_BUTTON_ENABLE, &CDlgLaserMonitorYag::OnBnClickedButtonPw)
END_MESSAGE_MAP()


// CDlgLaserMonitorYag ��Ϣ�������


BOOL CDlgLaserMonitorYag::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	m_lamp1.Off();  
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}

void CDlgLaserMonitorYag::UpdateState(BOOL& bOK)
{	 
	CDlgMark* pDlg = gf_GetDlgMark();
	if (pDlg == NULL || pDlg->IsMarkerLocked())
	{
		return;
	}

	pDlg->LockMarker();
	PMarker pMarker = pDlg->GetMarker();
	if (pMarker != NULL)
	{ 
		WORD state = E3_MarkerGetLaserState(pMarker);	
		state &= 0x0F;
		BOOL bAlarm = FALSE;
		if (state == 0x0F)
		{
			m_bReady = TRUE;
			m_lamp1.Green();
		}
		else
		{
			bAlarm = TRUE;
			m_bReady = FALSE;
			m_lamp1.Off();
		}

		E3_MarkerHandleLaserFaultOutput(pMarker, bAlarm);
	}
	pDlg->UnLockMarker();
}

void CDlgLaserMonitorYag::SetErrorStr(CString str)
{
	GetDlgItem(IDC_STATIC_LASER)->SetWindowText(str);
}

void CDlgLaserMonitorYag::OnBnClickedButtonPw()
{
#ifdef ENABLE_MARK
	CMainFrame* pMainWnd = (CMainFrame*)gf_GetMainFrame();
	PMarker pMarker = pMainWnd->m_wndMark.GetMarker();
	if (pMarker != NULL)
	{
		E3_MarkerSetLaserStartUp(pMarker, m_bReady?FALSE:TRUE);		
	}
#endif
}
