
// MFCCal2Dlg.h : header file
//

#pragma once


// CMFCCal2Dlg dialog
class CMFCCal2Dlg : public CDialogEx
{
// Construction
public:
	CMFCCal2Dlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCCAL2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString num1, num2;
	char oper;
	CEdit m_input;
	CEdit m_history;
	int dotCount = 0;
	void setOperator(char op);
	void setChar(char c);

	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButtonDot();
	afx_msg void OnBnClickedButtonAdd();
	afx_msg void OnBnClickedButtonSub();
	afx_msg void OnBnClickedButtonMulti();
	afx_msg void OnBnClickedButtonDevide();
	afx_msg void OnBnClickedButtonEqual();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButtonCe();
	afx_msg void OnBnClickedButtonNeg();
};
