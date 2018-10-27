/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� Pt2d.h
* �ļ���ʶ�� 
* ժҪ�� 2ά���ඨ��
*           
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#pragma once

 

class GLOABL_EXT_CLASS Pt2d
{
public:
	Pt2d(void);
	Pt2d(const double fx,const double fy){x =fx;y=fy;};
	Pt2d(const Pt2d& ptCen,const double dLen,const double dRadAngle);
	
public:
	~Pt2d(void);

	public:
     double x;
     double y;
public:
	
	void Set(const double& fx,const double& fy){x =fx;y=fy;};

	BOOL Normalize();
	
	Pt2d operator+=( const Pt2d& pt);
	Pt2d operator-=( const Pt2d& pt);
	Pt2d operator*=( const double& factor );		
	Pt2d operator/=( const double&  dividend);
	
	Pt2d operator+(const Pt2d& pt)const;
	Pt2d operator-(const Pt2d& pt)const;
	double operator^(const Pt2d& pt)const; //���

	Pt2d operator*(double scale)   const;
	Pt2d operator/(double dividend)const;

	Pt2d operator-()const; // һԪ����

	Pt2d  Rotate(const double& ang);//fAng > 0 ��ʱ����ת fAng < 0 ˳ʱ����ת
	double Length() const;
	double Distance(const Pt2d& pt) const;//��㵽pt����
	//��㵽pt����ƽ��
	double Distance2(const Pt2d& pt) const;

	//��㵽pt���Ծ���
	double FabsDist(const Pt2d& pt) const;

	double GetAngle(const Pt2d& ptCen) const;//����Ե�ptCen�ĽǶ� //�Ƕ�Ϊ[0��PAI2]����

	//��㵽ֱ�߶ε�ͶӰ��,���ؾ���,����t�͵�
	double GetProjectPt(const Pt2d& pt1,const Pt2d& pt2,double& t,Pt2d& pt)  const;

	//��㵽ֱ�߶ε�ͶӰ��,���� ����t 
	double GetProjectParam(const Pt2d& pt1,const Pt2d& pt2 )  const;

	//��㵽ֱ�߶εĵ��������,���ز���t�;���, 0=<t<=1
	double GetDistToLineSeg(const Pt2d& pt1,const Pt2d& pt2,double& t)  const;

	//��㵽ֱ�ߵ��������ƽ��
	double GetDist2ToLine(const Pt2d& pt1,const Pt2d& pt2)const;
	//friend	 Pt2d  operator*(const double& scale,const Pt2d& pt);
};



 GLOABL_EXT_CLASS Pt2d  operator*(const double& scale,const Pt2d& pt); 
