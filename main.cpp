#include "Driver.h"
#include "Form1.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	f1unlocked::MyForm form; //project 91 is the name of my project and Myform is the name of my form/source file wtvr
	Application::Run(% form);
}
