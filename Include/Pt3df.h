/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� Pt3df.h
* �ļ���ʶ��
* ժҪ�� 
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

//Pt3df��Float�汾����ֹ3d������̫��
#pragma once

#include <math.h>
 
class GLOABL_EXT_CLASS Pt3df
{
public:
     float x;
     float y;
	 float z;
public:
	Pt3df();	
	Pt3df(const double fx,const double fy,const double fz){x = (float)fx;y= (float)fy;z= (float)fz;};
	void Set(const double& fx,const double& fy,const double& fz){x = (float)fx;y= (float)fy;z= (float)fz;};

	Pt3df(const float fx,const float fy,const float fz){x =fx;y=fy;z=fz;};
	void Set(const float& fx,const float& fy,const float& fz){x =fx;y=fy;z=fz;};

	BOOL Normalize();
	
	Pt3df operator+=( const Pt3df& pt);
	Pt3df operator-=( const Pt3df& pt);
	Pt3df operator*=( const float& factor );		
	Pt3df operator/=( const float&  dividend);
	
	Pt3df operator+(const Pt3df& pt)const;
	Pt3df operator-(const Pt3df& pt)const;
	double operator*(const Pt3df& pt)const; //���
	Pt3df operator^(const Pt3df& pt)const; //���

	Pt3df operator*(float scale)   const;
	Pt3df operator/(float dividend)const;

	Pt3df operator-()const; // һԪ����

 	float Length() const;
	//��㵽pt����
	float Distance(const Pt3df& pt) const;
		
	//��㵽pt���Ծ���
	float FabsDist(const Pt3df& pt) const;
	 
	Pt3df	CrossProduct(const Pt3df& v) const;

	float  DistToLine(const Pt3df& p0, const Pt3df& p1);

	friend	GLOABL_EXT_CLASS Pt3df  operator*(const float& scale,const Pt3df& pt); 

};
 


inline Pt3df  operator*(const float& scale,const Pt3df& pt)
{
	return Pt3df(scale * pt.x , scale * pt.y, scale * pt.z);
}
 