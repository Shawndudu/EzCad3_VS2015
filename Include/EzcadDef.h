
#pragma once

#define PAI    3.14159265359
#define PAI2   6.28318530718
#define PAI4   12.56637061436
#define PAI1_2 1.5707963268

#define MATH_MIN_FLOAT    (-1.0e120)  //��С����ֵ
#define MATH_MAX_FLOAT    (1.0e120)   //��󸡵�ֵ     
#define MATH_ZERO         1.0e-12     //��
#define MATH_MIN_DIST     1.0e-6      //��С����
#define MATH_MIN_AREA     1.0e-12     //��С���
#define MATH_MIN_DIST2    1.0e-12     //��С����ƽ�� 
#define MATH_MIN_ANG      1.0e-3      //��С�Ƕ�
#define MATH_MIN_T        1.0e-4      //��С����t
#define MATH_MIN_TOL      1.0e-4      //��С�Ҹ����

#define MATH_ERR_SAME     1.0e-12  //�غ����
#define MATH_ERR_INTER    1.0e-6   //�ཻ���
#define MATH_ERR_T        1.0e-4   //����t���

#define MATH_ARC_CW    -1  //˳ʱ��      
#define MATH_ARC_CCW    1  //��ʱ��

#define MATH_POS_ONE     1.0000001
#define MATH_NEG_ONE     0.9999999
#define MATH_MIN_ARC_RADIUS 1.0e-4      //��СԲ���뾶
#define MATH_MAX_ARC_RADIUS 1.0e+8      //���Բ���뾶

#define INCH_TO_MM(x)  ((x) * 25.4)   //Ӣ��תΪ����
#define MM_TO_INCH(x)  ((x) / 25.4)   //����תΪӢ��

#define ANG_TO_RAD(x)  ((x) * 0.0174532925199433)   //�Ƕ�תΪ����
#define RAD_TO_ANG(x)  ((x) * 57.2957795130823)     //����תΪ�Ƕ�

//��λ����
const int UNIT_MM = 0;//����
const int UNIT_INCH = 1;//Ӣ�� 

#define EXPORT_SELECT       0x0001     //��ϵͳ���ݿ��е�ѡ��������
#define EXPORT_PREIMAGE     0x1000     //��ϵͳ���ݿ��е����ж������
#define EXPORT_BINDID       0x0020  


const int CMDTYPE_SYSTEM = 1; //ϵͳ����
const int CMDTYPE_VIEW = 2; //��ͼ����
const int CMDTYPE_DRAW = 3; //��������
const int CMDTYPE_EDIT = 4; //�༭����

							//����
#define CMD_PRIORITY_HIGH    10  //��߼� ����Ƕ�����κμ�����,ÿ���д˼�������ִ��ʱ��������������ջ 
#define CMD_PRIORITY_NORMAL  5   //��ͨ�� ���Ա����Լ�����͵�����Ƕ��
#define CMD_PRIORITY_LOW     0   //��ͼ� ����Ƕ���ڱ��Լ�����ߵ������У��Լ�����Ƕ���κμ�������




#define SUBCMD_PICK_NORMAL      0 //����ѡ��
#define SUBCMD_PICK_DEL         1 //ɾ��ѡ��
#define SUBCMD_PICK_ALL         2 //ȫ��ѡ��
#define SUBCMD_PICK_INVERSE     3 //����ѡ��

#define SUBCMD_PICK_LOCK        5 //ѡ�����
#define SUBCMD_PICK_UNLOCK      6 //����
#define SUBCMD_PICK_UNLOCKALL   7 //ȫ����

#define SUBCMD_PICK_SCALE_LB_RT 10 //��������
#define SUBCMD_PICK_SCALE_LT_RB 11 //��������
#define SUBCMD_PICK_SKETCH_LR   12 //��������
#define SUBCMD_PICK_SKETCH_TB   13 //��������
#define SUBCMD_PICK_MOVE        14 //�ƶ�
#define SUBCMD_PICK_MOVECOPY    15 //�ƶ�����  
#define SUBCMD_PICK_ROTATE      16 //��ת
#define SUBCMD_PICK_DRAG_GL     17 //����������

#define SUBCMD_PICK_CUT         18 
#define SUBCMD_PICK_COPY        19 
#define SUBCMD_PICK_PASTE       20 

#define SUBCMD_PICK_CENTER      21 
#define SUBCMD_PICK_CENTER_X    22 
#define SUBCMD_PICK_CENTER_Y     23 

#define SUBCMD_PICK_PEN         24 

#define SUBCMD_PICK_MIRRORX     25 
#define SUBCMD_PICK_MIRRORY     26 


#define SUBCMD_PICK_COMBINE     27 
#define SUBCMD_PICK_UNCOMBINE   28 
#define SUBCMD_PICK_GROUP       29 
#define SUBCMD_PICK_UNGROUP     30 

#define SUBCMD_PICK_ARRAY       31 
#define SUBCMD_PICK_ROTATEENT   32
#define SUBCMD_PICK_BYPEN       33

#define SUBCMD_PICK_UNGROUPTEXT 34 

#define SUBCMD_PICK_NEWFILE     50 
#define SUBCMD_PICK_OPENFILE    51 
#define SUBCMD_PICK_SAVEFILE    52 

#define SUBCMD_PICK_SPIRALRBRUSH  60  //����������ˢ


#define SUBCMD_PICK_TEST        100 //����

#define CMDPICK_POINTPICK_ERROR  4 //�����ѡ���


const int PICK_NULL = 0;//
const int PICK_DRAWDRAG = 1;//��ѡȡ��״̬
const int PICK_FOCUS = 2;//ѡȡ����״̬
const int PICK_ROTATEFOCUS = 3;//��ת����״̬
const int PICK_MOVEROTATEFOCUS = 4;//�ƶ���ת����״̬
const int PICK_SCALETRANFORM = 5;//�����任״̬
const int PICK_MOVECOPY = 6;//�ƶ������任״̬
const int PICK_ROTATETRANFORM = 7;//��ת�任״̬
const int PICK_SHEARX = 8;//X����״̬   
const int PICK_SHEARY = 9;//Y����״̬   
const int PICK_MOVENODE = 10;//�ƶ��ڵ�״̬
const int PICK_MOVEGUILDLINE = 11;//�ƶ�������״̬	
const int PICK_LOCK = 12;//ѡȡ������״̬	
const int PICK_TEXTCHARSPACE = 13;//�ַ����
const int PICK_SPIRALRBRUSH = 14;//����������ˢ


#define SUBCMD_LAYER_ADD      0 //����ͼ��
#define SUBCMD_LAYER_DEL      1 //ɾ��ѡ��ͼ��

#define SUBCMD_GUIDELINE_CREATE   0
#define SUBCMD_GUIDELINE_MOVE     1
#define SUBCMD_GUIDELINE_BOX      2

#define SUBCMD_ZOOM_IN      0   //�Ŵ�һ���۲�
#define SUBCMD_ZOOM_OUT     1   //��Сһ���۲�
#define SUBCMD_ZOOM_WINDOW  2   //��ѡ�Ŵ�۲�
#define SUBCMD_ZOOM_PICK    3   //�����۲�(��ʾѡ�����)
#define SUBCMD_ZOOM_ALL     4   //ȫ���۲�
#define SUBCMD_ZOOM_PAN     5   //�ƶ��۲�
#define SUBCMD_ZOOM_MOVE    6   //��̬�����۲�
#define SUBCMD_ZOOM_WHEEL   7   //���ַ����۲�

#define SUBCMD_ZOOM_WORKSPACE 10

#define SUBCMD_ZOOM_3D           20 
#define SUBCMD_ZOOM_3D_UP        21 
#define SUBCMD_ZOOM_3D_DOWN      22 
#define SUBCMD_ZOOM_3D_LEFT      23 
#define SUBCMD_ZOOM_3D_RIGHT     24 
#define SUBCMD_ZOOM_3D_FRONT     25 
#define SUBCMD_ZOOM_3D_BACK      26 
#define SUBCMD_ZOOM_3D_ISO       27 
#define SUBCMD_ZOOM_3D_WIRE      28 
#define SUBCMD_ZOOM_3D_RENDER    29 
#define SUBCMD_ZOOM_3D_HIDEMESH  30
#define SUBCMD_ZOOM_3D_RENDERLINE    31

								 //�ӹ�������
#define SUBCMD_WELD				0x0000	
#define SUBCMD_TRIM				0x0001	
#define SUBCMD_INTER    		0x0002


#define SUBCMD_ALIGN_LEFT      0 
#define SUBCMD_ALIGN_RIGHT     1 
#define SUBCMD_ALIGN_VCEN      2

#define SUBCMD_ALIGN_TOP       3
#define SUBCMD_ALIGN_BOTTOM    4
#define SUBCMD_ALIGN_HCEN      5 

#define SUBCMD_ALIGN_CEN       6 
#define SUBCMD_ALIGN_DISTRIBUTION       7 

#define SUBCMD_AUTOCONNECT      0 
#define SUBCMD_BREAKCROSS       1  


								 //�ӹ�������
#define SUBCMD_NODE_NORMAL      0 //�����ڵ�ѡ��
#define SUBCMD_NODE_ADD         1 //���ӽڵ�
#define SUBCMD_NODE_DEL         2 //ɾ���ڵ�
#define SUBCMD_NODE_UNITE       3 //�ںϽڵ�
#define SUBCMD_NODE_SEPARATE    4 //����ڵ�
#define SUBCMD_NODE_TOLINE      5 //����תΪֱ��
#define SUBCMD_NODE_TOARC       6 //����תΪ԰��
#define SUBCMD_NODE_TOBEZ       7 //ֱ��תΪ����
#define SUBCMD_NODE_SHARP       8 //����
#define SUBCMD_NODE_SMOOTH      9 //ƽ��
#define SUBCMD_NODE_SYS         10 //�Գ�
#define SUBCMD_NODE_DIR         11 //����
#define SUBCMD_NODE_CLOSE       12 //�Զ��պ�
#define SUBCMD_NODE_ALIGN       13 //����



#define SUBCMD_DRAW_POINT      0  
#define SUBCMD_DRAW_LINE       1
#define SUBCMD_DRAW_BEZIER     2
#define SUBCMD_DRAW_RECT       3
#define SUBCMD_DRAW_CIR        4
#define SUBCMD_DRAW_ELP        5
#define SUBCMD_DRAW_POLYGON    6
#define SUBCMD_DRAW_SPIRAL     7

#define SUBCMD_DRAW_TEXT       10
#define SUBCMD_DRAW_BARCODE    11
#define SUBCMD_DRAW_BARCODE1    24
#define SUBCMD_DRAW_BMP        12
#define SUBCMD_DRAW_VECTOR     13
#define SUBCMD_DRAW_TIMER      14
#define SUBCMD_DRAW_INPUT      15
#define SUBCMD_DRAW_OUTPUT     16
#define SUBCMD_DRAW_EXTAXIS    17
#define SUBCMD_DRAW_INDEX      18
#define SUBCMD_DRAW_ENCODER    19
#define SUBCMD_DRAW_MESH3D     20 
#define SUBCMD_DRAW_CCD        21
#define SUBCMD_DRAW_INPUTJUMP  22
#define SUBCMD_DRAW_CURVETOPT  23

#define SUBCMD_DRAW_COOR       101
#define SUBCMD_DRAW_CLOSE       102
#define SUBCMD_DRAW_FINISH       103



#define SUBCMD_3DFUN_RUN           0 
#define SUBCMD_3DFUN_MESH3D        1    //��������
#define SUBCMD_3DFUN_SLICEMESH     2    //�ָ�����
#define SUBCMD_3DFUN_SLICE3D       3    //����ָ�����

#define SUBCMD_3DFUN_SLICEGROUP     4    //�ָ��������
#define SUBCMD_3DFUN_ROTATEMESH     5    //��ת����
#define SUBCMD_3DFUN_MOVEMESH       6    //�ƶ�����
#define SUBCMD_3DFUN_PRJ            7    //ͶӰ����
#define SUBCMD_3DFUN_PRJ_DEL        8   //ɾ��ͶӰ����

#define SUBCMD_3DFUN_BASICSHAPE     9    //������������
#define SUBCMD_3DFUN_BMPTOMESH      10   //  
#define SUBCMD_3DFUN_FREEPAINT      11   // ���ɻ��� 
#define SUBCMD_3DFUN_MERGECLOSEVTX      12   //�ϲ�����

#define SUBCMD_MODIFY_ARRAY      0 // 
#define SUBCMD_MODIFY_TOCURVE     1 // 
  

#define SUBCMD_RESORT_1       0
#define SUBCMD_RESORT_BYX     1
#define SUBCMD_RESORT_BYY     2
#define SUBCMD_RESORT_REVERSE 3
#define SUBCMD_RESORT_FINISH  4


#define SPLITATT_INVERT_X     1
#define SPLITATT_INVERT_Y     2
#define SPLITATT_NOTCUT_CHAR  4
#define SPLITATT_YFIRST       8


class GLOABL_EXT_CLASS CEzcadDocParam
{
public:
	CString m_strOpenFileName;
	CString m_strSaveFileName;
	int m_nExportMode;
	CString m_strAuthor;
	CString  m_strDate;
	CString m_strComment;
};


typedef void* PEntity;//Entity pointer
typedef void* PCmdMgr;//Command mannager pointer
typedef void* PEntMgr;//Entity mannager pointer
typedef void* PDrawDC;//Draw device content

typedef void* PPenBox;
typedef void* PMarker;
typedef void* PMarkPen;
typedef void* PMarkParam;


					  ///////////////////////////////////////////////////////////////////////
#define CM_NOTIFY_MODIFY_DATA_PREPARE  0x0001       //�����޸Ŀ�ʼ
#define CM_NOTIFY_MODIFY_DATA_FINISH   0x0002       //�����޸Ľ���
#define CM_NOTIFY_PICK_PREPARE         0x0003       //ѡȡ��ʼ
#define CM_NOTIFY_PICK_FINISH          0x0004       //ѡȡ����
#define CM_NOTIFY_LOCK_PREPARE         0x0005       //ѡȡ���ı�
#define CM_NOTIFY_LOCK_FINISH          0x0006       //ѡȡ������
#define CM_NOTIFY_CURLAYERCHANGE       0x0007       //��ǰ��ı� 

#define CM_NOTIFY_UNITCHANGE           0x000a       //ϵͳ��λ�ı�
#define CM_NOTIFY_INITENTMGR           0x000b        //��ʼ�����������

GLOABL_EXT_CLASS BOOL E3_IsLicenceOk();
GLOABL_EXT_CLASS void E3_InitialKernal(CString szPath);
GLOABL_EXT_CLASS void E3_CloseKernal();
GLOABL_EXT_CLASS BOOL E3_IsLicenceEnable3D();
GLOABL_EXT_CLASS BOOL E3_IsLicenceDynFocus();
GLOABL_EXT_CLASS BOOL E3_IsLicenceEnWeld();

//���õ�ǰϵͳ�����������
GLOABL_EXT_CLASS void E3_SetCmdMgr(PCmdMgr pCM);
//�õ���ǰϵͳ�����������
GLOABL_EXT_CLASS PCmdMgr E3_GetCmdMgr();
//��ǰϵͳ�����������ִ��һ����ʾˢ��
GLOABL_EXT_CLASS void E3_CmdMgrInvalidate();
GLOABL_EXT_CLASS void E3_CmdMgrDraw(PCmdMgr pCM, BOOL bReDrawBack);
//��ǰϵͳ����������������һ����Ҫ����ϵͳ��Ϣ�Ĵ��� 
GLOABL_EXT_CLASS void E3_CmdMgrAddEntityWnd(PCmdMgr pCM, CWnd* pWnd);
 GLOABL_EXT_CLASS void E3_CmdMgrSetStatusWnd(PCmdMgr pCM, CMFCStatusBar* pWnd);
//����������ָ������
GLOABL_EXT_CLASS void E3_CmdMgrRunCmd(PCmdMgr pCM, CString cmd, int subCmd, INT_PTR param);
//�Ƿ�ǰ������Ա�ִ��
GLOABL_EXT_CLASS  BOOL E3_CmdMgrIsCmdEnable(PCmdMgr pCM, CString cmd, int subCmd);
//���ù�������ʾ����Ϣ
GLOABL_EXT_CLASS  void E3_CmdMgrSetShowMsg(PCmdMgr pCM, CString msg);
//�õ���ǰִ������
GLOABL_EXT_CLASS  CString E3_CmdMgrGetCurCmd(PCmdMgr pCM,int& subCmd);
//���õ�ǰ�������Ļ���DC
GLOABL_EXT_CLASS  void E3_CmdMgrSerDrawDC(PCmdMgr pCM, PDrawDC dc);
GLOABL_EXT_CLASS PDrawDC E3_CmdMgrGetDrawDC(PCmdMgr pCM);

//�����������Ϣ
GLOABL_EXT_CLASS void E3_CmdMgrOnMessage(PCmdMgr pCM, int nMsg, WPARAM wParam, LPARAM lParam);
//ֹͣ��ǰ����
GLOABL_EXT_CLASS void E3_CmdMgrStopCurCmd(PCmdMgr pCM);
GLOABL_EXT_CLASS void E3_CmdMgrSetEntMgr(PCmdMgr pCM, PEntMgr pEM);
GLOABL_EXT_CLASS void E3_CmdMgrSetDemo(PCmdMgr pCM, BOOL b);
GLOABL_EXT_CLASS void E3_CmdMgrSendMessageToEntWnd(PCmdMgr pCM, int nMsg, WPARAM wParam, LPARAM lParam);
GLOABL_EXT_CLASS void E3_CmdMgrSetIoMask(PCmdMgr pCM, WORD wIoMaskInput, WORD m_wIoMaskOutput);
GLOABL_EXT_CLASS void E3_CmdMgrGetIoMask(PCmdMgr pCM, WORD& wIoMaskInput, WORD& m_wIoMaskOutput);
GLOABL_EXT_CLASS void E3_CmdMgrShowSnapObject(PCmdMgr pCM, CString str);
GLOABL_EXT_CLASS void E3_CmdMgrShowSnapGuildLine(PCmdMgr pCM, CString str);
GLOABL_EXT_CLASS void E3_CmdMgrShowSnapGrid(PCmdMgr pCM, CString str);
GLOABL_EXT_CLASS CString E3_CmdMgrGetStatusPanelText(PCmdMgr pCM, int n);
GLOABL_EXT_CLASS CString E3_CmdMgrShowTip(PCmdMgr pCM, CString strTip);

//������������еõ����������
GLOABL_EXT_CLASS PEntMgr E3_GetEntMgrFromCmdMgr(PCmdMgr pCM);
//���ö�����������޸ı�־
GLOABL_EXT_CLASS void E3_SetEntMgrModifyFlag(PEntMgr pEM,BOOL b);
GLOABL_EXT_CLASS BOOL E3_EntMgrGetModifyFlag(PEntMgr pEM);
GLOABL_EXT_CLASS PEntity  E3_EntMgrGetCurLayer(PEntMgr pEM);
class CSysParam;
GLOABL_EXT_CLASS int   E3_EntMgrPickCount(PEntMgr pEM);
GLOABL_EXT_CLASS void  E3_EntMgrOnChangeUnit(PEntMgr pEM, CSysParam* pSysParam, double dScale);


GLOABL_EXT_CLASS void   E3_EntLayerGetSplitParam(PEntity pEnt, int& nSplitMode, double& dSplitSize, int& nSplitModeY, double& dSplitSizeY, BOOL& bNoCutEntity, BOOL& bKeepEntOrder, BOOL& bSphereWrap, BOOL& bRevolveWrap, BOOL& bUseSplitCenAsMarkingCen, BOOL& bSplitByGLB, BOOL& bDisableAxisA, BOOL& bCylinderWrap, int& nSplitAttrib);
GLOABL_EXT_CLASS void   E3_EntLayerSetSplitParam(PEntity pEnt, int nSplitMode, double dSplitSize, int nSplitModeY, double dSplitSizeY, BOOL bNoCutEntity, BOOL bKeepEntOrder, BOOL bSphereWrap, BOOL bRevolveWrap, BOOL bUseSplitCenAsMarkingCen, BOOL bSplitByGLB, BOOL bDisableAxisA, BOOL  bCylinderWrap, int nSplitAttrib);

//ѡ����
struct TagPickItem
{
	PEntity m_pPicked;       //��ѡ��Ķ���ָ��
};
class CMatrix2d;
class Box2d;
class Box3d;

GLOABL_EXT_CLASS PEntity  E3_EntMgrGetPickHead(PEntMgr pEM);
GLOABL_EXT_CLASS int      E3_EntMgrCopyPickList(PEntMgr pEM,TagPickItem* pItemList,int nPick);
GLOABL_EXT_CLASS void     E3_EntMgrChangeEntHideState(PEntMgr pEM, PEntity pEntSel);
GLOABL_EXT_CLASS void     E3_EntMgrChangeEntName(PEntMgr pEMgr, PEntity pEntSel, CString str);
GLOABL_EXT_CLASS void     E3_EntMgrResetPickParam(PEntMgr pEM);
GLOABL_EXT_CLASS void     E3_EntMgrBeginPick(PEntMgr pEM);
GLOABL_EXT_CLASS void     E3_EntMgrEndPick(PEntMgr pEM);
GLOABL_EXT_CLASS void     E3_EntMgrPickEntity(PEntMgr pEM, PEntity pEnt, BOOL bPick);
GLOABL_EXT_CLASS void     E3_EntMgrUDModify(PEntMgr pEM, PEntity pEnt);
GLOABL_EXT_CLASS void     E3_EntMgrBeginUndo(PEntMgr pEM, CString strName);
GLOABL_EXT_CLASS void     E3_EntMgrEndUndo(PEntMgr pEM);
GLOABL_EXT_CLASS void     E3_EntMgrUDMoveToBefore(PEntMgr pEM, PEntity pThis, PEntity pOther);
GLOABL_EXT_CLASS void     E3_EntMgrUDMoveToAfter(PEntMgr pEM, PEntity pThis, PEntity pOther);
GLOABL_EXT_CLASS PPenBox  E3_EntMgrGetPenBox(PEntMgr pEM);
GLOABL_EXT_CLASS void     E3_EntMgrDestroy(PEntMgr pEM);
GLOABL_EXT_CLASS Box2d    E3_EntMgrGetBox(PEntMgr pEM,BOOL bSelect);
GLOABL_EXT_CLASS void     E3_EntMgrTransformAllUD(PEntMgr pEM, PEntity pCurLayer, BOOL bSelect, CMatrix2d&  mtx, int nChangeTranType);
GLOABL_EXT_CLASS CString  E3_EntMgrGetLastUndoName(PEntMgr pEM );
GLOABL_EXT_CLASS CString  E3_EntMgrGetLastRedoName(PEntMgr pEM);

GLOABL_EXT_CLASS void E3_SetEntPenUD(PEntMgr pEM,PEntity pEnt, int nPen, BOOL bUpdateChild);
//�����ݹ������м���ǵ�ǰָ�����Ƿ���Ч
GLOABL_EXT_CLASS BOOL E3_EntMgrIsLayerExist(PEntMgr pEM, PEntity pEnt);
 
GLOABL_EXT_CLASS BOOL E3_DrawDCIsCaptureCursor(PDrawDC pDrawDC);

//�õ�ezd�ļ���Ϣ
GLOABL_EXT_CLASS int E3_GetEzdFileInfo(CString& szFileName, CString& szAuthorName, CString& szDrawTime, CString& szNotes);

class CDIB;
GLOABL_EXT_CLASS CDIB* E3_GetDibPreview(CString& szFileName);
GLOABL_EXT_CLASS void E3_DoubleDisplayShow(PEntMgr pEM, CDC* pDC,BOOL bMarkSelected) ;



const WORD  ENTTYPE_CURVE2D = 0x0001; //��ά����
const WORD  ENTTYPE_POINT2D = 0x0002; //��ά����
const WORD  ENTTYPE_RECT2D = 0x0003; //��ά����
const WORD  ENTTYPE_CIRCLE2D = 0x0004; //��άԲ
const WORD  ENTTYPE_ELLIPSE2D = 0x0005; //��ά��Բ
const WORD  ENTTYPE_POLYGON2D = 0x0006; //��ά�����
const WORD  ENTTYPE_SPIRAL2D = 0x0007; //��ά������
const WORD  ENTTYPE_SCANPOINT2D = 0x0008; //��άɨ�����
const WORD  ENTTYPE_CURVE3D = 0x000a; //��ά���� 

const WORD  ENTTYPE_GROUP = 0x0010; //ͼ�μ��� 
const WORD  ENTTYPE_HATCH_GROUP = 0x0020; //���ͼ�μ���
const WORD  ENTTYPE_COMBINE = 0x0030; //ͼ�����
const WORD  ENTTYPE_BITMAP = 0x0040; //λͼ
const WORD  ENTTYPE_VECTORFILE = 0x0050; //�����ļ�����
const WORD  ENTTYPE_SPIRALHATCH_GROUP = 0x0060;

const WORD  ENTTYPE_MESH3D = 0x0070; //3d����
const WORD  ENTTYPE_SLICE3D = 0x0080; //3d��������
const WORD  ENTTYPE_PROJECT3D = 0x0090; //3dͶӰ����

const WORD  ENTTYPE_TEXT = 0x0200; //�ı�
const WORD  ENTTYPE_CIRCLETEXT = 0x0500; //Բ��·������
const WORD  ENTTYPE_PATHTEXT = 0x0700; //·������
const WORD  ENTTYPE_SUPERTEXT = 0x0800; //��������

const WORD  ENTTYPE_CONTROL = 0x1000; //���ƶ���
const WORD  ENTTYPE_TRANSFORM = 0x1001; //�任����
const WORD  ENTTYPE_CCD = 0x1002; //CCD����
const WORD  ENTTYPE_INDEX = 0x1003; //����

const WORD  ENTTYPE_TIMERDELAY = 0x2000; //��ʱ��
const WORD  ENTTYPE_IOINPUT = 0x3000; //IO�������
const WORD  ENTTYPE_IOINPUTJUMP = 0x3001; //IO������ת����
const WORD  ENTTYPE_IOOUTPUT = 0x4000; //IO�������
const WORD  ENTTYPE_EXTAXIS = 0x5000; //��չ����� 
const WORD  ENTTYPE_FLYMOVEDIST = 0x6000; //�ɱ���ˮ���ƶ�����


const WORD  ENTTYPE_GUIDELINE = 0x7000;       //������
const WORD  ENTTYPE_DATAMGR = 0x8000;      //���ݹ�����
const WORD  ENTTYPE_LAYER = 0x9000;      //ͼ��

GLOABL_EXT_CLASS WORD E3_GetEntType(PEntity pEnt);
GLOABL_EXT_CLASS BOOL E3_IsEntHide(PEntity pEnt);
GLOABL_EXT_CLASS BOOL E3_IsEntLock(PEntity pEnt);
GLOABL_EXT_CLASS BOOL E3_IsEntPicked(PEntity pEnt);
GLOABL_EXT_CLASS void E3_EntHide(PEntity pEnt,BOOL b);

GLOABL_EXT_CLASS int E3_GetEntPenNo(PEntity pEnt);
GLOABL_EXT_CLASS CString E3_GetEntTypeStr(PEntity pEnt);
GLOABL_EXT_CLASS CString E3_GetEntName(PEntity pEnt);
GLOABL_EXT_CLASS void E3_SetEntName(PEntity pEnt, CString name);
GLOABL_EXT_CLASS PEntity E3_GetEntPrev(PEntity pEnt);
GLOABL_EXT_CLASS PEntity E3_GetEntNext(PEntity pEnt);
GLOABL_EXT_CLASS PEntity E3_GetEntChildHead(PEntity pEnt);
GLOABL_EXT_CLASS PEntity E3_GetEntChildTail(PEntity pEnt);
GLOABL_EXT_CLASS int E3_GetEntChildCnt(PEntity pEnt);
GLOABL_EXT_CLASS PEntity E3_GetEntChildByIndex(PEntity pEnt,int index);
GLOABL_EXT_CLASS void E3_GetEntIoSet(PEntity pEnt, WORD& ioLow, WORD& ioHigh);
GLOABL_EXT_CLASS void E3_SetEntIoSet(PEntity pEnt, WORD ioLow, WORD ioHigh);
GLOABL_EXT_CLASS void E3_GetEntLayerIoSet(PEntity pEnt, WORD& ioLowStart, WORD& ioHighStart, WORD& ioLowFinish, WORD& ioHighFinish, int& nStartDelayMs, int& nEndDelayMs,BOOL& bWaitForInput);
GLOABL_EXT_CLASS void E3_SetEntLayerIoSet(PEntity pEnt, WORD ioLowStart, WORD ioHighStart, WORD ioLowFinish, WORD ioHighFinish, int nStartDelayMs, int nEndDelayMs, BOOL  bWaitForInput);
GLOABL_EXT_CLASS BOOL E3_GetCurLayerMeshBox(PEntity pEnt, Box3d& box);
GLOABL_EXT_CLASS double E3_GetCurLayerDiamater(PEntity pEnt);
GLOABL_EXT_CLASS void E3_SetCurLayerDiamater(PEntity pEnt, double d);
GLOABL_EXT_CLASS double E3_GetCurLayerPartHeight(PEntity pEnt);
GLOABL_EXT_CLASS void E3_SetCurLayerPartHeight(PEntity pEnt, double d);
GLOABL_EXT_CLASS double E3_GetCurLayerRotateCenZ(PEntity pEnt);
GLOABL_EXT_CLASS void E3_SetCurLayerRotateCenZ(PEntity pEnt, double d);
GLOABL_EXT_CLASS int E3_GetEntMarkCnt(PEntity pEnt);
GLOABL_EXT_CLASS void E3_SetEntMarkCnt(PEntity pEnt,int nCount);
//���ش����� 
#define MERR_SUCCESS          0	//�ɹ�
#define MERR_INVALID_CMD      1	//��Ч��������
#define MERR_INVALID_PARAM    2	//��Ч���������
#define MERR_CANNT_RUN        3	//��ǰ״̬�²���ִ�д�����
#define MERR_CMD_OUTTIME      4	//ִ�����ʱ
#define MERR_UNREG            5	//�豸δע��
#define MERR_HWDISABLE        6	//Ӳ��У��δͨ��
#define MERR_CLEARLISTFAIL    7	//�޷�����б���Ϊ�б�����ִ��
#define MERR_WRITELISTFAIL2   10	//�޷�д������Ϊ�б��Ѿ���
#define MERR_CHECKCODEERROR   11	//У�������

#define MERR_USER_STOP        100 //�û��жϱ��
#define MERR_INVALID_HAN      101 //��Ч���豸���
#define MERR_INVALID_CARD     102 //��Ч����
#define MERR_ALREADY_REG      103 //�Ѿ�ע����

#define MERR_STOPSIGNAL       110 //�����жϱ���ź�
#define MERR_FLYSPEEDFAST         121 //�����ٶ�̫��


#define MERR_CONNECTHOST      130
#define MERR_DOOROPEN         131 
#define MERR_OUTRANGE         120 //�����ӹ���Χ
#define MERR_USER_AXISSTOP    140 //�û��ж���չ���˶�
#define MERR_ASSERT           200 //�쳣
#define MERR_FAIL             201 
#define MERR_NOENTITY         300
#define MERR_NOMESH         301

#define MERR_NOTHOME          400 
#define MERR_MOVEFAIL         403

const int MAKRFLAG_DISABLEESC     = 0x000000001;  //��ֹesc
const int MAKRFLAG_REDLIGHT       = 0x000000002;  //��ǰ�Ǻ��ָʾ״̬ 
const int MAKRFLAG_SELECT         = 0x000000100;  //ѡ����
const int MAKRFLAG_CONTMODE       = 0x000000200;  //�������
const int MAKRFLAG_FLYMODE        = 0x000000400;  //���б��
const int MAKRFLAG_CONTCHANGETEXT = 0x000000800;  //���������ı�ģʽ
const int MAKRFLAG_CLICKSPACEKEY  = 0x000001000;  //��space��ֹ
const int MAKRFLAG_WELD           = 0x000002000;  //����ģʽ 
const int MAKRFLAG_DISABLEAUTORUN = 0x000008000;  //��ֹ�Զ����� 
const int MAKRFLAG_CALCTIMEMODE   = 0x01000000;  //����ģʽ
const int MAKRFLAG_OFFLINEMODE    = 0x02000000;  //�ѻ�ģʽ
const int MAKRFLAG_TWORNCODERMODE = 0x04000000;  //˫������ģʽ


GLOABL_EXT_CLASS int E3_MarkerMarkEnt(PMarker pMarker, PEntMgr pEM, PEntity pEnt, int nMarkFlag, double* mtx, int nStartPartNum, int nMaxPartCount, int nFileIndex);
GLOABL_EXT_CLASS int E3_MarkerMarkEntWithMotorSol(PMarker pMarker, PEntMgr pEM, PEntity pLayer, int nMarkFlag);
GLOABL_EXT_CLASS PEntity E3_MarkEntWithMotorSolGetCurves(PMarker pMarker, PEntMgr pEM, PEntity pLayer, int nMarkFlag);
GLOABL_EXT_CLASS Box2d* E3_MarkEntWithMotorSolGetAllSplitBoxes(PMarker pMarker, PEntMgr pEM, PEntity pLayer, int nMarkFlag,int& nBoxCount);
GLOABL_EXT_CLASS void E3_DeleteAllBoxes(Box2d* pBoxes);
GLOABL_EXT_CLASS void E3_ShowSplitBoxesOnCurDC(PCmdMgr cmdMgr,Box2d* arrayBox,int nBoxCount);
GLOABL_EXT_CLASS void E3_DlgGlShowEnt(PEntity pEnt);

#define  LASER_CO2   0
#define  LASER_YAG   1
#define  LASER_FIBER 2
#define  LASER_SPI   3
#define  LASER_QCW   4


GLOABL_EXT_CLASS BOOL E3_OpenMarkDriver( );
GLOABL_EXT_CLASS PMarker E3_GetOneValidDev();
GLOABL_EXT_CLASS int  E3_MarkerGetSN(PMarker idMarker);
GLOABL_EXT_CLASS void E3_MarkerSetup(PMarker pMarker);
GLOABL_EXT_CLASS void E3_CloseMarkDriver(); 
GLOABL_EXT_CLASS PMarker E3_MarkerReGetOneNewValidDev();//�豸�Ͽ�����������
GLOABL_EXT_CLASS int  E3_MarkerGetLaserType(PMarker pMarker);
GLOABL_EXT_CLASS int  E3_MarkerGetParamStopIOLow(PMarker pMarker);
GLOABL_EXT_CLASS int  E3_MarkerGetParamStopIOHigh(PMarker pMarker);
GLOABL_EXT_CLASS CString E3_MarkerGetParamStopMsg(PMarker pMarker, int i);
GLOABL_EXT_CLASS WORD E3_MarkerGetStopSignal(PMarker pMarker);
GLOABL_EXT_CLASS WORD E3_MarkerGetLaserState(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerHandleLaserFaultOutput(PMarker pMarker, BOOL bFault);
GLOABL_EXT_CLASS BOOL E3_MarkerIsLaserAlarm(PMarker pMarker, CString& strError);
GLOABL_EXT_CLASS void E3_MarkerResetLaserError(PMarker pMarker);
GLOABL_EXT_CLASS double E3_MarkerGetLaserTemp(PMarker pMarker);
GLOABL_EXT_CLASS int  E3_MarkerGetFiberPulseWidth(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsEnablePulseWidth(PMarker pMarker);
GLOABL_EXT_CLASS WORD E3_MarkerGetInputIoMask(PMarker pMarker);
GLOABL_EXT_CLASS WORD E3_MarkerGetOutputIoMask(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsHidePenButton(PMarker pMarker);

GLOABL_EXT_CLASS BOOL E3_MarkerIsShowDecArea(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsEnableWeld(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerSetLaserParamOut(PMarker pMarker, PMarkParam pen);
GLOABL_EXT_CLASS BOOL E3_MarkerIsTestMode(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsDemo(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsEnableHardFly(PMarker pMarker);
GLOABL_EXT_CLASS WORD E3_MarkerGetCurOutPortData(PMarker pMarker);
GLOABL_EXT_CLASS int  E3_MarkerWriteOutPort(PMarker pMarker, WORD wData);
GLOABL_EXT_CLASS void E3_MarkerSetCancelFlag(PMarker pMarker,BOOL bCancel);
GLOABL_EXT_CLASS BOOL E3_MarkerIsCancelMark(PMarker pMarker);
GLOABL_EXT_CLASS WORD E3_MarkerReadInPort(PMarker pMarker);
GLOABL_EXT_CLASS PEntMgr E3_MarkerGetEM(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerSetEM(PMarker pMarker, PEntMgr pEM);
GLOABL_EXT_CLASS BOOL E3_MarkerIsRedDisableMotor(PMarker pMarker);
GLOABL_EXT_CLASS int  E3_MarkerGetAxisSol(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsEnableTwoEncoder(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsShowContour(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerSetShowContour(PMarker pMarker,BOOL b);
GLOABL_EXT_CLASS BOOL E3_MarkerIsDeviceValid(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsSupportOffline(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerEnableOffLineMode(PMarker pMarker, BOOL  b);
GLOABL_EXT_CLASS CString E3_MarkerGetMarkTimerStr(PMarker pMarker, BOOL bUseCardTime);
GLOABL_EXT_CLASS void E3_MarkerSaveParam(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsEnable3D(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsShowF4(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerIsShowGetButton(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerGetStartMarkPulseMode(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerGetStartMarkLowValid(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerGetStartMarkInputNo(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerGetRedInputNo(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerGetRedInputLowValid(PMarker pMarker); 
GLOABL_EXT_CLASS int E3_MarkerGetLaserReadyInputNo(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerGetLaserReadyLowValid(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerGetLaserReadyOutputNo(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerGetLaserReadyOutputLowValid(PMarker pMarker);

GLOABL_EXT_CLASS int E3_MarkerGetMarkFinishOutputNo(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerSetMarkFinishOutputNo(PMarker pMarker,int nOutputNo);
GLOABL_EXT_CLASS int E3_MarkerGetMarkFinishLowValid(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerGetMarkFinishPulseTime(PMarker pMarker); 

GLOABL_EXT_CLASS BOOL E3_MarkerIsStillValid(PMarker pMarker);
GLOABL_EXT_CLASS int  E3_MarkerGetAlreadyMarkPartCount(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerGetShowMsg(PMarker pM, CString& strMsg);
GLOABL_EXT_CLASS BOOL E3_MarkerIsAutoResetCount(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerSetOwnWnd(PMarker pMarker, CWnd* pWnd);
GLOABL_EXT_CLASS void E3_MarkerOnChangeUnit(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerMarkBox(PMarker pMarker, PEntMgr pEM, Box3d box,int nPen);
GLOABL_EXT_CLASS void E3_MarkerGotoAfterPostion(PMarker pMarker);
GLOABL_EXT_CLASS BOOL E3_MarkerCheckLaserState(PMarker pMarker,BOOL bOpen);
GLOABL_EXT_CLASS double E3_MarkerGetCalcTotalMarkTime(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerSendMainProgramList(PMarker pMarker, int nFileCount);
GLOABL_EXT_CLASS int E3_MarkerSetDlgParam(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerGetCardIndex(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerClose(int nCard);
GLOABL_EXT_CLASS void E3_MarkerGetFeedbackCurves(PMarker pMarker);
GLOABL_EXT_CLASS int E3_MarkerUpdateEmTextBuildFlag(PMarker pMarker, PEntMgr pEM);
GLOABL_EXT_CLASS CString E3_MarkerGetFlySpeed(PMarker pMarker, int index, double& dSpeed);
GLOABL_EXT_CLASS void E3_MarkerDlgSetFlySpeed(PMarker pMarker);
GLOABL_EXT_CLASS void E3_MarkerGetIoMask(PMarker pMarker, WORD& wIoMaskInput, WORD& m_wIoMaskOutput);

GLOABL_EXT_CLASS BOOL E3_MarkerSetLaserStartUp(PMarker pMarker,BOOL b);


const int MAX_PEN_NUM = 256;

GLOABL_EXT_CLASS PMarkPen E3_PenBoxCreateAPen();
GLOABL_EXT_CLASS void E3_PenBoxDestroyAPen(PMarkPen penCur);
GLOABL_EXT_CLASS PMarkPen E3_PenBoxGetPen(PPenBox pPenBox, int nPen);
GLOABL_EXT_CLASS PMarkParam E3_PenBoxGetPenParam(PMarkPen pMarkPen);
GLOABL_EXT_CLASS PMarkParam E3_PenBoxGetParamLibDefParam();
GLOABL_EXT_CLASS PMarkParam E3_PenBoxGetParamLibFindParam(CString name);
GLOABL_EXT_CLASS CString E3_PenBoxGetPenName(PMarkPen pen);
GLOABL_EXT_CLASS COLORREF E3_PenBoxGetPenColor(PMarkPen pen);
GLOABL_EXT_CLASS void E3_PenBoxSetPenColor(PMarkPen pen, COLORREF clr);
GLOABL_EXT_CLASS BOOL E3_PenBoxIsPenMark(PMarkPen pen);
GLOABL_EXT_CLASS void E3_PenBoxSetPenMark(PMarkPen pMarkPen, BOOL b);
GLOABL_EXT_CLASS BOOL E3_PenBoxIsPenUseDefParam(PMarkPen pen);
GLOABL_EXT_CLASS void E3_PenBoxSetPenUseDefParam(PMarkPen pMarkPen, BOOL b);
GLOABL_EXT_CLASS void E3_PenBoxSetPenParam(PMarkPen pMarkPen, PMarkParam pMParam);
GLOABL_EXT_CLASS void E3_PenBoxOnChangeUnit(PMarkPen pen);
GLOABL_EXT_CLASS void E3_PenBoxCopyPenParam(PMarkPen pDstPen, PMarkPen pSrcPen);
GLOABL_EXT_CLASS void E3_PenBoxLoadDefault(PPenBox pPenBox);
GLOABL_EXT_CLASS void E3_PenBoxSaveToDefault(PPenBox  pPenBox);
GLOABL_EXT_CLASS void E3_PenBoxIniDefaultPen(PPenBox  pPenBox);

GLOABL_EXT_CLASS BOOL E3_AutoFocusIsEnable();
GLOABL_EXT_CLASS BOOL E3_AutoFocusIsOpen();
GLOABL_EXT_CLASS BOOL E3_AutoFocusOpen();
GLOABL_EXT_CLASS void E3_AutoFocusClose();
GLOABL_EXT_CLASS BOOL E3_AutoFocusGetValue(double& dValue);

GLOABL_EXT_CLASS BOOL  E3_IsCameraOpen();
GLOABL_EXT_CLASS BOOL  E3_IsCameraHide();
GLOABL_EXT_CLASS void  E3_SetCameraHide(BOOL b);
GLOABL_EXT_CLASS BOOL  E3_GetCameraParam(BOOL& bMirrorX, BOOL& bMirrorY,int& nExpo,int& nLight,int& nConstr,double& dCornX1, double& dCornY1, double& dCornX2, double& dCornY2);
GLOABL_EXT_CLASS BOOL  E3_SetCameraParam(BOOL bMirrorX, BOOL bMirrorY, int nExpo, int nLight, int nConstr, double dCornX1, double dCornY1, double dCornX2, double dCornY2);
GLOABL_EXT_CLASS CString E3_GetCameraName();

GLOABL_EXT_CLASS BOOL   E3_UnPackageIssueFile(DWORD wFlag, CString strFile, int nMarkerId, CString& strEzdFile, CString& strIssueDec);
GLOABL_EXT_CLASS BOOL   E3_PackageIssueFile(DWORD wFlag, CString strFile, CString strEzdFile, CString strIssueDec, int nMarkerId);