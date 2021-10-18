
// MFCSensorDlg.h: archivo de encabezado
//

#pragma once


// Cuadro de diálogo de CMFCSensorDlg
class CMFCSensorDlg : public CDialogEx
{
// Construcción
public:
	CMFCSensorDlg(CWnd* pParent = nullptr);	// Constructor estándar

// Datos del cuadro de diálogo
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCSENSOR_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// Compatibilidad con DDX/DDV


// Implementación
protected:
	HICON m_hIcon;

	// Funciones de asignación de mensajes generadas
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	
	afx_msg void OnBnClickedBtnRx();
	afx_msg void OnEnChangeEdtRx();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedBtnDesactivar();
protected:
	double _Centigrados;
	double _Fahrenheit;
public:
	afx_msg void OnClickedBtnConvertir();
	afx_msg void OnBnClickedBtnSeparar();
};
