#include "Kalkulator_Lengkap.h"

using namespace System;
using namespace System::Windows::Forms;
	[STAThreadAttribute]

		void main() {
		Application::SetCompatibleTextRenderingDefault(false);
		Application::EnableVisualStyles();
		Project1::MyForm frm;
		Application::Run(% frm);

	}