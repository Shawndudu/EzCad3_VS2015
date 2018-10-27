/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� PenParamPropSet.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#pragma once
  
class GLOABL_EXT_CLASS CPenParamPropSet
{
public:
	CWnd*    m_pParentWnd;
	PMarker  m_pMarker;
	PMarkPen m_pPenCur;
	int      m_nCurPenIndex;	

	BOOL m_bEnableBasicParam;//ʹ����ʾ�������� 

	BOOL m_bDisShowCountParam;
	BOOL m_bDisShowDelayParam;
	BOOL m_bDisShowJumpParam;
	BOOL m_bDisShowSkyWriteParam;
	BOOL m_bDisShowPowerRampParam;
	BOOL m_bDisShowSpeedRampParam;
	BOOL m_bDisShowOptmizeParam;
	BOOL m_bDisShowWobbleParam;
	BOOL m_bDisShowOtherParam;

	

	int  m_nCurLaserType; //��ǰ����������
	BOOL m_bEnableShowSpecialWave;//ʹ�����Ⲩ����ʾ 
	BOOL m_bEnablePropertyChangeHandle;//ʹ�����Ըı���Ϣ����
	
	CMFCPropertyGridCtrl* m_pPenGridCtrl;

	CMFCPropertyGridProperty* m_pGroupPenBasic;
	CMFCPropertyGridProperty* m_pGroupPenMark;
	CMFCPropertyGridProperty* m_pGroupPenLaser;
	CMFCPropertyGridProperty* m_pGroupPenDelay;
	CMFCPropertyGridProperty* m_pGroupPenJump;
	CMFCPropertyGridProperty* m_pGroupPenOptmize;
	CMFCPropertyGridProperty* m_pGroupPenWobble; 
	CMFCPropertyGridProperty* m_pGroupPenOther;
	CMFCPropertyGridProperty* m_pGroupPenPowerRamp;
	CMFCPropertyGridProperty* m_pGroupPenSpeedRamp;
	CMFCPropertyGridProperty* m_pGroupPenSkyWrite;

	int m_nFiberLaserPWCount;
	int m_nFiberLaserPWValue[256];
	CString m_strFiberLaserPWName[256];
public:
	CPenParamPropSet();

	 	//�����ʲ����б�
	void CreatePenParamList();
	//�������������б�
	void CreatePenParamListBasic();
	//������̲����б�
	void CreatePenParamListMark();
	//������������б�
	void CreatePenParamListLaser();
	//������ʱ�����б�
	void CreatePenParamListDelay();
	//������ת�����б�
	void CreatePenParamListJump();
	//�����Ż������б�
	void CreatePenParamListOptmize();
	//�������������б�
	void CreatePenParamListWobble();
	//�������������б�
	void CreatePenParamListOther();
	//����Ramp�б�
	void CreatePenParamListPowerRamp();
	void CreatePenParamListSpeedRamp();
	void CreatePenParamListSkyWrite();

	//���µ�ǰ�ʲ���
	void UpdateCurPenParam();

	//���»��������б�
	void UpdatePenParamListBasic();
	//���±�̲����б�
	void UpdatePenParamListMark();
	//���¼�������б�
	void UpdatePenParamListLaser();
	//������ʱ�����б�
	void UpdatePenParamListDelay();
	//������ת�����б�
	void UpdatePenParamListJump();
	//�����Ż������б�
	void UpdatePenParamListOptmize();
	void UpdatePenParamListWobble();
	void UpdatePenParamListOther();
	void UpdatePenParamListPowerRamp();
	void UpdatePenParamListSpeedRamp();
	void UpdatePenParamListSkyWrite();
	
	void OnPropertyChanged(CMFCPropertyGridProperty * pProperty); 
	void OnPropertyChangedPenBasic(CMFCPropertyGridProperty * pProperty); 
	void OnPropertyChangedPenMark(CMFCPropertyGridProperty * pProperty);
	void OnPropertyChangedPenLaser(CMFCPropertyGridProperty * pProperty); 
	void OnPropertyChangedPenDelay(CMFCPropertyGridProperty * pProperty);
	void OnPropertyChangedPenJump(CMFCPropertyGridProperty * pProperty);
	void OnPropertyChangedPenOptmize(CMFCPropertyGridProperty * pProperty);
	void OnPropertyChangedPenWobble(CMFCPropertyGridProperty * pProperty);
	void OnPropertyChangedPenOther(CMFCPropertyGridProperty * pProperty);
	void OnPropertyChangedPenPowerRamp(CMFCPropertyGridProperty * pProperty);
	void OnPropertyChangedPenSpeedRamp(CMFCPropertyGridProperty * pProperty);

	void OnPropertyChangedPenSkyWrite(CMFCPropertyGridProperty * pProperty);
	void ReadFiberLaserPWFile();
	int  GetCurPenPWIndex();
};




