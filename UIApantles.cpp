#include "UIApantles.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace Apantles;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Apantles::UIApantles form;
	Application::Run(% form);
}

 