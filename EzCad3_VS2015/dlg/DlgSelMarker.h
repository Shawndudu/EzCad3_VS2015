#pragma once


// CDlgSelMarker �Ի���

class CDlgSelMarker : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgSelMarker)

public:
	int m_nSelIndex;
	PMarker m_markerBuf[8];

	CListBox m_listboxMarker;
	CDlgSelMarker(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgSelMarker();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_SELMARKER };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLbnSelchangeListMarker();
	afx_msg void OnLbnDblclkListMarker();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
};
