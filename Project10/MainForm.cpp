#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project10::MainForm form;
	Application::Run(%form);
};