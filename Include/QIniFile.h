/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� QIniFile.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/


#pragma once

#include <afxtempl.h>
//#include <iostream.h>

 

class  GLOABL_EXT_CLASS CQIniFile  
{	
private:	
	CString m_szIniFile;
	
	//all keys are of this time
	struct key
	{		
		CArray<CString, CString> values; //list of values in key		
		CArray<CString, CString> names ; //corresponding list of value names
	};
	
	CArray<key, key> keys; //list of keys in ini
	
	CArray<CString, CString> names; //corresponding list of keynames	
	
private:
	//overloaded to take CString
//	istream & getline( istream & is, CString & str );

	//returns index of specified value, in the specified key, or -1 if not found
	int FindValue(int keynum, CString valuename);

	//returns index of specified key, or -1 if not found
	int FindKey(CString keyname);
	
public:	
	CString error;//will contain error info if one occurs ended up not using much, just in ReadFile and GetValue	
public:	
	CQIniFile();	
	CQIniFile(CString inifile);	
	virtual ~CQIniFile();	
	void SetPath(CString newfile);

	void Reset();//deletes all stored ini data	
	
	BOOL ReadFile();	                
	void WriteFile();
	
	CString GetKeyName(int nKey);

	int  GetNumKeys();//returns number of keys currently in the ini
	
	int  GetNumValues(CString keyname);//returns number of values stored for specified key

	//gets value of [keyname] valuename = 
	//overloaded to return CString, int, and double,
	//returns "", or 0 if key/value not found.  Sets error member to show problem
	
	CString GetValue(CString keyname, CString valuename);
	int     GetValueI(CString keyname, CString valuename); 
	double  GetValueF(CString keyname, CString valuename);

	//sets value of [keyname] valuename =.
	//specify the optional paramter as false (0) if you do not want it to create
	//the key if it doesn't exist. Returns true if data entered, false otherwise
	//overloaded to accept CString, int, and double
	BOOL SetValue (CString key, CString valuename, CString value, BOOL create = 1);
	BOOL SetValueI(CString key, CString valuename, int value, BOOL create = 1);
	BOOL SetValueF(CString key, CString valuename, double value, BOOL create = 1);

	//deletes specified value 
	//returns true if value existed and deleted, false otherwise
	BOOL DeleteValue(CString keyname, CString valuename);

	//deletes specified key and all values contained within
	//returns true if key existed and deleted, false otherwise
	BOOL DeleteKey(CString keyname);
};


