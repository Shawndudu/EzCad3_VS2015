/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� Box3df.h
* �ļ���ʶ�� 
* ժҪ�� 2ά��Χ���ඨ��
*           
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/


#pragma once

 

#include "pt2d.h"
#include "Pt3df.h"
#include "Box2d.h"
class GLOABL_EXT_CLASS Box3df
{
public:
	Box3df(void);
public:
	~Box3df(void);

public:
	Pt3df a;
    Pt3df b;
public:
   
    Box3df(const float& ax,const float& ay,const float& az,const float& bx,const float& by,const float& bz );
    Box3df(const Pt3df& p1, const Pt3df& p2 ); 
    Box3df(const Box3df& r);
	Box2d GetBox2d();
	void SetBox(float ax,float ay,float az,float bx,float by,float bz );
	void SetBox(Pt3df p1, Pt3df p2 );
	void SetBox(const Pt3df& p1, const Pt3df& p2,const Pt3df& p3 );
	void SetBox(const Box3df& r);
	void AddPoint(const Pt3df& pt);
	void AddPoint(const float& x,const float& y ,const float& z);

	void  GetCornerPt(Pt3df pt[8])const;

	Pt3df  GetCenterPt()const;
	float Width()const;
	float Height()const;
	float HeightZ()const;

	void EmptyBox();        
    void Intersect( const Box3df &r ); 
    void Union( const Box3df &r );     
    void Adjust();
	void Move(const float& x,const float& y,const float& z);
    
    BOOL IsContains( const Pt3df &p ,const float& err) const; 	
	BOOL IsContains( const float &x , const float &y,const float &z,const float& err) const;
	
    BOOL IsEmpty() const;    
    BOOL IsIntersect( const Box3df &r ,const float& err) const ;
	BOOL IsInclude( const Box3df &r , const float& err) const;
	BOOL IsInclude(const Box2d &r, const float& err) const;

	Box3df  	operator +  ( const Box3df &r );
    void	operator += ( const Box3df &r );
    void	operator =  ( const Box3df &r );
    BOOL	operator == ( const Box3df &r );
};
