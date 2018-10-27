/*
* Copyright (c) 2003, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� MakeClock.h
* ժҪ��	 ʱ��

*/

#ifndef _MAKECLOCK_H
#define _MAKECLOCK_H
  
class GLOABL_EXT_CLASS CMakeClock
{
protected:	
	BOOL m_bUseCmosTime;

	BOOL IsStart; 
	long m_lStartTime;//��ʼʱ��
	long m_lTotalTime;//��ʱ��	

	SYSTEMTIME stStart;
public:
	CMakeClock(BOOL bUseCmosTime = FALSE);	
	double m_dRatio;
	
	void Reset();
	void GetUseTime(int& h,int& m,int& s,int& ms);
	void GetUseTime(int& h,int& m,int& s);	
	long GetTotalTime();
	void Start();
	void Pause();
	void Continue();
	BOOL IsStarted(){return IsStart;};

	CString GetShowTimeStr();

	static CString GetShowTimeStr(int nTime);
};

#endif