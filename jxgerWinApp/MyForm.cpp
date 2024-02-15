#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) { //String прописан в System::Windows::Forms; ^ - автоматическая очистка памяти...
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	jxgerWinApp::MyForm form;

	Application::Run(% form); //% т.к. передаем ссылку по ref


}

