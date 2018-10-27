/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� CMatrix2d.h
* �ļ���ʶ�� 
* ժҪ�� 2ά�任�����ඨ��
*           
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#pragma once



//  
//   [a  d  g]
//   [b  e  h]  
//   [c  f  i]  
//  
//   [a d] 
//   [b e] �����ţ���ת���Գƣ����б任 
//

//   [c f] ��ƽ�Ʊ任 

//   [g]
//   [h]   ��ͶӰ�任 

//�任����
const int TRANSFORM_NO    = 0;            //��
const int TRANSFORM_MOVE  = 0x0001;            //�ƶ�
const int TRANSFORM_SCALE = 0x0002;            //����
const int TRANSFORM_MIRROR= 0x0004;            //����
const int TRANSFORM_ROTATE= 0x0008;            //��ת
const int TRANSFORM_SHEAR = 0x0010;            //����
const int TRANSFORM_MIX   = 0x00FF;            //���
class Pt2d;
class Pt3d;
class Box2d;

 
class GLOABL_EXT_CLASS CMatrix2d 
{
public:
    double x[3][3];
public:
	CMatrix2d(double* pBuf);
    CMatrix2d(){Identity();};
	~CMatrix2d();

	void Set(double* pBuf);
	void Get(double  mtx[9]);
	void Identity();//���쵥λ����
	
	// |M| *= |A| �������
	CMatrix2d& operator*= (const CMatrix2d& A);		

	//��������	
	CMatrix2d GetInverse() const;

	//����ƽ�ƾ���	
    CMatrix2d Move(const double& fx,const double& fy);
	
	//����������ž��� ���ԭ�����
	CMatrix2d Scale(const double& fScaleX,const double& fScaleY);
	//����������ž��� ���pt����
	CMatrix2d Scale(const double& ptX,const double& ptY,const double& fScaleX,const double& fScaleY);
	
	//������ԭ����תAngle�ǶȾ���(˳ʱ��Ϊ+)
	CMatrix2d Rotate(const double& fRadAngle);
	//�����Ƶ�(fx,fy)��תAngle�ǶȾ���
	CMatrix2d Rotate(const double& ptX,const double& ptY,const double& fRadAngle);

	//�������X��Գƾ���
	CMatrix2d MirrorX();
	//�������Y��Գƾ���
	CMatrix2d MirrorY();
	//�������ԭ��Գƾ���
	CMatrix2d MirrorOrigin();
	//�������ֱ��(x1,y1),(x2,y2)�Գƾ���
	CMatrix2d Mirror(const double& x1,const double& y1,const double& x2,const double& y2);

	//������о���
	CMatrix2d ShearX(const double& xShear,const double& yShear,const double& fRadAngle);
	CMatrix2d ShearY(const double& xShear,const double& yShear,const double& fRadAngle);

	//����ת�þ���
	CMatrix2d Transpose();

	 

};

// M = A * B �������
GLOABL_EXT_CLASS CMatrix2d operator*(const CMatrix2d& A,const CMatrix2d& B);
GLOABL_EXT_CLASS Pt2d operator*(const CMatrix2d& M,const Pt2d& pt);	
GLOABL_EXT_CLASS Pt2d operator*(const Pt2d& pt,const CMatrix2d& M);	

GLOABL_EXT_CLASS Box2d operator*(const CMatrix2d& M,const Box2d& b);	
GLOABL_EXT_CLASS Box2d operator*(const Box2d& b,const CMatrix2d& M);	

GLOABL_EXT_CLASS  Pt3d operator*(const CMatrix2d& M,const Pt3d& pt);	
GLOABL_EXT_CLASS Pt3d operator*(const Pt3d& pt,const CMatrix2d& M);	
