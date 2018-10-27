/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CEzcad3Doc.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

// Ezcad3Doc.h : CEzcad3Doc ��Ľӿ�
//


#pragma once


class CEzcad3Doc : public CDocument
{
protected: // �������л�����
	CEzcad3Doc();
	DECLARE_DYNCREATE(CEzcad3Doc)

// ����
public:
	int     m_nExportMode;
	CString m_strAuthor;
	CString m_strDate;
	CString m_strComment;

	CString m_strOpenFileName;
	CString m_strSaveFileName;
// ����
public:
	 
// ��д
public:
	 virtual BOOL OnNewDocument();
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	virtual BOOL OnSaveDocument(LPCTSTR lpszPathName); 

	virtual void Serialize(CArchive& ar);
	 
	virtual BOOL SaveModified();
// ʵ��
public:
	virtual ~CEzcad3Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnUpdateFileSave(CCmdUI* pCmdUI);
	afx_msg void OnUpdateFileSaveAs(CCmdUI* pCmdUI);
	DECLARE_MESSAGE_MAP()
};


