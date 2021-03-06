// dlglicense.cpp : implementation file
//

#include "stdafx.h"
#include "EzCad3_VS2015.h"
#include "dlglicense.h"
#include "qglobal.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgLicense dialog


CDlgLicense::CDlgLicense(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgLicense::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgLicense)
	m_strLice = _T("");
	//}}AFX_DATA_INIT
}


void CDlgLicense::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgLicense)
	DDX_Text(pDX, IDC_EDIT1, m_strLice);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgLicense, CDialog)
	//{{AFX_MSG_MAP(CDlgLicense)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgLicense message handlers

BOOL CDlgLicense::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	GetDlgItem(IDOK)->SetWindowText(QGlobal::gf_Str(_T("IAGREE"),_T("I agree")));
	GetDlgItem(IDCANCEL)->SetWindowText(QGlobal::gf_Str(_T("IDONTAGREE"),_T("I don't agree")));
	if( m_strLice .IsEmpty() )
	{
		m_strLice=_T("END-USER LICENSE AGREEMENT FOR THIS SOFTWARE\r\n");
		m_strLice+=_T("Important - read carefully:\r\n");		
		m_strLice+=_T("This End-User License Agreement (\"EULA\") is a legal agreement between you (either an individual or a single entity) and Beijing JCZ CO. Ltd for the software product identified above, which includes computer software and may include associated media, printed materials, and \"online\" or electronic documentation (\"SOFTWARE PRODUCT\"). By installing, copying, or otherwise using the SOFTWARE PRODUCT, you agree to be bound by the terms of this EULA. If you do not agree to the terms of this EULA, do not install or use the SOFTWARE PRODUCT.\r\n");
		m_strLice+=_T("SOFTWARE PRODUCT LICENSE\r\n");
		m_strLice+=_T("The SOFTWARE PRODUCT is protected by copyright laws and international copyright treaties, as well as other intellectual property laws and treaties. The SOFTWARE PRODUCT is licensed, not sold.\r\n");
		m_strLice+=_T("1. GRANT OF LICENSE. This EULA grants you the following rights:\r\n");
		m_strLice+=_T("   You can install one copy of this software product on a single computer.\r\n");
		m_strLice+=_T("2. DESCRIPTION OF OTHER RIGHTS AND LIMITATIONS.\r\n");			
		m_strLice+=_T("   Limitations on Reverse Engineering, Decompilation, and Disassembly. You may not reverse engineer, decompile, or disassemble the SOFTWARE PRODUCT. Separation of Components.\r\n");
		m_strLice+=_T("   The SOFTWARE PRODUCT is licensed as a single product. Its component parts may not be separated for use on more than one computer.Rental. You may not rent, lease or lend the SOFTWARE PRODUCT.\r\n");			
		m_strLice+=_T("   Software Transfer.\r\n");
		m_strLice+=_T("   You may permanently transfer all of your rights under this EULA, * provided that:\r\n");
		m_strLice+=_T("   1) the recipient agrees to the terms of this EULA.\r\n");
		m_strLice+=_T("   2) You must remove this software product from your computer and no copy of this SOFTWARE PRODUCT should be kept.\r\n");
		m_strLice+=_T("   3) All componets of this SOFTWARE PRODUCT(includes computer software, associated media, printed materials, any update vertion of this SOFTWARE PRODUCT, and this EULA) must transfer to recipient. if this SOFTWARE PRODUCT has been updated, all previous vertion of this  SOFTWARE PRODUCT should be transfered to the recipient also.\r\n");
		m_strLice+=_T("3. COPYRIGHT.  All title and copyrights in and to the SOFTWARE PRODUCT(including but not limited to any images, photographs, animations,video, audio, music, text, and \"applets\" incorporated into the SOFTWARE PRODUCT), the accompanying printed materials, and any copies of the SOFTWARE PRODUCT are owned by the BJJCZ. The SOFTWARE PRODUCT is protected by copyright laws and international treaty provisions. Therefore, you must treat the SOFTWARE PRODUCT like any other copyrighted material except that you may install the SOFTWARE PRODUCT on a single computer provided you keep the original solely for backup or archival purposes.\r\n");
		m_strLice+=_T("4.NO WARRANTY. The Software is being delivered to you \"AS IS\" and BJJCZ makes no warranty as to its use or performance. BJJCZ AND ITS DISTRIBUTORS DO NOT AND CANNOT WARRANT THE PERFORMANCE OR RESULTS YOU MAY OBTAIN BY USING THE SOFTWARE. EXCEPT FOR ANY WARRANTY, CONDITION, REPRESENTATION OR TERM TO THE EXTENT TO WHICH THE SAME CANNOT OR MAY NOT BE EXCLUDED OR LIMITED BY LAW APPLICABLE TO YOU IN YOUR JURISDICTION, BJJCZ AND ITS DISTRIBUTORS MAKE NO WARRANTIES CONDITIONS, REPRESENTATIONS, OR TERMS (EXPRESS OR IMPLIED WHETHER BY STATUTE, COMMON LAW, CUSTOM, USAGE OR OTHERWISE) AS TO ANY MATTER INCLUDING WITHOUT LIMITATION NON-INFRINGEMENT OF THIRD PARTY RIGHTS, MERCHANTABILITY, INTEGRATION, SATISFACTORY QUALITY, OR FITNESS FOR ANY PARTICULAR PURPOSE.\r\n"); 
		m_strLice+=_T("5.IMITATION OF LIABILITY. IN NO EVENT WILL BJJCZ OR ITS DISTRIBUTORS BE LIABLE TO YOU FOR ANY DAMAGES, CLAIMS OR COSTS WHATSOEVER OR ANY CONSEQUENTIAL, INDIRECT, INCIDENTAL DAMAGES, OR ANY LOST PROFITS OR LOST SAVINGS, EVEN IF A BJJCZ REPRESENTATIVE HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH LOSS, DAMAGES, CLAIMS OR COSTS OR FOR ANY CLAIM BY ANY THIRD PARTY. THE FOREGOING LIMITATIONS AND EXCLUSIONS APPLY TO THE EXTENT PERMITTED BY APPLICABLE LAW IN YOUR JURISDICTION. BJJCZ AGGREGATE LIABILITY AND THAT OF ITS DISTRIBUTORS UNDER OR IN CONNECTION WITH THIS AGREEMENT SHALL BE LIMITED TO THE AMOUNT PAID FOR THE SOFTWARE, IF ANY. \r\n");
		m_strLice+=_T("6.TERMINATION.  This License Agreement shall terminate automatically if you fail to comply with the limitations described in this license.  No notice shall be required from BJJCZ to effectuate such termination.  Upon termination, you must destroy all copies of the Software and Documentation. \r\n");
		m_strLice+=_T("7.APPLICABLE LAW. The Product is protected by <<INTELLECTUAL PROPERTY LAWS AND TREATIES>>,<<COPYRIGHT LAW>>,<<EXCLUSIVE LAW>> and ohter relative laws.If you acquired the SOFTWARE in China, this EULA is governed by the laws of the China.  If you acquired the SOFTWARE outside of the China, then local laws may apply.\r\n");
		m_strLice+=_T("Should you have any questions concerning this EULA, or if you desire to contact BJJCZ for any reason, please contact BJJCZ\r\n");
		m_strLice+=_T("http://www.bjjcz.com\r\n");
		m_strLice+=_T("Telephone : (086) 010-64426995. The phone may change in the future, check the web please.\r\n");				
	}
	UpdateData(FALSE);
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
