// ListTestDlg.h : header file
//

#if !defined(AFX_LISTTESTDLG_H__9B4BB68D_2D93_43C7_B6B1_82BC77C50FB1__INCLUDED_)
#define AFX_LISTTESTDLG_H__9B4BB68D_2D93_43C7_B6B1_82BC77C50FB1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CListTestDlg dialog

class CListTestDlg : public CDialog
{
// Construction
public:
	CListTestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CListTestDlg)
	enum { IDD = IDD_LISTTEST_DIALOG };
	CListCtrl	m_list;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CListTestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CListTestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LISTTESTDLG_H__9B4BB68D_2D93_43C7_B6B1_82BC77C50FB1__INCLUDED_)
