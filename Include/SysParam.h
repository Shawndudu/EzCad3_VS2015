#pragma once

 



const int MAXSTRING_LEN  = 256;
const int MAX_WORK_NUM  =  20 ;   //������Ա�� 
const int MAX_PARAM_NUM =  1024;
const int MAX_COLOR_NUM = 256;

#define EZCAD_DEFAULT_LANGFILE   _T("DEFENGLISH")

#define EZCAD_LANG_ENGLISH       _T("ENGLISH")
#define EZCAD_LANG_CHINESE_SIMP  _T("CHINESE_SIMPLIFIED")
#define EZCAD_LANG_CHINESE_TRAD  _T("CHINESE_TRADITIONAL")

/////////////////////////////////////////////////
//Int
const int INT_PARAM_UNITTYPE = 0;
const int INT_PARAM_PRIMARYLANGID=1;
const int INT_PARAM_SUBLANGID=2;
const int INT_PARAM_MAXUNDONUM=3;
const int INT_PARAM_MAXREDONUM=4;
const int INT_PARAM_ENUSERPSW=6;
const int INT_PARAM_WORKERNUM=7;
const int INT_PARAM_AUTOSAVE=8;
const int INT_PARAM_AUTOSAVETIME=9;
const int INT_PARAM_WORKSPACETYPE=10;      //������������=0���� =1Բ�� 
const int INT_PARAM_SHOWWORKSPACE=11;      //��ʾ�������� 
const int INT_PARAM_SHOWCROSSLINE=12;      //��ʾ��������ʮ����
const int INT_PARAM_SHOWGRID=13;           //��ʾ����
const int INT_PARAM_SHOWGUILDLINE=14;      //��ʾ������
const int INT_PARAM_SNAPGRID =15;          //��׽�����
const int INT_PARAM_SNAPGUILDLIINE =16;    //��׽������
const int INT_PARAM_SNAPENTITY=17;         //��׽����
const int INT_PARAM_MOVEORIGINFLAG=18;     //�ƶ���ԭ�㷽ʽ 
const int INT_PARAM_DEFAULTPENNO=19;       //Ĭ�ϱʺ�
const int INT_PARAM_DEFFONT_FONTID=20;     //�����ID��
const int INT_PARAM_DEFFONT_ALIGNTYPE=21;  //����ģʽ
const int INT_PARAM_DEFFONT_ORIENTATION=22;//�������з���
const int INT_PARAM_DEFFONT_ENSPACEMODE=23;   //ʹ���Զ����ı����
const int INT_PARAM_DEFFONT_SPACEMODE=24;   //���ģʽ
const int INT_PARAM_DEFFONT_BOLD=25;   
const int INT_PARAM_DEFFONT_ITALIC=26;  
const int INT_PARAM_SHOWRULER=27;      //��ʾ���
const int INT_PARAM_COORPOSITION=28;      //��ʾ����λ�õĻ���

const int INT_PARAM_BARCODE_ATTRIB=30;
const int INT_PARAM_BARCODE_ROW=31;
const int INT_PARAM_BARCODE_COL=32;
const int INT_PARAM_BARCODE_LEVEL=33;
const int INT_PARAM_BARCODE_SIZEMODE=34;
const int INT_PARAM_BARCODE_MASHPAT=35;
const int INT_PARAM_BARCODE_INTERHATCH=36;

const int INT_PARAM_DXFUNITISINCH=40;
const int INT_PARAM_IMPORTSHOWPREVIEW=41;
const int INT_PARAM_IMPORTTOCENTER=42;
const int INT_PARAM_EXTAXIS_ID=43;
const int INT_PARAM_EXTAXIS_MOVEFLAG=44;
const int INT_PARAM_EXTAXIS_RELATIVE=45;
const int INT_PARAM_EXTAXIS_UNIT=46;
const int INT_PARAM_INPUTIOMASK=47;
const int INT_PARAM_OUTPUTIOMASK=48;

const int INT_PARAM_BMP_DEFFIXEDDPI=49;
const int INT_PARAM_BMP_DPI=50;
const int INT_PARAM_BMP_INVERT=51;
const int INT_PARAM_BMP_GRAY=52;
const int INT_PARAM_BMP_BIDIE=53;
const int INT_PARAM_BMP_DITHER=54;
const int INT_PARAM_BMP_SCANY=55;
const int INT_PARAM_BMP_DRILLMODE=56;
const int INT_PARAM_BMP_PIXELPOWER=57;
const int INT_PARAM_BMP_ENLINEINC=58;
const int INT_PARAM_BMP_LINEINC=59;
const int INT_PARAM_BMP_DISMARKLOWGRAY=60;
const int INT_PARAM_BMP_MINLOWGRAY=61;

const int INT_PARAM_HATCH_ENCONTOUR=62;
const int INT_PARAM_BMP_SCANINVERT = 63;
const int INT_PARAM_HATCH_CONTOURFIRST=64;
const int INT_PARAM_H1_ENABLE=65;
const int INT_PARAM_H1_PENNO=66;
const int INT_PARAM_H1_ATTRIB=67;
const int INT_PARAM_H1_EDGELOOP=68;
const int INT_PARAM_H2_ENABLE=69;
const int INT_PARAM_H2_PENNO=70;
const int INT_PARAM_H2_ATTRIB=71;
const int INT_PARAM_H2_EDGELOOP=72;
const int INT_PARAM_H3_ENABLE=73;
const int INT_PARAM_H3_PENNO=74;
const int INT_PARAM_H3_ATTRIB=75;
const int INT_PARAM_H3_EDGELOOP=76;

const int INT_PARAM_SPIRAL_MODE=77;
const int INT_PARAM_SPIRAL_DIR=78;
const int INT_PARAM_SPIRAL_OUTSIDELOOP=79;
const int INT_PARAM_SPIRAL_INSIDELOOP=80;

const int INT_PARAM_BMP_OPTIMIZE=81;
const int INT_PARAM_PROJECTVIEW = 82;//ʹ��ͶӰ�۲�

const int INT_PARAM_FASTSHOW = 83;//������ʾ
const int INT_PARAM_SHOWCURVEDIR = 84;//��ʾ���߷���

const int INT_PARAM_BARCODE_PTNUM = 85;
const int INT_PARAM_BARCODE_DELCENBLK = 86;
const int INT_PARAM_BARCODE_DELNUMX = 87;
const int INT_PARAM_BARCODE_DELNUMY = 88;
const int INT_PARAM_BARCODE_INVERTEDGECNT = 89;
 
const int INT_PARAM_SLICEMAXTOMIN = 90;
const int INT_PARAM_SNAPMESHVERTEX = 91;

const int INT_PARAM_HATCHONEBYONE = 92;
const int INT_PARAM_CALCTHREADCNT = 93;
const int INT_PARAM_RECTMESHRESOL = 94;//�����澫��

const int INT_PARAM_PENLIST_HIDE = 95; 

const int INT_PARAM_MAXINDEX=96;

/////////////////////////////////////////////////
//Double
const int DOUBLE_PARAM_WORKSPACEX=0;
const int DOUBLE_PARAM_WORKSPACEY=1;
const int DOUBLE_PARAM_WORKSPACEW=2;
const int DOUBLE_PARAM_WORKSPACEH=3;
const int DOUBLE_PARAM_WORKSPACEORIGINX=4;
const int DOUBLE_PARAM_WORKSPACEORIGINY=5;
const int DOUBLE_PARAM_PASTEOFFSETX=6;
const int DOUBLE_PARAM_PASTEOFFSETY=7;
const int DOUBLE_PARAM_NUDGESMALLDIST=8;
const int DOUBLE_PARAM_NUDGEBIGDIST=9;
const int DOUBLE_PARAM_NUDGEANGLE=10;
const int DOUBLE_PARAM_ORIGINX=11;
const int DOUBLE_PARAM_ORIGINY=12;
const int DOUBLE_PARAM_GRIDDIST=13;
const int DOUBLE_PARAM_DRAWPOINTSIZE=14;
const int DOUBLE_PARAM_DEFFONT_HEIGHT = 20;
const int DOUBLE_PARAM_DEFFONT_WIDTH = 21;
const int DOUBLE_PARAM_DEFFONT_SPACE = 22;
const int DOUBLE_PARAM_DEFFONT_ANGLE = 23;
const int DOUBLE_PARAM_DEFFONT_NULLWIDTH = 24;
const int DOUBLE_PARAM_DEFFONT_LINESPACE = 25;
const int DOUBLE_PARAM_DEFFONT_TEXTSPACE = 26;
const int DOUBLE_PARAM_BARCODE_HEIGHT=30;
const int DOUBLE_PARAM_BARCODE_NARWIDTH=31;
const int DOUBLE_PARAM_BARCODE_WIDTHSCALE0=32;
const int DOUBLE_PARAM_BARCODE_WIDTHSCALE1=33;
const int DOUBLE_PARAM_BARCODE_WIDTHSCALE2=34;
const int DOUBLE_PARAM_BARCODE_WIDTHSCALE3=35;
const int DOUBLE_PARAM_BARCODE_SPACESCALE0=36;
const int DOUBLE_PARAM_BARCODE_SPACESCALE1=37;
const int DOUBLE_PARAM_BARCODE_SPACESCALE2=38;
const int DOUBLE_PARAM_BARCODE_SPACESCALE3=39;
const int DOUBLE_PARAM_BARCODE_MIDSPACESCALE=40;
const int DOUBLE_PARAM_BARCODE_QUIETLEFT=41;
const int DOUBLE_PARAM_BARCODE_QUIETMID=42;
const int DOUBLE_PARAM_BARCODE_QUIETRIGHT=43;
const int DOUBLE_PARAM_BARCODE_QUIETTOP=44;
const int DOUBLE_PARAM_BARCODE_QUIETBOTTOM=45;
const int DOUBLE_PARAM_BARCODE_DIAMETER=46;
const int DOUBLE_PARAM_BARCODE_LINESPACE=47;
const int DOUBLE_PARAM_BARCODE_BEAMDIAMETER=48;
const int DOUBLE_PARAM_EXTAXIS_PULSEPERUNIT=49;
const int DOUBLE_PARAM_EXTAXIS_MOVEDIST=50;
const int DOUBLE_PARAM_EXTAXIS_MINSPD=51;
const int DOUBLE_PARAM_EXTAXIS_MAXSPD=52;
const int DOUBLE_PARAM_EXTAXIS_ACCTIME=53;
const int DOUBLE_PARAM_BMP_POINTTIME=54;
const int DOUBLE_PARAM_H1_EDGEDIST=55;
const int DOUBLE_PARAM_H1_LINEDIST=56;
const int DOUBLE_PARAM_H1_STARTOFFSET=57;
const int DOUBLE_PARAM_H1_ENDOFFSET=58;
const int DOUBLE_PARAM_H1_ANGLE=59;
const int DOUBLE_PARAM_H1_ROANGLE=60;
const int DOUBLE_PARAM_H1_LINEREDU=61;
const int DOUBLE_PARAM_H1_LOOPDIST=62;
const int DOUBLE_PARAM_H2_EDGEDIST=63;
const int DOUBLE_PARAM_H2_LINEDIST=64;
const int DOUBLE_PARAM_H2_STARTOFFSET=65;
const int DOUBLE_PARAM_H2_ENDOFFSET=66;
const int DOUBLE_PARAM_H2_ANGLE=67;
const int DOUBLE_PARAM_H2_ROANGLE=68;
const int DOUBLE_PARAM_H2_LINEREDU=69;
const int DOUBLE_PARAM_H2_LOOPDIST=70;
const int DOUBLE_PARAM_H3_EDGEDIST=71;
const int DOUBLE_PARAM_H3_LINEDIST=72;
const int DOUBLE_PARAM_H3_STARTOFFSET=73;
const int DOUBLE_PARAM_H3_ENDOFFSET=74;
const int DOUBLE_PARAM_H3_ANGLE=75;
const int DOUBLE_PARAM_H3_ROANGLE=76;
const int DOUBLE_PARAM_H3_LINEREDU=77;
const int DOUBLE_PARAM_H3_LOOPDIST=78;

const int DOUBLE_PARAM_SPIRAL_PITCHMIN=79;
const int DOUBLE_PARAM_SPIRAL_PITCHMAX=80;
const int DOUBLE_PARAM_SPIRAL_PITCHINC=81;
const int DOUBLE_PARAM_SPIRAL_MINRADIUS=82;

const int DOUBLE_PARAM_H1_CYCCOUNT = 83;
const int DOUBLE_PARAM_H2_CYCCOUNT = 84;
const int DOUBLE_PARAM_H3_CYCCOUNT = 85;
const int DOUBLE_PARAM_BARCODE_BIDIROFFSET = 86;

const int DOUBLE_PARAM_SLICE_MINZ = 87; 
const int DOUBLE_PARAM_SLICE_MAXZ = 88;
const int DOUBLE_PARAM_SLICE_THICKNESS = 89;

const int DOUBLE_PARAM_CURVE2LINE_TOL = 90;
const int DOUBLE_PARAM_MAXINDEX = 91;

/////////////////////////////////////////////////
//Color
const int SYS_CLR_BACKGROUND = 0;//������ɫ
const int SYS_CLR_WORKSPACE  = 1;//�����ռ���ɫ
const int SYS_CLR_GRIDLINE   = 2;//��������ɫ
const int SYS_CLR_GRIDPOINT  = 3;//�������ɫ
const int SYS_CLR_GUILDLINE  = 4;//��������ɫ
const int SYS_CLR_ARRAYENT   = 5;//���ж�����ɫ
const int SYS_CLR_NODE       = 6;//�ڵ������ɫ
const int SYS_CLR_NODECTRL   = 7;//�ڵ��ֱ�������ɫ
const int SYS_CLR_TRANFORN   = 8;//����任��ɫ
const int SYS_CLR_SNAP       = 9;//��׽��ɫ
const int SYS_CLR_PEN0       = 10;//Pen0
const int SYS_CLR_PEN1       = 11;//Pen1
const int SYS_CLR_PEN2       = 12;//Pen2
const int SYS_CLR_PEN3       = 13;//Pen3
const int SYS_CLR_PEN4       = 14;//Pen4
const int SYS_CLR_PEN5       = 15;//Pen5
const int SYS_CLR_PEN6       = 16;//Pen6
const int SYS_CLR_PEN7       = 17;//Pen7
const int SYS_CLR_PEN8       = 18;//Pen8
const int SYS_CLR_PEN9       = 19;//Pen9
const int SYS_CLR_PEN10       = 20;//Pen10
const int SYS_CLR_PEN11       = 21;//Pen11
const int SYS_CLR_PEN12       = 22;//Pen12
const int SYS_CLR_PEN13       = 23;//Pen13
const int SYS_CLR_PEN14       = 24;//Pen14
const int SYS_CLR_PEN15       = 25;//Pen15
const int CLR_PARAM_MAXINDEX = 26;
/////////////////////////////////////////////////
//String
const int SYS_STR_LANGFILE = 0;//�����ļ�
const int SYS_STR_BARCODE_NAME = 1;
const int SYS_STR_EXE_START_FILE = 2;
const int SYS_STR_EXE_ENDT_FILE = 3;
const int SYS_STR_PSW_ADMIN = 4;
const int SYS_STR_PSW_DESIGNER = 5;
const int SYS_STR_PSW_DRAFT = 6;
 

const int SYS_STR_WORKNAME1=10;
//....
//.....SYS_STR_WORKNAME20=29;
const int SYS_STR_WORKPSW1=30;
//....
//.....SYS_STR_WORKPSW20=49;
const int STR_PARAM_MAXINDEX = 51;

 
 
 
class GLOABL_EXT_CLASS  CSysParam
{
private:
	int        m_nIntParam[MAX_PARAM_NUM];
	double     m_dDoubleParam[MAX_PARAM_NUM];
	TCHAR      m_strStringParam[MAX_PARAM_NUM][MAXSTRING_LEN];
	COLORREF   m_clrColorParam[MAX_COLOR_NUM];
public:
	CSysParam();
	
	int  ReadParamFile(CString szParamFile);
	int  SaveParamFile(CString szParamFile);
 
	void ChangeLengthUnit(double dScale);

	void SetParamInt(int index,int value);
	void SetParamDouble(int index,double value);
	void SetParamString(int index,CString value);
	void SetParamClr(int index,COLORREF value);

	int GetParamInt(int index)const;
	double GetParamDouble(int index)const;
	CString GetParamString(int index)const;
	COLORREF GetParamClr(int index)const;
	 
};

GLOABL_EXT_CLASS  CSysParam* gf_GetSysParam();

GLOABL_EXT_CLASS void gf_SetSysParam(CSysParam* pCfg);

GLOABL_EXT_CLASS  int  gf_ReadSysParamFile();
GLOABL_EXT_CLASS  int  gf_SaveSysParamFile(); 