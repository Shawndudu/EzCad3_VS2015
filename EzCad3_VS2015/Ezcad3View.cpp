
// Ezcad3View.cpp : CEzcad3View ���ʵ��
//

#include "stdafx.h"
#include "EzCad3_VS2015.h"

#include "Ezcad3Doc.h"
#include "Ezcad3View.h"
#include "QEntLayerView.h"
#include "QGlobal.h"
#include "usermessdef.h"
 #include "DlgLayerParam.h"
 
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CEzcad3View* st_pCurEzcad3View=NULL;
CEzcad3View* gf_GetCurEzcad3View()
{
	return st_pCurEzcad3View;
}

// CEzcad3View

IMPLEMENT_DYNCREATE(CEzcad3View, CQTabView)

BEGIN_MESSAGE_MAP(CEzcad3View, CQTabView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CEzcad3View::OnFilePrintPreview)
	ON_WM_CREATE()	
	ON_MESSAGE(WM_USER_CHANGEENTITY ,OnUserChangeEntity)	
	ON_MESSAGE(WM_USER_CHANGECURLAYER ,OnUserChangeCurLayer)
	ON_MESSAGE(WM_USER_DBCLICK_TAB ,OnUserDBClickTab)	
	ON_REGISTERED_MESSAGE(AFX_WM_ON_MOVE_TAB, OnMoveTab)
	ON_REGISTERED_MESSAGE(AFX_WM_CHANGE_ACTIVE_TAB, OnChangeActiveTab)
	ON_REGISTERED_MESSAGE(AFX_WM_CHANGING_ACTIVE_TAB, OnChangingActiveTab)
	 
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// CEzcad3View ����/����

CEzcad3View::CEzcad3View()
{
	// TODO: �ڴ˴���ӹ������

}

CEzcad3View::~CEzcad3View()
{
}

BOOL CEzcad3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CQTabView::PreCreateWindow(cs);
}

// CEzcad3View ����

void CEzcad3View::OnDraw(CDC* /*pDC*/)
{
	CEzcad3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CEzcad3View ��ӡ


void CEzcad3View::OnFilePrintPreview()
{
	AFXPrintPreview(this);
}

BOOL CEzcad3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CEzcad3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CEzcad3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}

void CEzcad3View::OnRButtonUp(UINT nFlags, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CEzcad3View::OnContextMenu(CWnd* pWnd, CPoint point)
{
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
}


// CEzcad3View ���

#ifdef _DEBUG
void CEzcad3View::AssertValid() const
{
	CQTabView::AssertValid();
}

void CEzcad3View::Dump(CDumpContext& dc) const
{
	CQTabView::Dump(dc);
}

CEzcad3Doc* CEzcad3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEzcad3Doc)));
	return (CEzcad3Doc*)m_pDocument;
}
#endif //_DEBUG


// CEzcad3View ��Ϣ�������
int CEzcad3View::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CQTabView::OnCreate(lpCreateStruct) == -1)
		return -1;

	st_pCurEzcad3View = this;

//	QGlobal::gf_SetActiveView(this);

	//m_wndTabs.EnableAutoColor(TRUE);
	//m_wndTabs.ModifyTabStyle(CBCGPTabWnd::STYLE_3D_ONENOTE);

	// TODO:  �ڴ������ר�õĴ�������
	if(E3_GetCmdMgr()!=NULL)
	{
		E3_CmdMgrAddEntityWnd(E3_GetCmdMgr(), this );//���������������ǰ������Ҫ����ϵͳ��Ϣ
	}

	OnUserChangeEntity(0,0);
	return 0;
}
LRESULT CEzcad3View::OnUserDBClickTab(WPARAM wParam, LPARAM lParam)
{
	PEntMgr pEM = E3_GetEntMgrFromCmdMgr(E3_GetCmdMgr()); 
 
	int nTab = (int)wParam;
	if(nTab>=0 && nTab<m_wndTabs.GetTabsNum() && pEM != NULL)
	{
		CQEntLayerView* pOldView = (CQEntLayerView*)m_wndTabs.GetTabWnd(nTab);
		ASSERT(pOldView->m_pEntLayer!=NULL);
		if(pOldView->m_pEntLayer!=NULL)
		{
			CDlgLayerParam dlg(this);
			dlg.m_nCount = E3_GetEntMarkCnt(pOldView->m_pEntLayer);
			dlg.m_strName = E3_GetEntName(pOldView->m_pEntLayer);
			E3_GetEntIoSet(pOldView->m_pEntLayer, dlg.m_wIoLow, dlg.m_wIoHigh);

			E3_GetEntLayerIoSet(pOldView->m_pEntLayer,dlg.m_wStartOutputIoLow, dlg.m_wStartOutputIoHigh, dlg.m_wFinishOutputIoLow, dlg.m_wFinishOutputIoHigh,dlg.m_nStartDelayMs,dlg.m_nEndDelayMs, dlg.m_bWaitForInput);
			 
			if (dlg.DoModal() == IDOK)
			{
				PEntity pLayer = E3_GetEntChildHead(pEM);
				while (pLayer != NULL)
				{
					if (pLayer != pOldView->m_pEntLayer && E3_GetEntName(pLayer) == dlg.m_strName)
					{
						AfxMessageBox(QGlobal::gf_Str(_T(" LAYSERNAMESAME"), _T("The Layer name is the same as other!")));
						return 0;
					}

					pLayer = E3_GetEntNext(pLayer);
				} 

				E3_EntMgrBeginUndo(pEM, QGlobal::gf_Str(_T("MODIFY"), _T("Modify")));
				E3_EntMgrUDModify(pEM, pOldView->m_pEntLayer);

				E3_SetEntIoSet(pOldView->m_pEntLayer, dlg.m_wIoLow, dlg.m_wIoHigh);
				E3_SetEntLayerIoSet(pOldView->m_pEntLayer, dlg.m_wStartOutputIoLow, dlg.m_wStartOutputIoHigh, dlg.m_wFinishOutputIoLow, dlg.m_wFinishOutputIoHigh, dlg.m_nStartDelayMs, dlg.m_nEndDelayMs,dlg.m_bWaitForInput);

				E3_SetEntName(pOldView->m_pEntLayer,dlg.m_strName);
				E3_SetEntMarkCnt(pOldView->m_pEntLayer, dlg.m_nCount);
				E3_EntMgrEndUndo(pEM);
			}
		}
	}	 
	return 0;
}

LRESULT CEzcad3View::OnUserChangeCurLayer(WPARAM wParam, LPARAM lParam)
{
//	TRACE0("CEzcad3View::OnUserChangeCurLayer\n");
	PEntMgr pEM = E3_GetEntMgrFromCmdMgr(E3_GetCmdMgr());
	if(pEM==NULL)
	{
		return 0;
	} 

	PEntity pLayer = E3_EntMgrGetCurLayer(pEM);
	if(pLayer!=NULL)
	{
		for(int i=0;i<m_wndTabs.GetTabsNum();i++)
		{
			CQEntLayerView* pOldView = (CQEntLayerView*)m_wndTabs.GetTabWnd(i);
			if(pOldView->m_pEntLayer == pLayer)
			{
				SetActiveView(i); 
				return 0;
			}
		}		
	}
	return 0;
}

//�������ݿ�ɾ��������Ϣ�������б���ʾ
LRESULT CEzcad3View::OnUserChangeEntity(WPARAM wParam, LPARAM lParam)
{
	PEntMgr pEM = E3_GetEntMgrFromCmdMgr(E3_GetCmdMgr());
	if (pEM == NULL)
	{
		return 0;
	}

	CQEntLayerView* pSaveView = (CQEntLayerView*)GetActiveView();
	PEntity pSaveActiveEnt = NULL;
	if(pSaveView!=NULL)
	{
		pSaveActiveEnt = pSaveView->GetLayer();
	}

	if(m_wndTabs.GetTabsNum()< E3_GetEntChildCnt(pEM))
	{
		while(m_wndTabs.GetTabsNum()< E3_GetEntChildCnt(pEM))
		{			
			AddView (RUNTIME_CLASS(CQEntLayerView), _T(""));
		}
	}
	else if(m_wndTabs.GetTabsNum()>E3_GetEntChildCnt(pEM))
	{
		while(m_wndTabs.GetTabsNum()>E3_GetEntChildCnt(pEM))
		{
			CQEntLayerView* pOldView = (CQEntLayerView*)m_wndTabs.GetTabWnd(m_wndTabs.GetTabsNum()-1);

			RemoveView(m_wndTabs.GetTabsNum()-1);

			if(pOldView!=NULL)
			{
				pOldView->SetLayer(NULL);
				pOldView->DestroyWindow();
			}
		}
	}

	CString strLable;
	int nTab=0;
	int nSelTab=0;
	PEntity pEnt = E3_GetEntChildHead(pEM); 
	while(pEnt!=NULL)
	{
		m_wndTabs.GetTabLabel(nTab,strLable);
		if(E3_GetEntName(pEnt)!=strLable)
		{
			m_wndTabs.SetTabLabel(nTab, E3_GetEntName(pEnt));
		}

		CQEntLayerView* pLayerView = (CQEntLayerView*)m_wndTabs.GetTabWnd(nTab);
		if(pLayerView->GetLayer()!=pEnt)
		{
			pLayerView->SetLayer(pEnt);
		}

		if(pSaveActiveEnt==pEnt)
		{
			nSelTab = nTab;
		}

		nTab++;
		pEnt = E3_GetEntNext( pEnt );
	}
	
	if (m_wndTabs.GetTabsNum() > 0)
	{
		SetActiveView(nSelTab);
		CQEntLayerView* pLayerView = (CQEntLayerView*)m_wndTabs.GetTabWnd(nSelTab);
		if (pLayerView != NULL)
		{
			OnActivateView(pLayerView);
		}
	}
	return 0;
}


PEntity CEzcad3View::GetActiveLayer()
{
	CQEntLayerView* pView= (CQEntLayerView*)GetActiveView ();
	if(pView==NULL)
	{
		return NULL;
	}
	return pView->GetLayer();
}

void CEzcad3View::OnActivateView (CView* pView)
{
	CQEntLayerView* pLayerView= (CQEntLayerView*)pView;
	if(pLayerView==NULL)
	{
		return ;
	}

	pLayerView->OnActivate();
}

LRESULT CEzcad3View::OnMoveTab(WPARAM wp, LPARAM lp)
{//�ƶ���tab

	PEntMgr pEM = E3_GetEntMgrFromCmdMgr(E3_GetCmdMgr());
	if (pEM == NULL)
	{
		return 0;
	}

	int nOldTab = (int)wp;	
	int nNewTab = (int)lp;	

	if(nOldTab==nNewTab)
	{
		ASSERT(0);
		return 0;
	}

	//����nOldTab��nNewTabλ�õĶ���
	PEntity pEnt1 = E3_GetEntChildByIndex(pEM,nOldTab);
	PEntity pEnt2 = E3_GetEntChildByIndex(pEM,nNewTab);
	if(pEnt1==NULL || pEnt2==NULL)
	{
		
		return 0;
	}

	E3_EntMgrBeginUndo(pEM,QGlobal::gf_Str(_T("CHANGEORDER"),_T("Change Order")));
	if(nOldTab < nNewTab)
	{//����ƶ�
		PEntity pEnt = E3_GetEntNext(pEnt2);
		E3_EntMgrUDMoveToAfter(pEM,pEnt1,pEnt2);
	}
	else
	{//��ǰ�ƶ�
		PEntity pEnt = E3_GetEntPrev(pEnt2);
		E3_EntMgrUDMoveToBefore(pEM, pEnt1,pEnt2);
	}	

	E3_EntMgrEndUndo(pEM);
		
	CQEntLayerView* pLayerView = (CQEntLayerView*)m_wndTabs.GetTabWnd(nNewTab);
	if(pLayerView!=NULL)
	{
		OnActivateView(pLayerView);
	}
	return 0;
}
LRESULT CEzcad3View::OnChangeActiveTab(WPARAM wp, LPARAM lp)
{	
	CQEntLayerView* pLayerView = (CQEntLayerView*)m_wndTabs.GetTabWnd((int)wp);
	
	if(pLayerView!=NULL && pLayerView!=m_pLayerViewStartChange)
	{
		m_pLayerViewStartChange = pLayerView;
		pLayerView->OnActivate();
	}
	return 0;
}
LRESULT CEzcad3View::OnChangingActiveTab(WPARAM wp, LPARAM lp)
{
	
	CQEntLayerView* m_pLayerViewStartChange = (CQEntLayerView*)m_wndTabs.GetTabWnd((int)wp);
	return 0;
	
}

void CEzcad3View::OnInitialUpdate()
{
	CQTabView::OnInitialUpdate();

	// TODO: �ڴ����ר�ô����/����û���
	
}


 
 