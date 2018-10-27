
// EzCad3_VS2015.cpp : ����Ӧ�ó��������Ϊ��
//

#include "stdafx.h"
#include "afxwinappex.h"
#include "afxdialogex.h"
#include "EzCad3_VS2015.h"
#include "MainFrm.h"
#include "version.h"

#include "Ezcad3Doc.h"
#include "Ezcad3View.h"  
#include "QGlobal.h"
#include "SysParam.h" 
#include "DlgLicense.h" 
#include "SysParam.h"
#include "DlgSelUser.h"
#include "MyDocManager.h"
#include "QPngButton.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#define MAXPATHLEN 1000
// CEzCad3_VS2015App

BEGIN_MESSAGE_MAP(CEzCad3_VS2015App, CWinAppEx)
	ON_COMMAND(ID_APP_ABOUT, &CEzCad3_VS2015App::OnAppAbout)
	// �����ļ��ı�׼�ĵ�����
	ON_COMMAND(ID_FILE_NEW, &CWinAppEx::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, &CEzCad3_VS2015App::OnFileOpen)
	// ��׼��ӡ��������
	ON_COMMAND(ID_FILE_PRINT_SETUP, &CWinAppEx::OnFilePrintSetup)
END_MESSAGE_MAP()


// CEzCad3_VS2015App ����

CEzCad3_VS2015App::CEzCad3_VS2015App()
{
	m_bHiColorIcons = TRUE; 

	// ֧����������������
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS;
#ifdef _MANAGED
	// ���Ӧ�ó��������ù�����������ʱ֧��(/clr)�����ģ���: 
	//     1) �����д˸������ã�������������������֧�ֲ�������������
	//     2) ��������Ŀ�У������밴������˳���� System.Windows.Forms ������á�
	System::Windows::Forms::Application::SetUnhandledExceptionMode(System::Windows::Forms::UnhandledExceptionMode::ThrowException);
#endif

	// TODO: ������Ӧ�ó��� ID �ַ����滻ΪΨһ�� ID �ַ�����������ַ�����ʽ
	//Ϊ CompanyName.ProductName.SubProduct.VersionInformation
	SetAppID(_T("EzCad3_VS2015.AppID.NoVersion"));

	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


void CEzCad3_VS2015App::OnFileOpen()
{
	CWinAppEx::OnFileOpen();
}
// Ψһ��һ�� CEzCad3_VS2015App ����

CEzCad3_VS2015App theApp;

CQSingleDocTemplate::CQSingleDocTemplate(UINT nIDResource, CRuntimeClass* pDocClass,
	CRuntimeClass* pFrameClass, CRuntimeClass* pViewClass):CSingleDocTemplate( nIDResource,  pDocClass,pFrameClass,  pViewClass)
{
}



void CQSingleDocTemplate::ChangeDocStr()
{
	if (!m_strDocStrings.IsEmpty())
	{
		CString strSoftName = QGlobal::gf_Str(_T("SOFTNAME"), _T("EzCad3"));
		CString strSoftSuffix = QGlobal::gf_Str(_T("FILESUFFIX"), _T("ez3"));

		if (!strSoftName.IsEmpty())
		{
		 	m_strDocStrings.Replace(_T("EzCad3"), strSoftName);
		}
		if (!strSoftSuffix.IsEmpty())
		{
		 	m_strDocStrings.Replace(_T("ez3"), strSoftSuffix);
		}
	}
}

HANDLE st_hMutexOne = NULL;
// CEzCad3_VS2015App ��ʼ��
BOOL CEzCad3_VS2015App::InitInstance()
{ 
	st_hMutexOne = CreateMutex(NULL, TRUE, _T("EzCadV3Instance"));
	BOOL bFound = FALSE;
	if (GetLastError() == ERROR_ALREADY_EXISTS)
		bFound = TRUE;
	if (st_hMutexOne != NULL)
	{
		ReleaseMutex(st_hMutexOne);
	}
	if (bFound == TRUE)
	{
		st_hMutexOne = NULL;

		//�õ���ǰ����ϵͳ�����԰汾
		WORD lang_id = ::GetSystemDefaultLangID();
		BYTE primary = PRIMARYLANGID(lang_id);
		BYTE sublang = SUBLANGID(lang_id);

		CString str = _T("Software is open!");

		if (primary == LANG_CHINESE)
		{
			if (sublang == SUBLANG_CHINESE_SIMPLIFIED)
			{
				str = _T("�Ѿ���һ��Ezcad3���ʵ��������!");
			}
		}

		AfxMessageBox(str);
		return FALSE;
	}


	// ���һ�������� Windows XP �ϵ�Ӧ�ó����嵥ָ��Ҫ
	// ʹ�� ComCtl32.dll �汾 6 ����߰汾�����ÿ��ӻ���ʽ��
	//����Ҫ InitCommonControlsEx()��  ���򣬽��޷��������ڡ�
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// ��������Ϊ��������Ҫ��Ӧ�ó�����ʹ�õ�
	// �����ؼ��ࡣ
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinAppEx::InitInstance();


	// ��ʼ�� OLE ��
	if (!AfxOleInit())
	{
		AfxMessageBox(IDP_OLE_INIT_FAILED);
		return FALSE;
	}

	AfxEnableControlContainer();

	EnableTaskbarInteraction(FALSE);

	// ʹ�� RichEdit �ؼ���Ҫ AfxInitRichEdit2()	
	// AfxInitRichEdit2();

	// ��׼��ʼ��
	// ���δʹ����Щ���ܲ�ϣ����С
	// ���տ�ִ���ļ��Ĵ�С����Ӧ�Ƴ�����
	// ����Ҫ���ض���ʼ������
	// �������ڴ洢���õ�ע�����
	// TODO: Ӧ�ʵ��޸ĸ��ַ�����
	// �����޸�Ϊ��˾����֯��
	SetRegistryKey(_T("BJJCZ"));
	 
	InititalQKernal();//��ʼ��QKernal

	m_pszAppName = _tcsdup(QGlobal::gf_Str(_T("SOFTNAME"), _T("EzCad3"))); // save non-localized name
 
	int nSoftVer = GetProfileInt(_T("Version"), _T("Soft"), 0);
	int nInterfaceVer = GetProfileInt(_T("Version"), _T("Interface"), 0);
	int nBuildVer = GetProfileInt(_T("Version"), _T("Build"), 0); 

    if (nInterfaceVer != INTERFACE_VERSION || nBuildVer != BUILD_VERSION )
	{//����汾���ˣ���Ҫ�������ã�ɾ���ɵ�ע���		
		CleanState();//ɾ���ɵ���Ϣ
	}

	LoadStdProfileSettings(4);  // ���ر�׼ INI �ļ�ѡ��(���� MRU)

	InitContextMenuManager();

	InitKeyboardManager();

	InitTooltipManager();
	CMFCToolTipInfo ttParams;
	ttParams.m_bVislManagerTheme = TRUE;
	theApp.GetTooltipManager()->SetTooltipParams(AFX_TOOLTIP_TYPE_ALL,RUNTIME_CLASS(CMFCToolTipCtrl), &ttParams);

	// ע��Ӧ�ó�����ĵ�ģ�塣  �ĵ�ģ��
	// �������ĵ�����ܴ��ں���ͼ֮�������
	//CSingleDocTemplate* pDocTemplate;
	//pDocTemplate = new CSingleDocTemplate(
	CQSingleDocTemplate * pDocTemplate;
	pDocTemplate = new CQSingleDocTemplate(
		IDR_MAINFRAME,
		RUNTIME_CLASS(CEzcad3Doc),
		RUNTIME_CLASS(CMainFrame),       // �� SDI ��ܴ���
#ifdef USE_EZCADVIEW2  
		RUNTIME_CLASS(CEzcad3View2));
#else
		RUNTIME_CLASS(CEzcad3View));
#endif
	if (!pDocTemplate)
		return FALSE;
	//���Լ���DocManager����Ĭ�ϵ�DocManager
	if (m_pDocManager == NULL)
	{
		m_pDocManager = new CMyDocManager();
	}

	pDocTemplate->ChangeDocStr();

	AddDocTemplate(pDocTemplate);


	// ������׼ shell ���DDE�����ļ�������������
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);


	QGlobal::Log(_T("Ezcad3_1"));
	if (!E3_IsLicenceOk())
	{		
		AfxMessageBox(QGlobal::gf_Str(_T("SOFTLICENCEISUNVALID"), _T("Software licence is invalid!")));
		return FALSE;
	}

	QGlobal::Log(_T("Ezcad3_2"));
	if (gf_GetSysParam() != NULL && gf_GetSysParam()->GetParamInt(INT_PARAM_ENUSERPSW))
	{//��Ҫѡ���û�
		CDlgSelUser dlgUser;
		if (dlgUser.DoModal() != IDOK)
		{
			return FALSE;
		}
	}
	QGlobal::Log(_T("Ezcad3_3"));
	
	// ��������������ָ�������  ���
	// �� /RegServer��/Register��/Unregserver �� /Unregister ����Ӧ�ó����򷵻� FALSE��
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;

	// Ψһ��һ�������ѳ�ʼ���������ʾ����������и���
	QGlobal::Log(_T("Ezcad3_4"));
	// Ψһ��һ�������ѳ�ʼ���������ʾ����������и���

	m_pMainWnd->ShowWindow(SW_MAXIMIZE);
	m_pMainWnd->UpdateWindow();
	gf_SetMainFrame((CFrameWnd*)m_pMainWnd);


	QGlobal::Log(_T("Ezcad3_5"));

	WriteProfileInt(_T("Version"), _T("Soft"), SOFT_VERSION);//����汾��Ϣ
	WriteProfileInt(_T("Version"), _T("Interface"), INTERFACE_VERSION);//����汾��Ϣ
	WriteProfileInt(_T("Version"), _T("Build"), BUILD_VERSION);//����汾��Ϣ
  

	if (E3_GetCmdMgr() != NULL)
	{
		E3_CmdMgrRunCmd(E3_GetCmdMgr(),_T("ZOOM"), SUBCMD_ZOOM_WORKSPACE, 0);
	}

	QGlobal::Log(_T("Ezcad3_6"));
	
	if (gf_GetMainFrame() != NULL)
	{
		((CMainFrame*)gf_GetMainFrame())->InitMenuText();
		((CMainFrame*)gf_GetMainFrame())->m_pDlgSplash->HideSplash();
		((CMainFrame*)gf_GetMainFrame())->m_barEntProp.m_wndEntBase.m_pMarker = ((CMainFrame*)gf_GetMainFrame())->m_wndMark.m_dlgMark.GetMarker();
	}
	QGlobal::Log(_T("Ezcad3_7"));

	if (!ShowAgreeLicence())
	{
		return FALSE;
	}

	QGlobal::Log(_T("Ezcad3_8"));

	SetEz3DocToReg();

	QGlobal::Log(_T("Ezcad3_9"));

	CString strRun = gf_GetSysParam()->GetParamString(SYS_STR_EXE_START_FILE);
	if (strRun.GetLength()>0)
	{ 
		char* pStr = QGlobal::gf_StrToCharDelBuf(strRun);
		WinExec(pStr, SW_SHOW);
		delete[] pStr;
	}
	return TRUE;
}

void CEzCad3_VS2015App::SetEz3DocToReg()
{
	TCHAR path[MAXPATHLEN];
	TCHAR drive[MAXPATHLEN];
	TCHAR dir[MAXPATHLEN];
	TCHAR fname[MAXPATHLEN];
	TCHAR ext[MAXPATHLEN];
	GetModuleFileName(m_hInstance, path, MAXPATHLEN);
	_wsplitpath_s(path, drive, dir, fname, ext);

	CString strParam;
	strParam .Format(_T("%s \"%%1\""), path);


	QGlobal::Log(_T("reg .ez3"));

	HKEY hKEY;//�����йص�hKEY,�ڲ�ѯ����ʱҪ�ر�
			  //����·�� data_Set��ص�hKEY
	LPCTSTR data_Set = _T(".ez3\\");
	//����ע���hKEY�򱣴�˺������򿪵ļ��ľ��
	long lret = ::RegCreateKey(HKEY_CLASSES_ROOT, data_Set, &hKEY);
	if (lret == ERROR_SUCCESS)
	{//�����hKEY,����ֹ�����ִ��
	 //��ѯ�йص�����	
		QGlobal::Log(_T("reg .ez3 Ok"));

		TCHAR name[255] = _T("EzCad3.Document");
		LPBYTE dataaddr = (LPBYTE)name;
		QGlobal::Log(_T("reg EzCad3.Document"));

		int nErr = ::RegSetValueEx(hKEY, _T(""), NULL, REG_SZ, dataaddr, 250);
		if (nErr != ERROR_SUCCESS)
		{ 
			QGlobal::Log(_T("reg EzCad3.Document fail"));
		  
		}
		::RegCloseKey(hKEY);//�رմ򿪵�hKEY
		QGlobal::Log(_T("reg EzCad3.Document Ok"));
							//��ѯ�йص�����		
		data_Set = _T("EzCad3.Document\\shell\\open\\command\\");
		lret = ::RegCreateKey(HKEY_CLASSES_ROOT, data_Set, &hKEY);
		if (lret == ERROR_SUCCESS)
		{//�����hKEY,����ֹ�����ִ�� 
			wcscpy_s(name, strParam);
			LPBYTE dataaddr = (LPBYTE)name; 
			if (::RegSetValueEx(hKEY, _T(""), NULL, REG_SZ, dataaddr, 250) != ERROR_SUCCESS)
			{
				QGlobal::Log(strParam + _T("fail")); 
			}
			::RegCloseKey(hKEY);//�رմ򿪵�hKEY
		}
	}
	else
	{
		QGlobal::Log(_T("reg .ez3 fail"));
	}
}


BOOL CEzCad3_VS2015App::ShowAgreeLicence()
{  
	int bHaveAgree = GetProfileInt(_T("License"), _T("Enable"), 0);
	
	if (!bHaveAgree)
	{//û��ͬ���
		CDlgLicense dlgLicense;
		dlgLicense.m_strLice = QGlobal::gf_LoadAllLineStr(QGlobal::gf_GetWorkPath() + _T("res\\license.txt"));
		if (dlgLicense.DoModal() == IDCANCEL)
		{//��ͬ�� 
			return FALSE;
		}
		else
		{//ͬ��
			WriteProfileInt(_T("License"), _T("Enable"),1);  
		}
	} 
	return TRUE;
}

int CEzCad3_VS2015App::ExitInstance()
{
	//TODO: �����������ӵĸ�����Դ
	AfxOleTerm(FALSE);
	if (gf_GetSysParam() != NULL)
	{
		CString strRun = gf_GetSysParam()->GetParamString(SYS_STR_EXE_ENDT_FILE);
		if (strRun.GetLength() > 0)
		{
			char* pStr = QGlobal::gf_StrToCharDelBuf(strRun);
			WinExec(pStr, SW_SHOW);
			delete[] pStr;
		} 
	}

	CloseQKernal();

	if (st_hMutexOne != NULL)
	{
		CloseHandle(st_hMutexOne);
		st_hMutexOne = NULL;
	}
	
	return CWinAppEx::ExitInstance();
}



// CEzcad3App ��Ϣ�������
void CEzCad3_VS2015App::InititalQKernal()
{ 
	TCHAR path[MAXPATHLEN];
	TCHAR drive[MAXPATHLEN];
	TCHAR dir[MAXPATHLEN];
	TCHAR fname[MAXPATHLEN];
	TCHAR ext[MAXPATHLEN];
	GetModuleFileName(m_hInstance, path, MAXPATHLEN);
	_wsplitpath_s(path, drive, dir, fname, ext);
	CString szPath;
	szPath = drive;
	szPath += dir;
	 
	E3_InitialKernal(szPath);//��ʼ���ں�
	
}


void   CEzCad3_VS2015App::CloseQKernal()
{ 
	E3_CloseKernal(); 
}

// CEzCad3_VS2015App ��Ϣ�������


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif
	CQPngButton m_buttonIssue;
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	afx_msg void OnNMClickSyslink1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedIssue();
	
	afx_msg void OnClose();
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_BUTTON_ISSUE, m_buttonIssue);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_NOTIFY(NM_CLICK, IDC_SYSLINK1, &CAboutDlg::OnNMClickSyslink1)
	ON_WM_MOUSEMOVE()
	ON_BN_CLICKED(IDOK, &CAboutDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON_ISSUE, OnBnClickedIssue)
	ON_WM_CLOSE()
END_MESSAGE_MAP()


BOOL CAboutDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	SetWindowText(QGlobal::gf_Str(_T("ABOUT"), _T("About")) + _T(" ") + QGlobal::gf_Str(_T("SOFTNAME"), _T("EZCAD")));
	GetDlgItem(IDC_STATIC_COMPANY)->SetWindowText(QGlobal::gf_Str(_T("COMPANY"), _T("BJJCZ")));

	m_buttonIssue.LoadImage(QGlobal::gf_GetResourcePath() + _T("Issue.png"));


	CString strVer = QGlobal::gf_Str(_T("SOFTNAME"), _T("EZCAD")) + _T(" ") + QGlobal::gf_Str(_T("SOFTVERSION"), _T("3.0.0"));
	CString strBuild;
	strBuild.Format(_T(" Build:%d"), BUILD_VERSION);
	
	GetDlgItem(IDC_SOFTVERSION)->SetWindowText(strVer+ strBuild);


	GetDlgItem(IDC_SYSLINK1)->SetWindowText(_T("<a>") + QGlobal::gf_Str(_T("WEBSIBE"), _T("")) + _T("</a>"));
	GetDlgItem(IDC_ABOUT_LAW)->SetWindowText(QGlobal::gf_Str(_T("ABOUT_LAW"), _T("Warning: this computer program is protected by copyright law and international treaties. Unauthorized reproduction or distribution of this program, or any portion of it, may result in severe civil and criminal penalties, and will be prosecuted to the maximum extent possible under the law.")));
	GetDlgItem(IDOK)->SetWindowText(QGlobal::gf_Str(_T("IDOK"), _T("&Ok")));

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void CAboutDlg::OnNMClickSyslink1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	*pResult = 0;

	CString strURL = QGlobal::gf_Str(_T("WEBSIBE"), _T(""));
	if (!strURL.IsEmpty())
	{
		ShellExecute(m_hWnd, NULL, strURL, NULL, NULL, SW_SHOW);
	}
}

// �������жԻ����Ӧ�ó�������
void CEzCad3_VS2015App::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

// CEzCad3_VS2015App �Զ������/���淽��

void CEzCad3_VS2015App::PreLoadState()
{
	BOOL bNameValid;
	CString strName;
	bNameValid = strName.LoadString(IDS_EDIT_MENU);
	ASSERT(bNameValid);
	GetContextMenuManager()->AddMenu(strName, IDR_POPUP_EDIT);
	bNameValid = strName.LoadString(IDS_EXPLORER);
	ASSERT(bNameValid);
	GetContextMenuManager()->AddMenu(strName, IDR_POPUP_EXPLORER);
}

void CEzCad3_VS2015App::LoadCustomState()
{
}

void CEzCad3_VS2015App::SaveCustomState()
{
}

// CEzCad3_VS2015App ��Ϣ�������





void CAboutDlg::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CDialogEx::OnMouseMove(nFlags, point);
}


void CAboutDlg::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	

	CDialogEx::OnOK();
}
#include "DialogIssue.h"
void CAboutDlg::OnBnClickedIssue()
{ 
	PEntMgr pEM = E3_GetEntMgrFromCmdMgr(E3_GetCmdMgr());
	if (E3_EntMgrGetModifyFlag(pEM))
	{
		AfxMessageBox(QGlobal::gf_Str(_T("CURFILEMODIFYPLSSAVEIT"), _T("The current file has been modified, please save it first!")));
		OnBnClickedOk();
		return;
	}

	CDialogIssue dlg;
	
	if (gf_GetMainFrame() != NULL)
	{
		PMarker pMarker = ((CMainFrame*)gf_GetMainFrame())->m_wndMark.m_dlgMark.GetMarker();
		if (pMarker != NULL)
		{
			dlg.m_nMarkerId = E3_MarkerGetSN(pMarker);
		}
	}
	dlg.DoModal();

	OnBnClickedOk();
}

void CAboutDlg::OnClose()
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	CDialogEx::OnClose();
	CDialogEx::OnOK();
}
