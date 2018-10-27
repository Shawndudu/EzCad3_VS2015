/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CQRuler.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2016��3��
* �汾��¼: �����ļ�
*/

#ifndef QRULER_H
#define QRULER_H

/////////////////////////////////////////////////////////////////////////////
// CQRuler window

const int RULERTYPE_TOP    = 0;
const int RULERTYPE_BOTTOM = 1;
const int RULERTYPE_LEFT   = 2;
const int RULERTYPE_RIGHT  = 3;


const int RULERATTR_HIDEHEAD  = 0x0001;//����ͷ
const int RULERATTR_HIDETAIL  = 0x0002;//����β

//const int RULER_PIXEL_SIZE         = 20 ;   //��߳ߴ�(����)            
//const int RULER_PIXEL_GRADUATION_10= 12 ;   //ʮ�ȷ̶ֿȳ���(����)
//const int RULER_PIXEL_GRADUATION_5 = 10 ;   //��ȷ̶ֿȳ���(����)
//const int RULER_PIXEL_GRADUATION_1 = 7  ;   //1�ȷ̶ֿȳ���(����)
const int RULER_PIXEL_MIN_DIST_10        = 40 ;   //ʮ�ȷ����̶���С����(����)

  

class GLOABL_EXT_CLASS CQRuler : public CWnd
{
// Construction
public:
	CQRuler();

// Attributes
public:
	int      m_nRulerType        ;//��ߵ����� 
	int      m_nRulerAttrib      ;//��ߵ�����

	COLORREF m_clrRulerBK        ;//��߱�����ɫ
	COLORREF m_clrRulerBox       ;//��߱߿���ɫ
	COLORREF m_clrRulerGraduation;//��߿̶���ɫ
	COLORREF m_clrRulerCursor    ;//��߹����ɫ

	int   m_nPixWndSize          ;//��ߵ����سߴ�

	double m_dLogStart            ;//��ߵ��߼���ʼ����
    double m_dLogEnd              ;//��ߵ��߼��������� 
    double m_dLogSize             ;//��ߵ��߼����귶Χ = m_dLogEnd - m_dLogStart

	double m_dGraduationNum10     ;//��ߵ�ʮ�ȷ̶ֿȸ���
    double m_dGraduationNum5      ;//��ߵ���ȷ̶ֿȸ���

	double m_dLogGraduationSize10 ;//��ߵ�ʮ�ȷ̶ֿ��߼��ߴ�
	
    double m_dPixGraduationSize10 ;//��ߵ�ʮ�ȷ̶ֿ����ؾ���
	double m_dPixGraduationSize   ;//��ߵķ̶ֿ����ؾ���

	
    double m_dLogGraduationStart  ;//�����ߵ�һ���̶���ʼ�߼�λ��
	double m_dPixMainGradOffset   ;//��ߵ�һ��ʮ�ȷ̶ֿ�ƫ�Ƶ����ؾ���

	double m_dLastPos;            


	BOOL   m_bMouseMove;
	BOOL   m_bCapture;
// Operations
public:
	BOOL CreateRuler(int rulerType, CWnd* pParentWnd, UINT nID);

	int  GetRulerType()const{return m_nRulerType;}
	void SetRulerType(int rulerType)
    {
        m_nRulerType   = rulerType;
    }

	int  GetRulerAttrib()const{return m_nRulerAttrib;}
	void SetRulerAttrib(int rulerAttrib)
	{
		m_nRulerAttrib = rulerAttrib;
	}

	void SetRulerRange(double fStart,double fEnd,BOOL bRedraw);//���ñ�ߵ��߼���Χ
	void SetRulerPos(double pos);//���ù��λ��

	void ReCalcRulerParam();//�����ߵ����в���

	void DrawTicker(CDC* pDC, CRect rulerRect);

    void DrawCursorPos(double pos);


	void OnParentPosChanged();
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQRuler)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CQRuler();

	// Generated message map functions
protected:
	//{{AFX_MSG(CQRuler)
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnPaint();

	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif