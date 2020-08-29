#ifndef BASIC_DIALOG_H

#define BASIC_DIALOG_H

#include "Win32Basic.h"

//ģ̬�Ի������
class BasicModalDialog
{
protected:

	HWND m_hDlg = NULL;				//�Ի��򴰿ھ��
	HINSTANCE m_hInst = NULL;		//��ǰʵ�����
	BOOL Init(HINSTANCE hInstance, LPCTSTR c_lpszTemplateName, HWND hWndParent); 
	virtual void MessageProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam) = 0;		//��Ϣ������

	bool IsButtonCheck(int buttonID) const;
	void EnableButton(int buttonID);
	void DisableButton(int buttonID);
	void SetUnChecked(int buttonID);
	void SetChecked(int buttonID);
	
private: 

	static INT_PTR CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam); 
};

#endif	//#ifndef BASIC_DIALOG_H
