
// testDlg.h : ͷ�ļ�
//

#pragma once


// CtestDlg �Ի���
class CtestDlg : public CDialogEx
{
// ����
public:
	CtestDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_TEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClicked1();
	CString m_str;
	double flag;
	double temp;
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedJieguo();
	afx_msg void OnBnClickedClacter();
	afx_msg void OnBnClickedMinu();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClickedMinu2();
	afx_msg void OnBnClickedchufa();
	afx_msg void OnBnClickedchengfa();
	afx_msg void OnBnClickedbaifenhao();
	
	afx_msg void OnBnClickedbaifenhao2();
	afx_msg void OnBnClickedbaifenhao3();
	afx_msg void OnBnClickedClacter2();
protected:
	void mydelete(CString &ts);
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedClacter3();
	afx_msg void OnBnClickedClacter4();
protected:
	double temp1,temp2;
public:
	afx_msg void OnBnClickedClacter5();
	afx_msg void OnBnClickedClacter6();
	afx_msg void OnBnClickedClacter7();
};

