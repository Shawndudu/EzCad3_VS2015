/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� Box2df.h
* �ļ���ʶ�� 
* ժҪ�� 2ά��Χ���ඨ��
*           
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/


#pragma once

 

#include "Pt2df.h"
 
class GLOABL_EXT_CLASS Box2df
{
public:
	Box2df(void);
public:
	~Box2df(void);

public:
	Pt2df a;
    Pt2df b;
public:
   
    Box2df(const float& ax,const float& ay,const float& bx,const float& by );
    Box2df(const Pt2df& p1, const Pt2df& p2 );
    Box2df(const Box2df& r);
	 
	void SetBox(float ax,float ay,float bx,float by );
	void SetBox(Pt2df p1, Pt2df p2 );
	void SetBox(const Box2df& r);
 
	void AddPoint(const Pt2df& pt);
	void AddPoint(const float& x,const float& y);

	void  GetCornerPt(Pt2df pt[4])const;

	Pt2df  GetCenterPt()const;
	float Width()const;
	float Height()const;

	void EmptyBox();        
    void Intersect( const Box2df &r ); 
    void Union( const Box2df &r );     
    void Adjust();
	void Move(const float& x,const float& y);
    
    BOOL IsContains( const Pt2df &p ,const float& err) const; 	
	BOOL IsContains( const float &x , const float &y,const float& err) const;
	
    BOOL IsEmpty() const;    
    BOOL IsIntersect( const Box2df &r ,const float& err) const ;
	BOOL IsIntersect(const float& sx,const float& sy,const float& ex,const float& ey,const float& err) const;
    BOOL IsInclude( const Box2df &r ) const;
        
	
	Box2df  	operator +  ( const Box2df &r );
    void	operator += ( const Box2df &r );
    void	operator =  ( const Box2df &r );
    BOOL	operator == ( const Box2df &r );
};
