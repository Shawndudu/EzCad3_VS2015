/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� QMotor.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2016��3��
* �汾��¼: �����ļ�
*/

#pragma once

#define MOTOR_ERR_SUCCESS 0
#define MOTOR_ERR_FAULT   1  //����
#define MOTOR_ERR_NOTHOME 2  //û�л���
#define MOTOR_ERR_MINLIMIT 3   
#define MOTOR_ERR_MAXLIMIT 4  

#define MOTOR_ERR_USERSTOP 10  

#define MOTOR_MIN_MOVEDIST 0.0001  


#define MOTOR_FAULT_LIMIT_NEG1  0x0001
#define MOTOR_FAULT_LIMIT_POS1  0x0002
#define MOTOR_FAULT_LIMIT_NEG2  0x0010
#define MOTOR_FAULT_LIMIT_POS2  0x0020
#define MOTOR_FAULT_LIMIT_NEG3  0x0100
#define MOTOR_FAULT_LIMIT_POS3  0x0200
#define MOTOR_FAULT_LIMIT_NEG4  0x1000
#define MOTOR_FAULT_LIMIT_POS4  0x2000


#include "QIniFile.h"
#include "DlgProgress.h"

class QMotorMgr;
class GLOABL_EXT_CLASS QMotor
{
public:
	QMotorMgr* m_pQM;
	BOOL m_bEnable;
	BOOL m_bInvert; 	
	BOOL m_bOutNeg;//1=���������
	int m_nAxisId;
	BOOL   m_bRotaryAxis;
	double m_dDistPerRound;//תһȦ�ľ���
	double m_dPulsePerRound;//���һת������
	double m_dMinVel;//��С�ٶ�
	double m_dMaxVel;//����ٶ� 
	double m_dAcceleration;
	double m_dDeceleration;

	double m_dBacklash;//�����϶

	BOOL m_bEnFeedback;
	double m_dPosErrFollow;
	  
	double m_dCmdPos;//����λ�� 
	double m_dRefPos;//�ο�λ��=У���������λ�� 
   
	BOOL   m_bSAcc;
	double m_dJerk;
	
	BOOL m_bEnableSoftLimit;
	double m_dMinSoftLimit;
	double m_dMaxSoftLimit;

	BOOL   m_bEnableHome;
	BOOL   m_bAlreadyHome;
	BOOL   m_bHomeLowValid;
	BOOL   m_bHomeDirPos;//�������
	BOOL m_bHomeFindIndex;
	double m_dHomePos;//��������
	double m_dHomingFindVel;//������ٶ�
	double m_dHomingLeaveVel;//�뿪����ٶ�
	BOOL m_bHomeFinishGotoPos;
	double m_dHomeFinishGotoPos;

	BOOL m_bEnableLimit;
	BOOL m_bLimitLowValid;

	BOOL m_bMarkFinishGotoStartPoint;



	double m_dVelocityDir;//��ǰ�ƶ�����

	QMotor();

	virtual void CopyAllParam(QMotor* pMotor);

	double GetCmdPos() { return m_dCmdPos; }

	virtual double GetFbPos();
 
	//�������ø�λ���� 
	virtual void Reset();

	int PosToPulse(double pos);
	double PulseToPos(int pulse);

	virtual BOOL IsFault(DWORD& dwErrorCode);
	virtual BOOL IsMoving();

	virtual double CmdPosToRefPos(double dCmdPos);
	virtual void RefreshPos();
	virtual int GoPos(PMarker pMarker,double dPos, double dSpeed, BOOL bWaitFinish=TRUE);
	virtual int GoPos(PMarker pMarker,double dPos, BOOL bWaitFinish, double dSpdRatio);
	virtual int Home(PMarker pMarker, BOOL bWaitFinish = TRUE);

	virtual int WaitForMoveFinish(PMarker pMarker, ProgressParam* pProgressParam);


	virtual void ShowParamAxis(CMFCPropertyGridProperty* pGroup, CString strUnit);
	virtual void GetParamAxis(CMFCPropertyGridProperty* pGroup );

	//�����϶����
	virtual double CompBacklash(double dPos);
	 
	void Load(CQIniFile& qini, CString strName);
	void Save(CQIniFile& qini, CString strName);
	QMotor* GetCopy();

	BOOL IsSameParam(QMotor* pMotor);
};