#pragma once

#define SOFT_VERSION 3

#ifdef EZCAD3_WELD_LMC1
#define INTERFACE_VERSION 2001
#else
#define INTERFACE_VERSION 1001
#endif

#define BUILD_VERSION 1296 //20180905  ���Ӷ�����ĺ��Զ�ͶӰ���޸���������������bug���޸ĺ���������ع�ǿ��
//#define BUILD_VERSION 1295 //20180904  ���ӹر������ť
//#define BUILD_VERSION 1294 //20180903  ����6�Ṧ�ܣ��޸Ķ�slc��bug
//#define BUILD_VERSION 1293 //20180821  ����9030����
//#define BUILD_VERSION 1292 //20180821  �޸������߶�ֱ�ߵ����⣻�޸ķ���ϵ��Ϊum��
//#define BUILD_VERSION 1291 //20180816  ֧���������zΪz����
//#define BUILD_VERSION 1290 //20180815  ֧���µ�slc��ʽ���޸�ģ����еĴ�귽���޸����뾵��ʱ���з��������
//#define BUILD_VERSION 1289 //20180808  ������������ͣ����;����usb���
//#define BUILD_VERSION 1288 //20180807  ���ӷָ�Y������
//#define BUILD_VERSION 1287 //20180806  ����������ʾУ���빦�ܣ��޸��ļ�����ʾ����
//#define BUILD_VERSION 1286 //20180803  �޸ļ�Сͼ�ε��������;�޸ĸ��ıʲ���δ��ʾ�����ļ�������
//#define BUILD_VERSION 1285 //20180801  �޸��ѻ��ļ���������bug
//#define BUILD_VERSION 1284 //20180731  �޸Ĵ��������bug���޸Ķ�dxf��block������
//#define BUILD_VERSION 1283 //20180726  ���Ӻ��ӿ���չ�˿ڹ���
//#define BUILD_VERSION 1282 //20180726  �޸�Ⱥ�����Ͽ����Զ�ͳһz����,�������ر��б���
//#define BUILD_VERSION 1281 //20180725  �޸ĺ��ָʾ�����޸���չ���ٶ�
//#define BUILD_VERSION 1280 //20180724  �޸�ϵͳ���������ڴ�ֱλ��
//#define BUILD_VERSION 1279 //20180724  �޸�ʹ����λ�źŵ�����
//#define BUILD_VERSION 1278 //20180723  �޸ı������������bug
//#define BUILD_VERSION 1277 //20180720  ���Ӷ��ӹ�����һֱ�ȴ������ź�
//#define BUILD_VERSION 1276 //20180719  ����4����λ���� 
//#define BUILD_VERSION 1275 //20180719  ���Ӷ��ӹ���ʼ������ʱ���޸�������Ϊ0Ԥ������
//#define BUILD_VERSION 1274 //20180718  ��������Ԥ��
//#define BUILD_VERSION 1273 //20180711  �������澫��
//#define BUILD_VERSION 1272 //20180710  ���������Ӷ��̲߳��м���
//#define BUILD_VERSION 1271 //20180709  �����û���ѡ�����߳���   
//#define BUILD_VERSION 1270 //20180704  �ӿ�ͶӰ�ٶȣ�����˫��������޸ĵ������
//#define BUILD_VERSION 1269 //20180703  ����YLPN��״̬���
//#define BUILD_VERSION 1268 //20180702  ����������ת����ѡ�����������ת
//#define BUILD_VERSION 1267 //20180629  �ں��޸�
//#define BUILD_VERSION 1266 //20180628  �޸ı����ļ���ʽΪbmp
//#define BUILD_VERSION 1265 //20180626  1.��̬�ı����ӵ�����ֵ�û�ѡ���Ƿ������2.���Ӽ�������������
//#define BUILD_VERSION 1264 //20180625  �Ż���ȡSTL�������ļ��ٶ�;
//#define BUILD_VERSION 1263 //20180625  Ϊ���ļ��洢�޸Ĵ洢��ʽ�������洢�ٶ�;
//#define BUILD_VERSION 1262 //20180621  �޸İ����Զ�������Ϊ����
//#define BUILD_VERSION 1261 //20180621  �������һ����������ļ�����
//#define BUILD_VERSION 1260 //20180619  �޸����Ĭ������ʱ�����״̬
//#define BUILD_VERSION 1259 //20180617  ���ӷָ��ֹ�ָ��ı����޸�9030�Ļ��㣬�޸������ļ��洢�ٶ�
//#define BUILD_VERSION 1258 //20180616  �ķָ��������Ԥ��
//#define BUILD_VERSION 1257 //20180614  �޸Ĳ������ַŴ��ƶ�����
//#define BUILD_VERSION 1256 //20180611  ���������������
//#define BUILD_VERSION 1255 //20180608  �޸ķָ���bug
//#define BUILD_VERSION 1254 //20180606  ����Բ�������Ƿ�ʹ��
//#define BUILD_VERSION 1253 //20180601  �޸�Ez3�ļ���ʽ�汾
//#define BUILD_VERSION 1252 //20180530  ����MicroPDF417����
//#define BUILD_VERSION 1251 //20180529  �޸�����Զ���ת�����Ĺ���
//#define BUILD_VERSION 1250 //20180528  ����ϵͳ��λmm���inch��һЩbug
//#define BUILD_VERSION 1249 //20180524  ����YAG�ļ���������
//#define BUILD_VERSION 1248 //20180522  �޸ĵײ�bug
//#define BUILD_VERSION 1247 //20180521  ���Ӷ�ͼ��ӹ�����
//#define BUILD_VERSION 1247 //20180519  �޸�jsf�����ȡ�ĳߴ�����
//#define BUILD_VERSION 1246 //20180515  ���Ӷ�MatJob�ļ��Ĺ���
//#define BUILD_VERSION 1245 //20180514  �޸Ľ�ֹͶӰ��������
//#define BUILD_VERSION 1244 //20180511  �޸�gerber�ļ�����·��
//#define BUILD_VERSION 1243 //20180505  ����ͼ����Խ�ֹA��ӹ�
//#define BUILD_VERSION 1242 //20180504  ����Բָ��
//#define BUILD_VERSION 1241  //20180502  ���ӳ�ʼ������ж࿨�����û�ѡ�� 2.����λͼ�޸���ʵDPI���� 3.֧��λͼ����
//#define BUILD_VERSION 1240  //20180427  ���Ӱ������ߺ����ɷָ�
//#define BUILD_VERSION 1239  //20180426   1.�����������Ӻ��ָʾ 2.SDK���ӱ�̱�׼�ŵ�Ĺ���
//#define BUILD_VERSION 1238  //20180424   1.�޸�XY�ָ�ģʽ�������
//#define BUILD_VERSION 1237  //20180423   1.�޸���չ���ı��ӹ������ָ���ļ�������Ƿ�ӹ����쳣 2.���ĵ�λʱ��̬�ۼ�У���ļ���bug 3.�޸�svg��bug
//#define BUILD_VERSION 1236  //20180419   1.�޸���չ���˶�bug
//#define BUILD_VERSION 1235  //20180417   1.������չ�������ƶ�ģʽ
//#define BUILD_VERSION 1234  //20180416   1.�޸�DM��ASCII����ģʽ 2.�����ı�����Ƿ��Ѿ��ӹ�
//#define BUILD_VERSION 1233  //20180410   ����DLC�Դ���չ�Ṧ��
//#define BUILD_VERSION 1232  //20180409   �޸����߶β岹ʱ��С��10usʱ��ʱ
//#define BUILD_VERSION 1231  //20180404   �޸������μӹ�ʱ����ɢ���� 
//#define BUILD_VERSION 1230  //20180402  1.�޸�λͼdpi���� 2.����һЩ��������
//#define BUILD_VERSION 1229  //20180328  �޸��ı���̬�ı����о������ʾ
//#define BUILD_VERSION 1228  //20180327  1.��������ť 2.�������ܼӹ���������
//#define BUILD_VERSION 1227  //20180326  1.�޸ķ�ֹ��������ʾ������
//#define BUILD_VERSION 1226  //20180325  1.�Զ�ȥ��ˮƽ������֮��Ŀռ� 2.��������
//#define BUILD_VERSION 1225  //20180322  1.�޸�Skywrite 2.���Ӽ�����ȴ������ʱ
//#define BUILD_VERSION 1224  //20180319  1.�޸�SPI��IO��ʾ�ı����� 2.Skywrite���ӹ�����
//#define BUILD_VERSION 1223  //20180312  1.�޸Ķ�PNG�ļ� 2.�����Զ������񾵼Ӽ���
//#define BUILD_VERSION 1222  //20180309  ���������ӻ�����̺���
//#define BUILD_VERSION 1221  //20180308 1.�޸�GS1-128������룬2����DLCУ��
//#define BUILD_VERSION 1220  //20180306 1.�޸�DM�ľ���ģʽ�ı���,2���Ӱ�����o���Զ�����
//#define BUILD_VERSION 1219  //20180305 1.�޸��������ʾ����
//#define BUILD_VERSION 1218  //20180227 1.����֧��SL2-100 2.�������������ŷ�ת
//#define BUILD_VERSION 1217  //20180223 �޸ĸı�ϵͳ��λʱ��չ�����δ�ĵ�����
//#define BUILD_VERSION 1216  //20180206 1.���Ӷ࿨�������߿���ͬ��.2 PDF����ʹ��~,�޸�PDF�ڴ�й©
//#define BUILD_VERSION 1215  //20180205 1��������������ѡ��YAG��ʹ�ܵ�������������.2.��ת��Y�����������������û��������ת����� 3.�û����������û������������4.�޸�����򿪺���������Чʱ�رպ�������
//#define BUILD_VERSION 1214  //20180202����ģ�����������ƹ���
//#define BUILD_VERSION 1213  //20180131�޸Ķ�svg����
//#define BUILD_VERSION 1212  //20180129����֧��Ƶ��1M
//#define BUILD_VERSION 1211  //20180119�����Զ������ת��������
//#define BUILD_VERSION 1210  //20180118�޸ıʺй��������س�����ʧ������
//#define BUILD_VERSION 1209  //20180116�޸�һЩСbug
//#define BUILD_VERSION 1208  //20180110�޸�Gerber�ļ���ɵ���ģʽ
//#define BUILD_VERSION 1207  //20180108����A��ѭ���ӹ�ģʽ
//#define BUILD_VERSION 1206  //20180103���Ӵ��ļ�ˢ�¼������,2�޸Ĳ���̵ͻҶ�λͼ����,3plt�������
//#define BUILD_VERSION 1205  //20171228�޸���ת����X��ӹ�������
//#define BUILD_VERSION 1204  //20171227�޸�λͼ����̵ͻҶȵ������
//#define BUILD_VERSION 1203  //20171226�޸������󱣴�����
//#define BUILD_VERSION 1202  //ͼ������Ϊ8��ͼ���ǵ�
//#define BUILD_VERSION 1201  //1.�޸Ĳ��ܱ������ 2.DM��X12��������
//#define BUILD_VERSION 1200  //���й����ƶ���Ezcad3Kernel��
//#define BUILD_VERSION 1142  //�޸Ķ�dxf�ļ�����任����
//#define BUILD_VERSION 1141  //�޸Ķ�Gerber�ļ�Բ������
//#define BUILD_VERSION 1140  //�޸�˫�����
//#define BUILD_VERSION 1139  //�޸����ֳ���
//#define BUILD_VERSION 1138  //�޸�ͶӰʱȥ������δ�ཻ�߶εĴ���
//#define BUILD_VERSION 1137  //�������
//#define BUILD_VERSION 1136  //�޸���������Ĭ������Ϊ�ʺ�0������
//#define BUILD_VERSION 1135  //ȥ����ʾ���Ի������
//#define BUILD_VERSION 1134  //1.�ָ�������Էָ��Ϊ���ģ�2.�������ƶ�����ʼ�� 3.���ӿ�������ԭ�㹦��
//#define BUILD_VERSION 1133  //�޸ĵײ���ʱ����Խ������
//#define BUILD_VERSION 1132  //֧��3d�ӹ�zƫ�ƣ�������չ�ᷴ���϶
//#define BUILD_VERSION 1131  //֧��Sky writing,���ӿ��Խ�ֹPRRͬ��
//#define BUILD_VERSION 1130  //����SPI״̬��ʾ
//#define BUILD_VERSION 1129  //����˫����������
//#define BUILD_VERSION 1128  //�޸��ظ��������
//#define BUILD_VERSION 1127  //֧���¿�������ڿ���
//#define BUILD_VERSION 1126  //���⿪ʼ��ʱֻ����ʼ����Ч
//#define BUILD_VERSION 1125  //������Ⱦ����ʾģʽ�����Ӳ�׽���涥��,���˹����ռ䱳��
//#define BUILD_VERSION 1124  //�޸���չ����Ԥ�����������ػ�������
//#define BUILD_VERSION 1123  //֧�ֵ����Ǳ��
//#define BUILD_VERSION 1122  //֧�ֲ�˹��
//#define BUILD_VERSION 1121  //�޸�IPG_E����������������
//#define BUILD_VERSION 1120  //�޸���չ��A�����
//#define BUILD_VERSION 1119  //�޸�����Ҳ���У���ļ������Զ��ĳ���CORFILEĿ¼����
//#define BUILD_VERSION 1118  //�޸Ŀ����ж����˶�
//#define BUILD_VERSION 1117  //�޸�����_GB2312
//#define BUILD_VERSION 1116  //�޸���������ر�ָ������
//#define BUILD_VERSION 1115  //����������ͨ��������
//#define BUILD_VERSION 1114  //�޸�����򼸴εĴ���
//#define BUILD_VERSION 1113  //���ӷֲ�ӹ����ӳ���ͣ
//#define BUILD_VERSION 1112  //����Io�ȶ�ʱ��
//#define BUILD_VERSION 1111  //���dsp=0x0146��λͼ����������
//#define BUILD_VERSION 1110  //1.�޸��ı���ȴ���2.�޸ı���logo�ü�ˢ��
//#define BUILD_VERSION 1109  //1.���Ԥ���������ض���2��ʹ�ܰ��ָ��߷ָ�֮��Z���ܻ����˶�������ꡣ3�������ı����˳�����
//#define BUILD_VERSION 1108  //1.�޸Ĺ��˼������������ӹ�ģʽMO����2.�ڲ���֤dll
//#define BUILD_VERSION 1107  //�޸������ļ�
//#define BUILD_VERSION 1106  //���ӱ���logo����
//#define BUILD_VERSION 1105  //�޸ĵ�����ʾ
//#define BUILD_VERSION 1104  //������չ��������ZA��XZA��XA��YA���޸��û��������ý���λ�ã��޸���չ��ӹ�������ģʽ��Ч
//#define BUILD_VERSION 1103  //1.�޸�QRCode��һ���������⣬2.�޸Ķ����3d�ļ��Ĵ���
//#define BUILD_VERSION 1102  //�޸ļ��ܿ�269����,2��dxf��3d��������
//#define BUILD_VERSION 1101  //��ֹ˫�б���޸ĵ��б�bug,ȥ����ͨ�������� 
//#define BUILD_VERSION 1100  //1.�޸�menu���Զ���ʾ�������Ĺ���,2.��չ������
//#define BUILD_VERSION 1099  //1.����ת������,2.QCW��ѡ������ģʽȥ������50%������
//#define BUILD_VERSION 1098  //�����ļ������ͻ�id����
//#define BUILD_VERSION 1097  //�޸ĵײ��ѻ�ģʽ
//#define BUILD_VERSION 1096  //�޸ı��������ʾ�ü�����
//#define BUILD_VERSION 1095  //1.�޸�YAGģʽ���������Ȳ�����2.�������ӿ�����ģ������ٶ�
//#define BUILD_VERSION 1094  //�޸�DataMatrix����C40����Ľ����ַ�����
//#define BUILD_VERSION 1093  //������ת�����
//#define BUILD_VERSION 1092  //����������CCD����
