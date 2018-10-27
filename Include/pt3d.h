/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� Pt3d.h
* �ļ���ʶ�� 
* ժҪ��     3ά���ඨ��
*           
* �汾��2.0
* ��    �ߣ�qy
* ������ڣ�2005��5��21��
* �汾��¼: �����ļ�
*/
#ifndef POINT3D_H
#define POINT3D_H

#include <math.h>
 
class GLOABL_EXT_CLASS Pt3d
{
public:
     double x;
     double y;
	 double z;
public:
	Pt3d();	
	Pt3d(const double fx,const double fy,const double fz){x =fx;y=fy;z=fz;};
	void Set(const double& fx,const double& fy,const double& fz){x =fx;y=fy;z=fz;};

	BOOL Normalize();
	
	Pt3d operator+=( const Pt3d& pt);
	Pt3d operator-=( const Pt3d& pt);
	Pt3d operator*=( const double& factor );		
	Pt3d operator/=( const double&  dividend);
	
	Pt3d operator+(const Pt3d& pt)const;
	Pt3d operator-(const Pt3d& pt)const;
	double operator*(const Pt3d& pt)const; //���
	Pt3d operator^(const Pt3d& pt)const; //���

	Pt3d operator*(double scale)   const;
	Pt3d operator/(double dividend)const;

	Pt3d operator-()const; // һԪ����

 	double Length() const;
	//��㵽pt����
	double Distance(const Pt3d& pt) const;
	double Distance2(const Pt3d& pt) const;
	
	//��㵽pt���Ծ���
	double FabsDist(const Pt3d& pt) const;

	friend	GLOABL_EXT_CLASS Pt3d  operator*(const double& scale,const Pt3d& pt); 

};
 


inline Pt3d  operator*(const double& scale,const Pt3d& pt)
{
	return Pt3d(scale * pt.x , scale * pt.y, scale * pt.z);
}


#endif