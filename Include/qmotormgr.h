/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� QMotorMgr.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2016��3��
* �汾��¼: �����ļ�
*/

#pragma once
#include "Qmotor.h"

//#define MAX_MOTOR_COUNT 4
#define MAX_MOTOR_COUNT 6

#define MAX_AXISSOLUTION_NUM 17
#define MOTOR_SOL_NONE 0
#define MOTOR_SOL_X    1
#define MOTOR_SOL_Y    2
#define MOTOR_SOL_Z    3
#define MOTOR_SOL_A    4
#define MOTOR_SOL_XY   5
#define MOTOR_SOL_XZ   6
#define MOTOR_SOL_YZ   7
#define MOTOR_SOL_XA   8
#define MOTOR_SOL_YA   9
#define MOTOR_SOL_ZA   10
#define MOTOR_SOL_XYZ  11
#define MOTOR_SOL_XZA  12
#define MOTOR_SOL_YZA  13
#define MOTOR_SOL_XYZA 14
#define MOTOR_SOL_XY_SPHERE 15
#define MOTOR_SOL_XYZA_FREE 16  //�����ƶ�ģʽ


#define MOTOR_X 0
#define MOTOR_Y 1
#define MOTOR_Z 2
#define MOTOR_A 3

#define MOTOR_A_AS_A  0
#define MOTOR_A_AS_Y  1
#define MOTOR_A_AS_X  2

typedef  int (*QM_EM_InitMotion)(int nFlag);
typedef  int(*QM_EM_CloseMotion)();
typedef  int(*QM_EM_SetAxisWorkMode)(int idAxis, int nMode);
typedef  int(*QM_EM_SetAxisOutMode)(int idAxis, int Mode_A, int Mode_B, int Mode_C);
typedef  int(*QM_EM_SetAxisServeOn)(int idAxis, BOOL bOn);
typedef  int(*QM_EM_SetAxisPosErrFollow)(int idAxis, int pel);
//���÷����϶
typedef  int(*QM_EM_SetAxisBacklash)(int idAxis, int nPulse, int nTimeMs);
typedef  int(*QM_EM_SetAxisIO)(int idAxis, int PHN_flag, int Mode, int H_L_Act, int nPortIndex);
typedef  int(*QM_EM_GetAxisState)(int idAxis, int& state, int& fault);
typedef  int(*QM_EM_ResetAxisPos)(int idAxis, int offset);
typedef  int(*QM_EM_GetAxisPos)(int idAxis, int& pos);
typedef  int(*QM_EM_StopAxis)(int idAxis);
typedef  int(*QM_EM_SetAxisAccDec)(int idAxis, int minvel, int maxvel, int acc, int dec, int jerk);
typedef  int(*QM_EM_SetAxisVel)(int idAxis, int vel);
typedef  int(*QM_EM_AxisMoveTo)(int idAxis, int pos);
typedef int(*QM_EM_AxisGoHome)(int idAxis, int goHomeVel, int LeaveHomeVel, int LeaveHomePos, int LookZIndexVel, int PulseNum, int Z_IndexFlag);

 
typedef int(*QM_EM_InitHandwheel)(); 

/*SPEC: ����ָ����Ϊ���ֵĴ���(int ��ţ�short ������ϵ��(����λ��pulse), short ������ϵ��(����λ��pulse), double ��������ٶ�pulse/s)��*/
/*INFO���ڹ̸��У�ͬʱ����0-��3�ĸ��������ٶȺͼ��ٶ�����Ϊ�䵱ǰ�ļ��ٶȺͼ��ٶȡ�
��9030�У����ֿ��ƵĴ����޷��趨���ٶȺͼ��ٶȡ�*/
/*INFO: vel����ֻ�ٹ̸���ʹ�ã�9030�޷��趨��ĸ�������ٶȣ���ĸ����ٶ���ת�����ֵ��ٶȺ͸���PID����ϵ��Kp����(0.001<Kp<1000)*/
/*INFO: �̸߶����ֱ���������4��Ƶ��Ҳ����������תһ���������������4��
���磺Ҫʵ������תһ������ƶ�100�����壬��Ӧ����(idAxis, 1, 100/4, 0) ����ϵ����
����(idAxis, 4, 100, 0)����ϵ��Ҳ���ԣ�������Ϊ�̸�startHandwheel������������ϵ����Ϊshort����(��Χ[0-32767])
��˽�������ϵ��1��Ϊ��С����ʵ�����Ĵ��������ޣ�Ҳ��32767/1
��Ȼ9030�ɽ���double���͵Ĵ����ȣ�������Ϊ�����ڹ̸ߣ���EM�������չ̸ߵĲ������Ͷ���*/
typedef int(*QM_EM_StartHandwheel)(int idAxis, short masterEven, short slaveEven, double vel);

//SPEC: ��ȡ����IO����ȡ��ѡ�ἰ���ʵ�λ��
typedef int(*QM_EM_ReadHandwheelIO)(int& idAxis, int& gearLevel);

//SPEC: ֹͣ����ĵ��ӳ��ָ���ģʽ��
typedef int(*QM_EM_EndHandwheel)(short idAxis);


#define QM_ERR_SUCCESS      0
#define QM_ERR_FAIL         1
#define QM_ERR_OPENFAIL     2 
#define QM_ERR_NOFUNCTION   3 
#define QM_ERR_AXISID       4

class GLOABL_EXT_CLASS QMotorMgr
{
public:
	PMarker m_pMarker;
	int m_nUnitType;
	int m_nErrCode;
	QMotor m_motorAll[MAX_MOTOR_COUNT];

	int m_nLastSpd[MAX_MOTOR_COUNT];

	double m_dStepDist; 
	double m_dFocusPos; 

	BOOL m_bTableMoveX;//X����ƽ̨�ƶ�
	BOOL m_bTableMoveY;//Y����ƽ̨�ƶ�

	int m_nAasMode;//0��������ת��1��Y�ᣬ2��X��
	double m_dOriginX;
	double m_dOriginY;
	double m_dOriginZ;
	double m_dOriginA;

	int m_nAxisMoveDelayMs;	
	BOOL m_bEnableHandwheel;

	BOOL m_bMotorUseInterSoftInvert;//����Ƿ�ʹ���ڲ���ת
public:
	BOOL m_bSolAMark360;
	int  m_nSolAMarkCount;
	double  m_dSolAMarkAngle;

public:
	QMotorMgr();
	~QMotorMgr();

	virtual void CopyAllParam(QMotorMgr* pMgr);
	virtual void Close();

	virtual BOOL LoadParam(CString strFile);
	virtual BOOL SaveParam(CString strFile);

	virtual BOOL Initial(PMarker pMarker,int nSolu);
	BOOL UpdateAxisParam(int axis);

	virtual BOOL ResetAxisPos(int idAxis, double dOffset);
	virtual int GetPulsePos(int nAxisId) ;

	virtual BOOL IsFault(int nAxisId,DWORD& dwErrorCode);
	virtual BOOL IsMoving(int nAxisId);

	QMotor* GetMotor(int nAxis) { return &m_motorAll[nAxis]; }

	//У��
	virtual double CmdPosToRefPos(int nAxisId, double dCmdPos);
	virtual double RefPosToCmdPos(int nAxisId, double dRefPos);

	virtual int MoveTo(int nAxisId, int pos, int spd);
	virtual int Home( int nAxisId, int spdHome,int spdLeave, int LeaveHomePos, int LookZIndexVel, int PulseNum, int Z_IndexFlag);

	virtual void StopAxis(int nAxisId);


	virtual int HomeAllAxis(PMarker pMarker);
	virtual int GotoPos(PMarker pMarker, double x,double y,double z,double a,BOOL& isHasMoved, double dSpdRatio);

	virtual int GotoPos(PMarker pMarker, double x, double y, double z,double dSpdRatio );

	virtual BOOL InitialHandwheel( );
	virtual BOOL EndHandwheel(int nAxisId);
	virtual BOOL GetHandwheelIO(int& idAxis, int& gearLevel);

	virtual int SetHandwheelSlaveAxis(int nAxisId,double dGearRatio);

	virtual void ShowHandwheelDialog();

	virtual void OnChangeUnitType(int nUnitType);

	virtual BOOL GetAxisStatus(int axis, WORD& wStatus) { return FALSE; };
};


GLOABL_EXT_CLASS QMotorMgr* gf_GetMotorMgr();
void gf_SetMotorMgr(QMotorMgr* pMM);

GLOABL_EXT_CLASS CString gf_GetMotorErrStr(int nErr);
GLOABL_EXT_CLASS int gf_MotorErrToMERR(int nMotorErr);

GLOABL_EXT_CLASS CString gf_GetMotorSolName(int nSol);

GLOABL_EXT_CLASS int gf_RemoveSolAxisA(int nSol);