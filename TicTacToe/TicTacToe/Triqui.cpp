#include "Triqui.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	TicTacToe::Triqui form;
	Application::Run(%form);
}