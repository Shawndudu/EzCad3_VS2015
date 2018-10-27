/*
* Copyright (c) 2005, ��������ӿƼ����޹�˾
* All rights reserved.
*
* �ļ����ƣ� QGlobal.h
* �ļ���ʶ��
* ժҪ��
*
* �汾��3.0
* ��    �ߣ�qy
* ������ڣ�2010��3��
* �汾��¼: �����ļ�
*/

#pragma once
 

class CEntity;
class CEntMgr;
class Pt2d;

const int USERTYPE_ADMIN=0;
const int USERTYPE_DESIGN=1;
const int USERTYPE_WORK=2;
const int USERTYPE_DRAFTSMAN=3;

GLOABL_EXT_CLASS  void gf_SetMainFrame(CFrameWnd* pWnd);
GLOABL_EXT_CLASS  CFrameWnd* gf_GetMainFrame();

class  GLOABL_EXT_CLASS QGlobal
{
public:
	static CString     gf_GetEzdFileSuffix();

	static void        gf_SetClipboardFormat(UINT nFormat);
	static UINT        gf_GetClipboardFormat();

	//���ֽ��ַ�תΪ˫�ֽ��ַ�
	static WORD        gf_CharToDoubleByte(const BYTE s[3]); 
	static char*       gf_StrToCharDelBuf(CString str);
	static BOOL        IsDemoVersion();
	static int         gf_UnicodeToAnsi(LPWSTR lpWideCharStr, char* AnsiStr, int AnsiSize); 
	static int         gf_AnsiToUnicode(char* pAnsiStr, LPWSTR lpWideCharStr, int wideSize);

	static CString     gf_CharToStr(char* pCharStr);

	static double      ATOF(TCHAR* pWideStr);
	static double      ATOF(CString str);
	static int         ATOI(CString str);

	static void        Log(CString strLog);

	static CString     gf_Str(CString strID, CString strDefault);
	static void        gf_SetWorkPath(const CString& szPath);
	static CString     gf_GetWorkPath();

	static CString     gf_GetFontPath();//�õ���ǰ����Ŀ¼
	static CString     gf_GetLangPath();//�õ���ǰ�����ļ�Ŀ¼
	static CString     gf_GetParamPath();
	static CString     gf_GetResourcePath();
	static CString     gf_GetCorFilePath();

	static CString     gf_GetCurUserName();//�õ���ǰ�û�����
	static void        gf_SetCurUserName(CString str);//���õ�ǰ�û�����


	static BOOL  IsFileExist(CString strFile);
	static CString GetFileName(CString strFile);

	static BOOL        gf_InitLanguage();

	//����һ���ַ����ж������ַ���
	static int gf_GetLineNum(CString strText);

	//�õ�һ���ַ�����ָ���е��ַ���
	static CString gf_GetLineNoStr(int lineno, const CString& strText, BOOL& bIsEnd);

	static CString gf_LoadAllLineStr(CString filename);

	static CString gf_LoadLineNoStrFromFile(int lineno, CString filename, BOOL& bIsEnd, int& nFileLineNum);

	static BOOL gf_IsValidLangFile(CString file);
	static void gf_SetLanguageFileName(CString str);
	static CString gf_GetLanguageFileName();

	//��ָ��Ŀ¼����ָ���ļ��������ҵ����ļ������ļ�����
	static int gf_FindAllFileInPath(CString szFindFileName, CString szPath, int maxFile, CString* szFile);


	//ͨ��ODBCֱ�Ӷ�ȡExcel�ļ�
	static int gf_ReadFromExcel(CString strExcelFile, CString strSheetName, CString strFieldName, int index, CString& strValue, BOOL& bIsEnd);
	static int gf_ReadFieldFromExcel(CString strExcelFile, CString strSheetName, CStringArray& arrayFieldName);

	static CBitmap* gf_DrawPrevBitmap(CWnd* pWnd, int nBMPWIDTH, int nBMPHEIGHT, CEntity* pEnt, int nDrawFlag, CEntMgr* pEM);



	static CString gf_GetUnitStr();//�õ�ϵͳ���ȵ�λ����
	static CString gf_GetUnitStrOfM();//�õ�ϵͳ���ȵ�λ����
	
	static CString gf_GetSpeedUnitStr();

	static CString gf_GetUnitStr(int nUnit);//�õ�ϵͳ���ȵ�λ����
	static CString gf_GetUnitStrOfM(int nUnit);//�õ�ϵͳ���ȵ�λ*0.001����
	
	static CString gf_GetLenStr(double dValue);//�õ�ϵͳ������ʾ�ַ���
	static CString gf_GetIntStr(int nValue);

	//�õ�ָ����λ���͵�ָ�����׳��ȣ�
	static double gf_GetUnitLenFromMM(double dLenMM, int nUnitType);

	//ɾ��С������0
	static void  gf_StrDelZeroAfterDot(CString& str);

	static COLORREF gf_GetXORColor(COLORREF clr);

	static BOOL  InputWnd_GetPoint(CString str, Pt2d& pt, Pt2d ptPre);

	

	static BOOL gf_InitUsbMonitor(CWnd* pWndMonitor);
	static void gf_CloseUsbMonitor();
	static CWnd* gf_GetUsbMonitor();

	static void        gf_SetCurFileName(CString file);
	static CString     gf_GetCurFileName();

	static CString gf_GetFileExtStr(CString szfile);//�õ��ļ����ĺ�׺

	//0590-05FF ϣ������ĸ 
	//0600-06FF ��������ĸ 
	static BOOL gf_IsFromLeftToRightLangChar(TCHAR ch);
	static BOOL gf_IsReadFromLeftToRightLang(CString strLine);

	static CString gf_ChangeOrderChar(CString strLine);
	//�õ���ȷ���ַ�˳����ַ���
	static CString gf_GetRightOrderString(CString String);

	//ASCii�ַ���תΪ˫�ֽ��ַ�
	static int gf_AsciiToDoubleByte(CString String, WCHAR* strbuf, int len);

	static void gf_LoadTxtFile(CString filename, CStringArray& strArray);

	//�Ƿ��ַ���ȫ������
	static BOOL gf_IsDigitalString(CString str);
	static BOOL gf_IsUtf8String(CString str);
	static BYTE* gf_UnicodeToUtf8(CString str, int& nSize);

	//�õ�ָ�����Դ���
	static BYTE* gf_GetStrLangPageByte(int nLangPage, CString strText, int& nLen);

	static void MakeDialogOkCancelBtnToCenter(CDialogEx* pDialog);

	static BOOL gf_MemToFile(CMemFile& memFile, CFile& file);
	static BYTE*  gf_RealWholeBigFile(CString strFile, ULONGLONG& ullSize);

	static int gf_GetCpuProcessorCount();
};


const int SOUND_SUCCESS = 1;      //�ɹ�
const int SOUND_FAILURE = 2;      //ʧ��
const int SOUND_WARN = 3;      //����
GLOABL_EXT_CLASS void   gf_Sound(int bSoundType);

GLOABL_EXT_CLASS void   gf_SleepMs(int ms);