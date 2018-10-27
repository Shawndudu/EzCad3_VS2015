/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CQPropertyGridParamProperty.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2016��3��
* �汾��¼: �����ļ�
*/
#pragma once
 

 class CPenToolBar : public CMFCToolBar
{
public:
	virtual void OnUpdateCmdUI(CFrameWnd* /*pTarget*/, BOOL bDisableIfNoHndler)
	{
		CMFCToolBar::OnUpdateCmdUI((CFrameWnd*) GetOwner(), bDisableIfNoHndler);
	}

	virtual BOOL AllowShowOnList() const { return FALSE; }
};
  
 class CQPropertyGridBigButtonProperty : public CMFCPropertyGridProperty
{
 
	DECLARE_DYNAMIC(CQPropertyGridBigButtonProperty)

// Construction
public:

	CQPropertyGridBigButtonProperty(const CString& strName, const CString& strFolderName, LPCTSTR lpszDescr = NULL);
	virtual ~CQPropertyGridBigButtonProperty();

	virtual void AdjustButtonRect();
// Overrides
public:
	virtual void OnDrawValue(CDC* pDC, CRect rect);
	virtual void OnClickButton(CPoint point);
	virtual void OnDrawButton(CDC* pDC, CRect rectButton);
	PMarkParam m_pMarkParam;
// Attributes
protected:
	
};

 class CQPropertyGridParamProperty : public CMFCPropertyGridProperty
{
	DECLARE_DYNAMIC(CQPropertyGridParamProperty)

// Construction
public:

	CQPropertyGridParamProperty(const CString& strName, const CString& strFolderName, LPCTSTR lpszDescr = NULL);
	virtual ~CQPropertyGridParamProperty();

// Overrides
public:
		virtual void AdjustInPlaceEditRect(CRect& rectEdit, CRect& rectSpin);
  	virtual void OnDrawValue(CDC* pDC, CRect rect);
	virtual void OnClickButton(CPoint point);

	int m_nParamType;//=0 �ʺ�  =1 ���Ӳ��� =2 Բ��

	BOOL m_bAdvanceParam;
	BOOL m_bWeldWave;

	PMarkParam m_pMarkParam;
	int m_nCurLaserType;
// Attributes
protected:
	
};

 