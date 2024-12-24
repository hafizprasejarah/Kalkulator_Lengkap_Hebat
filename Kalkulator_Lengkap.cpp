
#include "Kalkulator1.h"

using namespace System;
using namespace System::Windows::Forms;
	[STAThreadAttribute]

		void main() {
		Application::SetCompatibleTextRenderingDefault(false);
		Application::EnableVisualStyles();
		Kalkulator1::Main frm;
		Application::Run(% frm);

	}