#include "Main.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	SummerGameProject::Main form;	// Project1 - ���� ������Ʈ �̸�
	Application::Run(% form);
}

