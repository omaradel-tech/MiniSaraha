#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main2(array <String^ >^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew SarahaProject::MyForm1);


}