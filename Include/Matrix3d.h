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

#ifndef MATRIX3D_H
#define MATRIX3D_H


class Pt3d; 
class Pt3df; 
class Pt2d;
class Pt2df;

class GLOABL_EXT_CLASS  CMatrix3d 
{
public:
    double x[4][4];
public:

    CMatrix3d(){Identity();};
	CMatrix3d(double* pMtx);
	~CMatrix3d();

	void Identity();//���쵥λ����
	
	// |M| *= |A| �������
	CMatrix3d& operator*= (const CMatrix3d& A);		

	//��������	
	CMatrix3d GetInverse() const;

	//����ƽ�ƾ���	
    CMatrix3d Move(const double& fx,const double& fy,const double& fz);
	
	//����������ž��� ���ԭ�����
	CMatrix3d Scale(const double& fScaleX,const double& fScaleY,const double& fScaleZ);
	//����������ž��� ���pt����
	CMatrix3d Scale(const double& ptX,const double& ptY,const double& ptZ,const double& fScaleX,const double& fScaleY,const double& fScaleZ);
	
	//������X����תAngle�ǶȾ���(˳ʱ��Ϊ+)
	CMatrix3d RotateX(const double& fRadAngle);

	//������X����תAngle�ǶȾ���(˳ʱ��Ϊ+)
	CMatrix3d RotateY(const double& fRadAngle);

	//������Z����תAngle�ǶȾ���(˳ʱ��Ϊ+)
	CMatrix3d RotateZ(const double& fRadAngle);

	//�����Ƶ�(fx,fy)��תAngle�ǶȾ���
	CMatrix3d RotateZ(const double& ptX,const double& ptY,const double& fRadAngle);
 
	//��������ptAxis(����Ϊ��λ����) ��תָ���ǶȾ���
	CMatrix3d RotateAxis(const double& ptAxisX,const double& ptAxisY,const double& ptAxisZ,const double& fRadAngle);
 
	
	//�������X��Գƾ���
	CMatrix3d MirrorX();
	//�������Y��Գƾ���
	CMatrix3d MirrorY();
	//�������Y��Գƾ���
	CMatrix3d MirrorZ();
	
	//����ת�þ���
	CMatrix3d Transpose();

	friend GLOABL_EXT_CLASS CMatrix3d operator*(const CMatrix3d& A,const CMatrix3d& B);	
	friend GLOABL_EXT_CLASS Pt3d operator*(const CMatrix3d& M,const Pt3d& pt);	
	friend GLOABL_EXT_CLASS Pt3d operator*(const Pt3d& pt,const CMatrix3d& M);	
	friend GLOABL_EXT_CLASS Pt3df operator*(const Pt3df& pt,const CMatrix3d& M);	
};

// M = A * B �������
GLOABL_EXT_CLASS CMatrix3d operator*(const CMatrix3d& A,const CMatrix3d& B);
GLOABL_EXT_CLASS Pt3d operator*(const CMatrix3d& M,const Pt3d& pt);	
GLOABL_EXT_CLASS Pt3d operator*(const Pt3d& pt,const CMatrix3d& M);	

GLOABL_EXT_CLASS Pt3d operator*(const CMatrix3d& M, const Pt2d& pt);
GLOABL_EXT_CLASS Pt3d operator*(const Pt2d& pt, const CMatrix3d& M);
GLOABL_EXT_CLASS Pt3df operator*(const Pt2df& pt, const CMatrix3d& M);
 
#endif