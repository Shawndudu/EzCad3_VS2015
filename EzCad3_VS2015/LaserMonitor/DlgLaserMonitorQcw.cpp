// D:\��Ŀ\EzCad3_VS2015\EzCad3_VS2015\LaserMonitor\DlgLaserMonitorQcw.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "..\EzCad3_VS2015.h"
#include "DlgLaserMonitorQcw.h"
#include "afxdialogex.h"
#include "..\Mark\MarkStd\DlgMark.h"
#include "QGlobal.h"
// DlgLaserMonitorQcw �Ի���

IMPLEMENT_DYNAMIC(DlgLaserMonitorQcw, CDialogEx)

DlgLaserMonitorQcw::DlgLaserMonitorQcw(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_LASER_SPI, pParent)
{

}

DlgLaserMonitorQcw::~DlgLaserMonitorQcw()
{
}

void DlgLaserMonitorQcw::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_STATIC_LAMP1, m_lamp1);
	 
}


BEGIN_MESSAGE_MAP(DlgLaserMonitorQcw, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_RESETERR, &DlgLaserMonitorQcw::OnBnClickedButtonReset)
END_MESSAGE_MAP()


// DlgLaserMonitorQcw ��Ϣ�������

BOOL DlgLaserMonitorQcw::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	m_lamp1.Off();
	GetDlgItem(IDC_BUTTON_RESETERR)->SetWindowText(QGlobal::gf_Str(_T("RESET"), _T("Reset")));
	
	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
void DlgLaserMonitorQcw::SetErrorStr(CString str)
{
	GetDlgItem(IDC_STATIC_LASER)->SetWindowText(str);
}

static int st_nTempTick = 30;

void DlgLaserMonitorQcw::UpdateState(BOOL& bOK)
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
		if (bAlarm)
		{
			m_lamp1.Red();
			SetErrorStr(strError);
		}
		else
		{
			SetErrorStr(QGlobal::gf_Str(_T("LASERREADY"), _T("Laser ready!")));
			m_lamp1.Off();
			bOK = TRUE;
		}
		E3_MarkerHandleLaserFaultOutput(pMarker, bAlarm);
		if (pMarker != NULL)
		{
			st_nTempTick++;
			if (st_nTempTick > 30)
			{
				st_nTempTick = 0;

				double dTemp = E3_MarkerGetLaserTemp(pMarker);
				CString str;
				str.Format(_T("%s%.1f��"), QGlobal::gf_Str(_T("TEMPERATURE"), _T("Temperature")), dTemp);
				GetDlgItem(IDC_STATIC_TEMP)->SetWindowText(str);
			}
		}
	}
	pDlg->UnLockMarker();
}

#include "..\MainFrm.h" 
void DlgLaserMonitorQcw::OnBnClickedButtonReset()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
#ifdef ENABLE_MARK
	CMainFrame* pMainWnd = (CMainFrame*)gf_GetMainFrame();
	PMarker pMarker = pMainWnd->m_wndMark.GetMarker();
	if (pMarker != NULL)
	{
		E3_MarkerResetLaserError(pMarker);
	}
#endif
}
