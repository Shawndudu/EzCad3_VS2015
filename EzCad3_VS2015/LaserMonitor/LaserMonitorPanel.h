#pragma once

 

#include "DlgLaserMonitor.h"

class CLaserMonitorPanel : public CDockablePane
{
// ����
public:
	CDlgLaserMonitor m_dlgMonitor;

	CLaserMonitorPanel();

	void AdjustLayout();
	  
// ����
public:
	virtual CSize CalcFixedLayout(BOOL bStretch, BOOL bHorz);
// ʵ��
public:
	virtual ~CLaserMonitorPanel();

protected:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);	
	
	DECLARE_MESSAGE_MAP()
	
};

