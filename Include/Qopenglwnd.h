/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� QOpenGlWnd.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2016��3��
* �汾��¼: �����ļ�
*/
#pragma once
 
 
#include "Matrix3d.h"
#include "pt3d.h"
#include "Box3d.h"

class CSegMFCToolBar : public CMFCToolBar
{
	DECLARE_DYNAMIC(CSegMFCToolBar)

public:
	CSegMFCToolBar();
	virtual ~CSegMFCToolBar();

protected:
	DECLARE_MESSAGE_MAP()
	afx_msg LRESULT OnIdleUpdateCmdUI(WPARAM wParam, LPARAM);
public:
	void SetIsDlgControl(BOOL b);
};

enum GlRenderMode
{
	Wire,
	Fill,
    FillLines
};
class GLOABL_EXT_CLASS QOpenGlWnd  
{
public:
	CPoint m_ptOpenGLBase;
	CPoint m_ptOpenGLLast;
	//BOOL m_bWireFrame;      //��ʾ�߿�

	GlRenderMode m_modeRender;
protected: 
	 
	 
	 
	CDC* m_pViewDC;  
	HGLRC m_hViewRC;        // OpenGL ����Ⱦ����	

	 
	Pt3d m_ptEye;  // �۾���λ��
	Pt3d m_ptCenter;  // �۲�����
	Pt3d m_ptUp;  // �۲������
	double m_dScale;  // ���ű���

	Pt3d m_ptSaveEye;  // �۾���λ��
	Pt3d m_ptSaveCenter;  // �۲�����
	Pt3d m_ptSaveUp;  // �۲������

	double m_dRange[2];  // �ӿ���ʾ��Χ
	int    m_nWidth;  // ���ڿ�	
	int	   m_nHeight;  // ���ڸ�	
		 

	COLORREF m_clrPickBox;

protected:
	 
	HBITMAP m_hOldBmp;
	HBITMAP m_hBmpDIB;

	int    m_nBmpWidth;  // ���ڿ�	
	int	   m_nBmpHeight;  // ���ڸ�
public:
 
	BOOL CreateOpenglDib(int w, int h);

	void SetRenderMode(GlRenderMode mode);
	GlRenderMode GetRenderMode() { return m_modeRender; }
protected:
 
	void DrawLine(CDC *pDC, CPoint base, CPoint point, COLORREF nColor, int nPenWidth);
	void DrawBox(CDC *pDC, CPoint base, CPoint point, COLORREF nColor);
	void DrawDragRectXOR(CDC *pDC, CPoint base, CPoint point);
	void DrawPoint(CDC *pDC, CPoint point, COLORREF nColor, int nPenWidth);
	// Construction
public:
	QOpenGlWnd();

	virtual ~QOpenGlWnd();
	CDC* GetViewDC(){return m_pViewDC;	}
	HGLRC GetViewRC() { return m_hViewRC; }
 

	int GetWndWidth() { return m_nWidth; }
	int GetWndHeight() { return m_nHeight; }

	Pt3d GetEyePt() { return m_ptEye; }
	Pt3d GetCenterPt() { return m_ptCenter; }
	Pt3d GetUpPt() { return m_ptUp; }
	 

	void SetOpenGLScale(double dScale);
	double GetOpenGLScale() { return m_dScale; }
	void DestroyAllOpenGl();
	void SaveCurViewPos();
	void LoadSaveViewPos();
	Pt3d GetOpenGLCenter();

	virtual  void SetLight();
	virtual  void SetMaterial();

 	void OpenGLUpdateSize(int cx, int cy);
	//��ʼ����Ⱦ����
	void SetupRender();
	//����ͶӰ����
	void SetupProjectMatrix();


	CMatrix3d GetProjectMatrix();
	void GetTransMatrix(float fMatrix[4][4]);

	CPoint GetScreenCoor(Pt3d ptReal);
	Pt3d   GetRealCoor(CPoint ptScreen);

	BOOL Normalize(double pt[3]);
	void VProduct(double vec[3], double Vec[3], double rtvec[3]);
	 
	//������Ļ������õ��ƶ���3ά����
	Pt3d GetMoveDistFromScreenXY(CPoint ptBase, CPoint point);

	void OnViewTop();
	void OnViewFront();
	void OnViewLeft();
	void OnViewRight();
	void OnViewIso();
	void OnViewBottom();
	void OnViewBack();
	void ZoomOpenGL(int n);

	void ZoomWnd(CPoint point1, CPoint point2);
	void ZoomIn();
	void ZoomOut();
	void ZoomUp(Pt3d ptCen);
	void ZoomAll(Box3d box);


	//������ͼ���µĻ�׼�� nState=0 ƽ�� nState=1 ��ת
	void OnChangeViewPos(UINT nFlags, CPoint point, int nState);
public:
	virtual void DrawStart();
	virtual void DrawEnd();
public:
	virtual void glDrawWorkPlane();

	//���»������ж���
	virtual void glDrawAllObject(WORD wDrawFlag=0) {};
	//�������У�bReDrawBack�Ƿ����»��Ʊ�������
	virtual void glDrawAll(CDC* pDC, BOOL bReDrawBack = TRUE);
	 
};
 