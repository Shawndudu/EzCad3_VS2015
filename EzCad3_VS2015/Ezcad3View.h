/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CEzcad3View.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

// Ezcad3View.h : CEzcad3View ��Ľӿ�
// 
#pragma once

#include "QTabView.h"
#include "QEntView.h"
#include "EzCad3Doc.h"
#include "QEntLayerView.h"

class CEzcad3View : public CQTabView
{
protected: // �������л�����
	CEzcad3View();
	DECLARE_DYNCREATE(CEzcad3View)

// ����
public:
	CEzcad3Doc* GetDocument() const;

// ����
public:
	BOOL IsScrollBar () const
	{
		return TRUE;
	}

	CQEntLayerView* m_pLayerViewStartChange;
	PEntity GetActiveLayer();

	virtual void OnActivateView (CView* /*pView*/);
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CEzcad3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

	virtual LRESULT OnUserChangeCurLayer(WPARAM wParam, LPARAM lParam);	
	virtual LRESULT OnUserChangeEntity(WPARAM wParam, LPARAM lParam);	
	virtual LRESULT OnUserDBClickTab(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnMoveTab(WPARAM wp, LPARAM lp);
	afx_msg LRESULT OnChangeActiveTab(WPARAM wp, LPARAM lp);
	afx_msg LRESULT OnChangingActiveTab(WPARAM wp, LPARAM lp);
	 
	
protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
};


CEzcad3View* gf_GetCurEzcad3View();

#ifndef _DEBUG  // Ezcad3View.cpp �еĵ��԰汾
inline CEzcad3Doc* CEzcad3View::GetDocument() const
   { return reinterpret_cast<CEzcad3Doc*>(m_pDocument); }
#endif

