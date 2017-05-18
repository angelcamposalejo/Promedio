#include "stdafx.h"  //________________________________________ Promedio.cpp
#include "Promedio.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	Promedio app;
	return app.BeginDialog(IDI_Promedio, hInstance);
}

void Promedio::Window_Open(Win::Event& e)
{
	const double x1 = tbxX1.DoubleValue;
	const double x2 = tbxX2.DoubleValue;
	const double x3 = tbxX3.DoubleValue;
	const double x4 = tbxX4.DoubleValue;
	const double x5 = tbxX5.DoubleValue;
	const double x6 = tbxX6.DoubleValue;
	const double promedio = (x1 + x2 + x3 + x4 + x5 + x6) / 6;
	tbxPromedio.DoubleValue = promedio;
}

void Promedio::bt1_Click(Win::Event& e)
{
}

