/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CQTabView.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#pragma once


#define WM_USER_DBCLICK_TAB  (WM_USER+100)  //˫��tab

class CQMFCTabCtrl:public CMFCTabCtrl
{
public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
};

// CQTabView ��ͼ
class CQTabView : public CView
{
	DECLARE_DYNCREATE(CQTabView)

protected:
	CQTabView();           // ��̬������ʹ�õ��ܱ����Ĺ��캯��
	virtual ~CQTabView();
	
protected:
	CQMFCTabCtrl	m_wndTabs;
	BOOL			m_bIsReady;
	int				m_nFirstActiveTab;

// Operations
public:
	CMFCTabCtrl& GetTabControl ()
	{
		return m_wndTabs;
	}

	int AddView (CRuntimeClass* pViewClass, const CString& strViewLabel,int iIndex = -1, CCreateContext* pContext = NULL);
	int FindTab (HWND hWndView) const;

	BOOL RemoveView (int iTabNum);
	BOOL SetActiveView (int iTabNum);
	CView* GetActiveView () const;           // active view or NULL
	
	int GetViewCount();
	CView* GetView(int iTabNum);
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBCGPTabView)
	public:
	virtual void OnInitialUpdate();
	protected:
	virtual void OnDraw(CDC* pDC);      // overridden to draw this view
	//}}AFX_VIRTUAL

	virtual void OnActivateView (CView* /*pView*/) {}
	virtual BOOL IsScrollBar () const
	{
		return FALSE;
	}


#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	// Generated message map functions
protected:
	//{{AFX_MSG(CBCGPTabView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg int OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message);

	//}}AFX_MSG
	afx_msg LRESULT OnChangeActiveTab(WPARAM,LPARAM);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);	
};
