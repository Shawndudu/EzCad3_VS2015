#if !defined(AFX_DLGOPENFILE_H__A8AABEB6_30CB_4171_B0CC_613797F5EF27__INCLUDED_)
#define AFX_DLGOPENFILE_H__A8AABEB6_30CB_4171_B0CC_613797F5EF27__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgOpenFile.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgOpenFile dialog
#include  "qdib.h"
#define     WM_MY_DRAWPREVIEW  (WM_USER + 1)

class CDlgOpenFile : public CFileDialog
{
	DECLARE_DYNAMIC(CDlgOpenFile)
public:
	CDIB*    m_pDibPreview;
//	CBitmap* m_pPreview_Bitmap; //Ԥ��ͼƬ
	CDocument* m_pCurDocument;

	BOOL     m_bShowPreview;    //��ʾԤ��ͼƬ
	BOOL     m_bSavePreview;    //����Ԥ��ͼƬ	
	BOOL     m_bSavePick;       //��������ѡ�����	
	BOOL     m_bBindID;

public:
	TCHAR m_strFilter[256];

	CString m_strSize;    //�ļ���С
	CString m_strVersion; //�ļ��汾
	CString m_strAuthor;  //�ļ�����
    CString m_strDate;    //�ļ�����
    CString m_strComment; //�ļ�ע��	 

	WCHAR strFilter[1000];
public:
	CDlgOpenFile(BOOL bOpenFileDialog = TRUE, // TRUE for FileOpen, FALSE for FileSaveAs
		LPCTSTR lpszDefExt = NULL,
		LPCTSTR lpszFileName = NULL,
		DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,
		LPCTSTR lpszFilter = NULL,
		CWnd* pParentWnd = NULL);

	~CDlgOpenFile();	
	
	void DrawPreview(CWnd* pWnd,CBitmap* pBitmap);	
	void DrawPreview(CWnd* pWnd,CDIB* pDib);

	
protected:
	virtual void DoDataExchange(CDataExchange* pDX);

	//{{AFX_MSG(CDlgOpenFile)	
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	afx_msg void OnRadSaveAll();
	afx_msg void OnRadSavePick();
	//}}AFX_MSG
	afx_msg void OnShowPreview();
	afx_msg void OnDrawPreview();
	DECLARE_MESSAGE_MAP()

	virtual BOOL OnNotify(WPARAM wParam, LPARAM lParam, LRESULT* pResult);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGOPENFILE_H__A8AABEB6_30CB_4171_B0CC_613797F5EF27__INCLUDED_)
