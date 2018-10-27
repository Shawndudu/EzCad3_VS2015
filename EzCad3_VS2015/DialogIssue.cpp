// D:\��Ŀ\EzCad3_VS2015\EzCad3_VS2015\DialogIssue.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "EzCad3_VS2015.h"
#include "DialogIssue.h"
#include "afxdialogex.h"
#include "qglobal.h"

// CDialogIssue �Ի���

IMPLEMENT_DYNAMIC(CDialogIssue, CDialogEx)

CDialogIssue::CDialogIssue(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_ISSUE, pParent)
{
	m_nMarkerId = 0;
}

CDialogIssue::~CDialogIssue()
{
}

void CDialogIssue::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDialogIssue, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_SAVETOFILE, &CDialogIssue::OnBnClickedButtonSavetofile)
	ON_BN_CLICKED(IDCANCEL, &CDialogIssue::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON_EMAIL, &CDialogIssue::OnBnClickedButtonEmail)
END_MESSAGE_MAP()

#include "mapi.h"   
// CDialogIssue ��Ϣ�������
void SendMail(CString strEmailAddress,CString strSubject,CString strMsg,CString strSender,CString strFile )
{ 
	//װ��MAPI32.DLL��̬��
	HMODULE hMod = LoadLibrary(_T("MAPI32.DLL"));
	if (hMod == NULL)
	{
		AfxMessageBox(AFX_IDP_FAILED_MAPI_LOAD);
		return;
	}

	//��ȡ�����ʼ��ĺ�����ַ
	ULONG(PASCAL *lpfnSendMail)(ULONG, ULONG, MapiMessage*, FLAGS, ULONG);
	(FARPROC&)lpfnSendMail = GetProcAddress(hMod, "MAPISendMail");

	if (lpfnSendMail == NULL)
	{
		AfxMessageBox(AFX_IDP_INVALID_MAPI_DLL);
		return;
	}


	char* pstrEmailAddress = QGlobal::gf_StrToCharDelBuf(strEmailAddress);
	char* pstrSubject = QGlobal::gf_StrToCharDelBuf(strSubject);
	char* pstrMsg = QGlobal::gf_StrToCharDelBuf(strMsg);
	char* pstrSender = QGlobal::gf_StrToCharDelBuf(strSender);
	char* pstrFile = QGlobal::gf_StrToCharDelBuf(strFile);


	int nFileCount =1;   //�ж��ٸ�������Ҫ����

										  //�����ڴ汣�渽����Ϣ ����ʹ�þ�̬���飬��Ϊ��֪��Ҫ���͸����ĸ���
	MapiFileDesc* pFileDesc = (MapiFileDesc*)malloc(sizeof(MapiFileDesc) * nFileCount);
	memset(pFileDesc, 0, sizeof(MapiFileDesc) * nFileCount); 

	//�����ڴ汣�渽���ļ�·��
	TCHAR* pTchPath = (TCHAR*)malloc(MAX_PATH * nFileCount);

	CString szText;
	for (int i = 0; i < nFileCount; i++)
	{
		TCHAR* p = pTchPath + MAX_PATH * i;  
		(pFileDesc + i)->nPosition = (ULONG)-1;
		(pFileDesc + i)->lpszPathName = pstrFile;
		(pFileDesc + i)->lpszFileName = pstrFile;
	}

	//�ռ��˽ṹ��Ϣ
	MapiRecipDesc recip;
	memset(&recip, 0, sizeof(MapiRecipDesc));
	recip.lpszAddress = pstrEmailAddress;
	recip.ulRecipClass = MAPI_TO;
	recip.lpszName = pstrSender;

	//�ʼ��ṹ��Ϣ
	MapiMessage message;
	memset(&message, 0, sizeof(message));
	message.nFileCount = nFileCount;                         //�ļ�����
	message.lpFiles = pFileDesc;                          //�ļ���Ϣ
	message.nRecipCount = 1;                                  //�ռ��˸���
	message.lpRecips = &recip;                             //�ռ���
	message.lpszSubject = pstrSubject;           //����
	message.lpszNoteText = pstrMsg;              //��������

															   //���汾���򴰿�ָ�룬��Ϊ�����ʼ���Ҫ���ر�����Ĵ���
	CWnd* pParentWnd = CWnd::GetSafeOwner(NULL, NULL);

	//�����ʼ�
	int nError = lpfnSendMail(0, 0, &message, MAPI_LOGON_UI | MAPI_DIALOG, 0); 
	if (nError != SUCCESS_SUCCESS && nError != MAPI_USER_ABORT
		&& nError != MAPI_E_LOGIN_FAILURE)
	{
		AfxMessageBox(AFX_IDP_FAILED_MAPI_SEND);
	}

	//���س���
	pParentWnd->SetActiveWindow();

	//��Ҫ�����ͷŷ�����ڴ�
	delete[] pstrEmailAddress  ;
	delete[] pstrSubject ;
	delete[] pstrMsg  ;
	delete[] pstrSender  ;
	delete[] pstrFile ;


	free(pFileDesc);
	free(pTchPath);
	FreeLibrary(hMod);
}

void CDialogIssue::OnBnClickedButtonSavetofile()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CString szExt;
	CString szFilter;
	szExt = _T("issue");
	szFilter = _T("Issue files(*.issue)|*.issue||");
	CFileDialog dlg(FALSE, szExt,_T("Problem.issue"), OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter);
	if (dlg.DoModal() == IDOK)
	{
		CString strFileName = dlg.GetPathName();
		CString strEzdFile = QGlobal::gf_GetCurFileName();
		CString strDec;
		GetDlgItem(IDC_EDIT_DESC)->GetWindowText(strDec);
		E3_PackageIssueFile(0, strFileName, strEzdFile, strDec, m_nMarkerId);
	}	
	OnBnClickedCancel();
}


BOOL CDialogIssue::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
//	GetDlgItem(IDOK)->SetWindowText(QGlobal::gf_Str(_T("IDOK"), _T("&OK")));
	GetDlgItem(IDCANCEL)->SetWindowText(QGlobal::gf_Str(_T("IDCANCEL"), _T("&Cancel")));

	SetWindowText(QGlobal::gf_Str(_T("ISSUE"), _T("Issue")));
	GetDlgItem(IDC_STATIC_DESCRIPTION)->SetWindowText(QGlobal::gf_Str(_T("DESCRIPTION"), _T("Description")));
	GetDlgItem(IDC_BUTTON_SAVETOFILE)->SetWindowText(QGlobal::gf_Str(_T("SAVETOFILE"), _T("Save to file")));

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void CDialogIssue::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}


void CDialogIssue::OnBnClickedButtonEmail()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
 	CString strFileName = QGlobal::gf_GetWorkPath() + _T("Temp.issue");
	CString strEzdFile = QGlobal::gf_GetCurFileName();
	CString strDec;
	GetDlgItem(IDC_EDIT_DESC)->GetWindowText(strDec);
	E3_PackageIssueFile(0, strFileName, strEzdFile, strDec, m_nMarkerId);
	SendMail(_T("6397423@qq.com"), _T("Problem"), _T("This is a test"), _T("q"), strEzdFile);
}
