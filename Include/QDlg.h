/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� QDlg.h
* �ļ���ʶ��
* ժҪ�� 
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/


#pragma once
 
 

GLOABL_EXT_CLASS int gf_DlgInputOne(CWnd* pParent,CString& strText,CString strTitle,CString strPrompt=_T(""),CString strUnit=_T(""));

GLOABL_EXT_CLASS int gf_DlgYesNo(CString strTitle, CString strPrompt,BOOL bHideCancel=FALSE);
GLOABL_EXT_CLASS int gf_DlgYesNo2(CString strTitle, CString strPrompt, BOOL bHideCancel, CString strCamcel);
GLOABL_EXT_CLASS int gf_DlgImportBmp(CString& strFileName);

GLOABL_EXT_CLASS int gf_DlgImportVector(CString& strFileName);

GLOABL_EXT_CLASS int gf_DlgProjectEnt(int& nProjectMode, BOOL& bDownProject, BOOL& bRemoveNoInter, BOOL& bCylinderX, double& dLimetZ, double& dCylinderDiameter, double& m_dAlignOffset);

GLOABL_EXT_CLASS int gf_DlgPenParamLib(CWnd* pParent, PMarkParam pPenParam, PMarker pMarker , CString& strPenName);
GLOABL_EXT_CLASS int gf_DlgPenAdvance(PMarker pMarker);

GLOABL_EXT_CLASS int gf_DlgShowIoState(int nIoState);

GLOABL_EXT_CLASS int gf_DlgOnFileProjectParam(PMarker pMarker);