#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) { //String �������� � System::Windows::Forms; ^ - �������������� ������� ������...
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	jxgerWinApp::MyForm form;

	Application::Run(% form); //% �.�. �������� ������ �� ref


}

