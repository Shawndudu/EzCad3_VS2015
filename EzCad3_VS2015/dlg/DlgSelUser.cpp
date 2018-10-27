// DlgSelUser.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "..\EzCad3_VS2015.h"
#include "DlgSelUser.h"
#include "afxdialogex.h"
#include "QUser.h"
#include "qglobal.h"
// CDlgSelUser �Ի���

IMPLEMENT_DYNAMIC(CDlgSelUser, CDialogEx)

CDlgSelUser::CDlgSelUser(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDlgSelUser::IDD, pParent)
{

}

CDlgSelUser::~CDlgSelUser()
{
}

void CDlgSelUser::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgArrayRect)
	DDX_Control(pDX, IDC_COMBO_USER,  m_comboUser); 
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgSelUser, CDialogEx)
	ON_BN_CLICKED(IDOK, &CDlgSelUser::OnBnClickedOk)
END_MESSAGE_MAP()


// CDlgSelUser ��Ϣ�������


void CDlgSelUser::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	QUserMgr* pMgr = gf_GetUserMgr();
	if(pMgr!=NULL)
	{ 
		CString str; 
		GetDlgItem(IDC_EDIT_PSW)->GetWindowText(str);


		QUser* pUser = pMgr->GetUser(m_comboUser.GetCurSel( ));
		if(pUser->m_strPsw != str)
		{  
			AfxMessageBox(QGlobal::gf_Str(_T("PSWINCORRECT"),_T("The password is incorrect!")));
			static int pppp=3;
			pppp--;
			if(pppp==0)
			{
				CDialogEx::OnCancel();			
			}
			return; 
		}	 

		pMgr->SetCurUser(pUser);
		CDialogEx::OnOK();
	} 
}


BOOL CDlgSelUser::OnInitDialog()
{
	CDialogEx::OnInitDialog();

		GetDlgItem(IDOK)->SetWindowText(QGlobal::gf_Str(_T("IDOK"),_T("&OK")));
	GetDlgItem(IDCANCEL)->SetWindowText(QGlobal::gf_Str(_T("IDCANCEL"),_T("&Cancel")));
	
	SetWindowText(QGlobal::gf_Str(_T("SELUSER"),_T("Select User")));
	GetDlgItem(IDC_STATIC_USER)->SetWindowText(QGlobal::gf_Str(_T("USER"),_T("User")));
	GetDlgItem(IDC_STATIC_PSW)->SetWindowText(QGlobal::gf_Str(_T("PASSWORD"),_T("Password")));


	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	QUserMgr* pMgr = gf_GetUserMgr();
	if(pMgr!=NULL)
	{
		CString str;
		for(int i=0;i<pMgr->Count();i++)
		{ 
			str = pMgr->GetUser(i)->m_strName;
			m_comboUser.AddString(str);
		}
		m_comboUser.SetCurSel(0);
	}	 
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}
