#pragma once  //______________________________________ Promedio.h  
#include "Resource.h"
class Promedio : public Win::Dialog
{
public:
	Promedio()
	{
	}
	~Promedio()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lb1;
	Win::Label lb2;
	Win::Label lb3;
	Win::Label lb4;
	Win::Label lb5;
	Win::Label lb6;
	Win::Label sep1;
	Win::Label lb7;
	Win::Textbox tbxX1;
	Win::Textbox tbxX2;
	Win::Textbox tbxX3;
	Win::Textbox tbxX4;
	Win::Textbox tbxX5;
	Win::Textbox tbxX6;
	Win::Textbox tbxPromedio;
	Win::Button bt1;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(360);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(309);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Promedio";
		lb1.Create(NULL, L"Física", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 19, 25, 86, 25, hWnd, 1000);
		lb2.Create(NULL, L"Física 2", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 18, 65, 87, 25, hWnd, 1001);
		lb3.Create(NULL, L"Calculo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 16, 105, 88, 25, hWnd, 1002);
		lb4.Create(NULL, L"Programación", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 16, 147, 86, 25, hWnd, 1003);
		lb5.Create(NULL, L"Español", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 16, 185, 86, 25, hWnd, 1004);
		lb6.Create(NULL, L"Algebra", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 16, 222, 86, 25, hWnd, 1005);
		sep1.Create(NULL, NULL, WS_CHILD | WS_VISIBLE | SS_ETCHEDHORZ, 11, 263, 257, 5, hWnd, 1006);
		lb7.Create(NULL, L"Promedio", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 24, 277, 79, 25, hWnd, 1007);
		tbxX1.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 134, 28, 125, 25, hWnd, 1008);
		tbxX2.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 133, 63, 127, 25, hWnd, 1009);
		tbxX3.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 132, 101, 128, 25, hWnd, 1010);
		tbxX4.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 133, 143, 126, 25, hWnd, 1011);
		tbxX5.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 135, 184, 126, 25, hWnd, 1012);
		tbxX6.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 135, 222, 127, 25, hWnd, 1013);
		tbxPromedio.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 134, 275, 127, 25, hWnd, 1014);
		bt1.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 292, 278, 61, 22, hWnd, 1015);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lb1.Font = fontArial014A;
		lb2.Font = fontArial014A;
		lb3.Font = fontArial014A;
		lb4.Font = fontArial014A;
		lb5.Font = fontArial014A;
		lb6.Font = fontArial014A;
		lb7.Font = fontArial014A;
		tbxX1.Font = fontArial014A;
		tbxX2.Font = fontArial014A;
		tbxX3.Font = fontArial014A;
		tbxX4.Font = fontArial014A;
		tbxX5.Font = fontArial014A;
		tbxX6.Font = fontArial014A;
		tbxPromedio.Font = fontArial014A;
		bt1.Font = fontArial014A;
	}
	//_________________________________________________
	void bt1_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (bt1.IsEvent(e, BN_CLICKED)) {bt1_Click(e); return true;}
		return false;
	}
};
