/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� Pt2df.h
* �ļ���ʶ�� 
* ժҪ�� 2ά���ඨ��
*           
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�201��3��
* �汾��¼: �����ļ�
*/

#pragma once
 
class GLOABL_EXT_CLASS Pt2df
{
public:
	Pt2df(void);
	Pt2df(const float fx,const float fy){x =fx;y=fy;};
	Pt2df(const Pt2df& ptCen,const float dLen,const float dRadAngle);
public:
	~Pt2df(void);

	public:
     float x;
     float y;
public:
	
	void Set(const float& fx,const float& fy){x =fx;y=fy;};

	BOOL Normalize();
	
	Pt2df operator+=( const Pt2df& pt);
	Pt2df operator-=( const Pt2df& pt);
	Pt2df operator*=( const float& factor );		
	Pt2df operator/=( const float&  dividend);
	
	Pt2df operator+(const Pt2df& pt)const;
	Pt2df operator-(const Pt2df& pt)const;
	float operator^(const Pt2df& pt)const; //���

	Pt2df operator*(float scale)   const;
	Pt2df operator/(float dividend)const;

	Pt2df operator-()const; // һԪ����

	Pt2df  Rotate(const float& ang);//fAng > 0 ��ʱ����ת fAng < 0 ˳ʱ����ת
	float Length() const;
	float Distance(const Pt2df& pt) const;//��㵽pt����

	//��㵽pt���Ծ���
	float FabsDist(const Pt2df& pt) const;

	float GetAngle(const Pt2df& ptCen) const;//����Ե�ptCen�ĽǶ� //�Ƕ�Ϊ[0��PAI2]����

	//��㵽ֱ�߶ε�ͶӰ��,���ؾ���,����t�͵�
	float GetProjectPt(const Pt2df& pt1,const Pt2df& pt2,float& t,Pt2df& pt)  const;

	//��㵽ֱ�߶ε�ͶӰ��,���� ����t 
	float GetProjectParam(const Pt2df& pt1,const Pt2df& pt2 )  const;

	//��㵽ֱ�߶εĵ��������,���ز���t�;���, 0=<t<=1
	float GetDistToLineSeg(const Pt2df& pt1,const Pt2df& pt2,float& t)  const;

	//��㵽ֱ�ߵ��������ƽ��
	float GetDist2ToLine(const Pt2df& pt1,const Pt2df& pt2)const;
	//friend	 Pt2df  operator*(const float& scale,const Pt2df& pt);

	float GetDistToLine(const Pt2df& p1,const Pt2df& p2)const;
};



 GLOABL_EXT_CLASS Pt2df  operator*(const float& scale,const Pt2df& pt); 
