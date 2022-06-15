
// MFCCal2Dlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFCCal2.h"
#include "MFCCal2Dlg.h"
#include "afxdialogex.h"
#include "C_Calculator.h";

#ifdef _DEBUG

#define new DEBUG_NEW
#endif


// CMFCCal2Dlg dialog


CMFCCal2Dlg::CMFCCal2Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCCAL2_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCCal2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_INPUT, m_input);
	DDX_Control(pDX, IDC_HISTORY, m_history);
}

BEGIN_MESSAGE_MAP(CMFCCal2Dlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	
	ON_BN_CLICKED(IDC_BUTTON1, &CMFCCal2Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFCCal2Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFCCal2Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFCCal2Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFCCal2Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFCCal2Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFCCal2Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CMFCCal2Dlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CMFCCal2Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON0, &CMFCCal2Dlg::OnBnClickedButton0)
	ON_BN_CLICKED(IDC_BUTTON_DOT, &CMFCCal2Dlg::OnBnClickedButtonDot)
	ON_BN_CLICKED(IDC_BUTTON_ADD, &CMFCCal2Dlg::OnBnClickedButtonAdd)
	ON_BN_CLICKED(IDC_BUTTON_SUB, &CMFCCal2Dlg::OnBnClickedButtonSub)
	ON_BN_CLICKED(IDC_BUTTON_MULTI, &CMFCCal2Dlg::OnBnClickedButtonMulti)
	ON_BN_CLICKED(IDC_BUTTON_DEVIDE, &CMFCCal2Dlg::OnBnClickedButtonDevide)
	ON_BN_CLICKED(IDC_BUTTON_EQUAL, &CMFCCal2Dlg::OnBnClickedButtonEqual)
	ON_BN_CLICKED(IDC_BUTTON17, &CMFCCal2Dlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON_CE, &CMFCCal2Dlg::OnBnClickedButtonCe)
	ON_BN_CLICKED(IDC_BUTTON_Neg, &CMFCCal2Dlg::OnBnClickedButtonNeg)
END_MESSAGE_MAP()


// CMFCCal2Dlg message handlers

BOOL CMFCCal2Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	CString display{""};
	m_input.SetWindowText(display);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCCal2Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCCal2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}





void CMFCCal2Dlg::OnBnClickedButton1()
{
	setChar('1');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButton2()
{
	setChar('2');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButton3()
{
	setChar('3');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButton4()
{
	setChar('4');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButton5()
{
	setChar('5');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButton6()
{
	setChar('6');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButton7()
{
	setChar('7');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButton8()
{
	setChar('8');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButton9()
{
	setChar('9');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButton0()
{
	setChar('0');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButtonDot()
{
	if (dotCount > 0) {
		MessageBox("Can't use multiple 'dot' ", "warning", MB_OK | MB_ICONERROR);
		return;
	}
	setChar('.');
	dotCount++;
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButtonAdd()
{
	
	setOperator('+');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButtonSub()
{
	setOperator('-');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButtonMulti()
{
	setOperator('x');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButtonDevide()
{
	setOperator('/');
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButtonEqual()
{
	if (num1 == "" || num2 == "") {
		MessageBox("Input can't be empty.", "warning", MB_OK | MB_ICONERROR);
		OnBnClickedButton17();
		return;
	}
	
	double n1, n2;
	n1 = std::atof(num1);
	n2 = std::atof(num2);
	C_Calculator c1(n1, n2, oper);
	CString output = c1.solve();
	m_input.SetWindowTextA(output);
	m_history.SetWindowText(num1+oper+num2);
	if (output == "Undefiend.") {
		num2 = "";
	
	}else num2 = output;
	num1 = "";
	
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButton17()
{
	m_history.SetWindowText("");
	m_input.SetWindowText("");
	num1 = "";
	num2 = "";
	oper = ' ';
	// TODO: Add your control notification handler code here
}


void CMFCCal2Dlg::OnBnClickedButtonCe()
{
	num2 = "";
	m_input.SetWindowText("");
	// TODO: Add your control notification handler code here
}

void CMFCCal2Dlg::setOperator(char op) {
	if (num1 != "") {
		OnBnClickedButtonEqual();
	}
	oper = op;
	m_history.SetWindowText(num2 + op);
	num1 = num2;
	num2 = "";
	m_input.SetWindowText(num2); 
	dotCount = 0;
	
	
}

void CMFCCal2Dlg::setChar(char c) {
	m_input.GetWindowTextA(num2);
	num2 += c;
	m_input.SetWindowTextA(num2);
}

void CMFCCal2Dlg::OnBnClickedButtonNeg()
{
	setChar('-');
	// TODO: Add your control notification handler code here
}
