// D:\��Ŀ\EzCad3_VS2015\EzCad3_VS2015\LaserMonitor\DlgLaserMonitorSpi.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "..\EzCad3_VS2015.h"
#include "DlgLaserMonitorSpi.h"
#include "afxdialogex.h"
#include "..\Mark\MarkStd\DlgMark.h"
#include "QGlobal.h"
// DlgLaserMonitorSpi �Ի���

IMPLEMENT_DYNAMIC(DlgLaserMonitorSpi, CDialogEx)

DlgLaserMonitorSpi::DlgLaserMonitorSpi(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_LASER_SPI, pParent)
{

}

DlgLaserMonitorSpi::~DlgLaserMonitorSpi()
{
}

void DlgLaserMonitorSpi::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_STATIC_LAMP1, m_lamp1);
	 
}


BEGIN_MESSAGE_MAP(DlgLaserMonitorSpi, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_MONITOR, &DlgLaserMonitorSpi::OnBnClickedButtonMonitor)
END_MESSAGE_MAP()


// DlgLaserMonitorSpi ��Ϣ�������

BOOL DlgLaserMonitorSpi::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	m_lamp1.Off();
	 

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
void DlgLaserMonitorSpi::SetErrorStr(CString str)
{
	GetDlgItem(IDC_STATIC_LASER)->SetWindowText(str);
}
void DlgLaserMonitorSpi::UpdateState(BOOL& bOK)
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
		CString strError;
		BOOL bAlarm = E3_MarkerIsLaserAlarm(pMarker, strError); 
		if (!bAlarm)
		{
			m_lamp1.Off();
			SetErrorStr(QGlobal::gf_Str(_T("LASERREADY"), _T("Laser ready!")));
			bOK = TRUE;
		}
		else
		{ 
			m_lamp1.Red();
			SetErrorStr(strError);
		}

		E3_MarkerHandleLaserFaultOutput(pMarker, bAlarm);
	}
	pDlg->UnLockMarker();
}
#include "..\MainFrm.h"
#include "QDlg.h"
void DlgLaserMonitorSpi::OnBnClickedButtonMonitor()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
#ifdef ENABLE_MARK
	CMainFrame* pMainWnd = (CMainFrame*)gf_GetMainFrame();
	PMarker pMarker = pMainWnd->m_wndMark.GetMarker();
	if (pMarker != NULL)
	{		
		gf_DlgShowIoState(E3_MarkerGetLaserState(pMarker));
	}
#endif
}
