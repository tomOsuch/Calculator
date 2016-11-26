#include "Plansza.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int Main()
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Kalkulator::Plansza forma;
	Application::Run(%forma);

	return 0;
}