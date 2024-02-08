// RENUJAN J.
// 2022/E/065
// EC2010
//Group: B
// Lab: 04
// Program Description: [Clicks on the picture word related to that only appear on the screen.]
// Certificate of Authenticity: 
// I certify that the code in the method function main of this project
// is entirely my own work.
// Follow this with a description of the type of assistance.

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	GUI2022e06502::MyForm frm;
	Application::Run(% frm);
}


