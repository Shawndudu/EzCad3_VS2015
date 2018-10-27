/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� Errcode.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/
#pragma once

#define ERR_SUCCESS       0   //�ɹ� 

#define ERR_SERIAL_READ    1   //���ļ�����
#define ERR_SERIAL_WRITE   2   //д�ļ�����
#define ERR_SERIAL_HANDLE  3   //���ļ����
#define ERR_SERIAL_UNKNOW  4   //δ֪�ļ�
#define ERR_SERIAL_FORMAT  5   //�ļ���ʽ����
#define ERR_SERIAL_VERSION 6   //�ļ��汾����
#define ERR_SERIAL_CRC     7
#define ERR_SERIAL_CLIENTID     8//�ͻ�ID����

//�����붨��

#define ERR_PLUG_NORMAL           11    //һ�����
#define ERR_PLUG_SKIP             12    //���Դ���
#define ERR_PLUG_MEMORY           13    //�ڴ����

#define ERR_PLUG_FILE_OPEN        14    //�ļ��򿪴���
#define ERR_PLUG_FILE_CREATE      15    //�ļ���������
#define ERR_PLUG_FILE_READ        16    //�ļ�������
#define ERR_PLUG_FILE_WRITE       17    //�ļ�д����
#define ERR_PLUG_FILE_FORMAT      18    //�ļ���ʽ����
#define ERR_PLUG_FILE_VERSION     19    //��֧�ֵ��ļ��汾

#define ERR_CFG_OPENFILE   51
#define ERR_CFG_READ       52
#define ERR_CFG_WRITE      53
#define ERR_CFG_IDENTIFY   54
#define ERR_CFG_VER        55
#define ERR_CFG_SIZE       56


#define ERR_UNKNOWN        100    //δ֪����