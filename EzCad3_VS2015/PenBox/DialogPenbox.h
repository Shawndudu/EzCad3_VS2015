/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CDialogPenbox.h
* �ļ���ʶ��
* ժҪ��  
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/
#pragma once

#include "..\resource.h"
// CDialogPenbox �Ի���

 
#include "PenParamPropSet.h" 
#include "QPropertyGridProperty.h"
#include "ColorButton.h"
#include "QDIB.h"

class CDialogPenbox : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogPenbox)

public:
	CDialogPenbox(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDialogPenbox();

	// �Ի�������
	enum { IDD = IDD_DIALOG_PENBOX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	afx_msg void OnSize(UINT nType, int cx, int cy);

	DECLARE_MESSAGE_MAP()
	afx_msg LRESULT OnPropertyChanged( WPARAM wparam, LPARAM lparam ); 
	afx_msg LRESULT OnUserInitEntList(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnUserPickChange(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnUserLaserChange(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnUserUnitChange(WPARAM wParam, LPARAM lParam);
	afx_msg LRESULT OnUserLaserParamChanged(WPARAM wParam, LPARAM lParam);

	afx_msg void OnCustomdrawPen(NMHDR*, LRESULT*);
	afx_msg void OnClickListPen(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDblclkListPen(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnRclickListPen(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnBnClickedPen0();
	afx_msg void OnBnClickedPen1();
	afx_msg void OnBnClickedPen2();
	afx_msg void OnBnClickedPen3();
	afx_msg void OnBnClickedPen4();
	afx_msg void OnBnClickedPen5();
	afx_msg void OnBnClickedPen6();
	afx_msg void OnBnClickedPen7();
	afx_msg void OnPenApplytopick();
	afx_msg void OnUpdatePenApplytopick(CCmdUI* pCmdUI); 
	afx_msg void OnLoadDefaultPens();
	afx_msg void OnPenSetDefaultPens();
	afx_msg void OnPenResetAllPens();

	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnDestroy();

	virtual void OnOK();
	virtual void OnCancel();
public:
	virtual BOOL OnInitDialog();
public:
	
	CListCtrl m_listPen;
	CShowHideButton m_btnShowOnOff;
	CColorButton m_btnPen0;
	CColorButton m_btnPen1;
	CColorButton m_btnPen2;
	CColorButton m_btnPen3;
	CColorButton m_btnPen4;
	CColorButton m_btnPen5;
	CColorButton m_btnPen6;
	CColorButton m_btnPen7;
	BOOL m_bShowPenList;
	CBitmap		bmpMarkOn;
	CBitmap		bmpMarkOff;
	CFont m_fontProp;
	CQPropertyGridCtrl m_penParam;
	PMarker m_pMarker;

	PMarkPen m_penCur;
	BOOL m_bEnablePropertyChangeHandle;//ʹ�����Ըı���Ϣ����

	int m_nCurPenIndex;
	
	CPenParamPropSet m_penProp; 

	void AutoLayout();

	void ShowCurPenParam(int nPen);
	void UpdateCurPenParam();
	void UpdateCurPenParamToPenBox();
	void UpdateAllBtnColor();
	void UpdatePenList();
	void SetPropListFont();
	void SaveLastListWidth();
	BOOL GetLastListWidth(int& bItem0,int& bItem1,int& bItem2,int& bItem3,int& bItemProp);

	//���µ�ǰ���б��ѡ��״̬�Ҽ�������Ƿ���ȷ
	void UpdatePenListSelectStateAndCheckName() ;

	//Ӧ�õ�ǰ�ʺŵ�ѡ�����
	void AppltPenToSelEnt(int nPen);
	//�ѵ�ǰ�ʲ������Ƶ��ʺ���
	void SetCurPenParamToPenbox();

	void InitPenboxList();
	//��ʼ�����Բ�����
	void InitPropList(); 
	afx_msg void OnBnClickedButtonAdvance();
	afx_msg void OnBnClickedButtonParamlib();
	
	afx_msg void OnBnClickedButtonListonoff();
};
