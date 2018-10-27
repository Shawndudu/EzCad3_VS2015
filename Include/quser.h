/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� QUser.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2016��3��
* �汾��¼: �����ļ�
*/


#pragma once
#include "QIniFile.h"

class GLOABL_EXT_CLASS QUser
{
public:
	CString m_strName;
	CString m_strPsw;
	BOOL m_bEnableSave;//ʹ�ܱ���
	BOOL m_bEnableDraw;//ʹ�ܻ���
	BOOL m_bEnablePickMove;//ʹ��ѡȡ�ƶ�
	BOOL m_bEnableEditEntParam;//ʹ�ܱ༭�������
	BOOL m_bEnableModifySysParam;//�޸�ϵͳ����
	BOOL m_bEnablePenParam;//ʹ���ޱʲ���
	BOOL m_bEnableDevParam;//ʹ���豸���� 
	BOOL m_bEnableMark;//ʹ�ܱ��

	QUser();
	BOOL IsAdmin();
	void CopyData(QUser* pUser);
	void SaveParam(CQIniFile& qini,CString strKey);
	void LoadParam(CQIniFile& qini,CString strKey);
};

class GLOABL_EXT_CLASS QUserMgr
{
private:
	CArray<QUser*,QUser*> m_pArrarUser;
	QUser* m_pCurUser;
public:
	void Reset();
	void Clear();
	QUserMgr();
	~QUserMgr();
	int Count();
	void SetCurUser(QUser* pUser);
	QUser* GetCurUser();

	QUser* GetUser(int i);
	QUser* FindUser(CString strName);
	void AddUser(QUser* pUser);
	QUser* RemoveUser(int i);
	int SaveParam(CString strFile );
	int LoadParam(CString strFile );
};


GLOABL_EXT_CLASS  QUserMgr* gf_GetUserMgr();
GLOABL_EXT_CLASS void gf_SetUserMgr(QUserMgr* pMgr);
GLOABL_EXT_CLASS int  gf_ReadUserParamFile();
GLOABL_EXT_CLASS  int  gf_SaveUserParamFile(); 