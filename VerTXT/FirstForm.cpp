/*
	Afonso Santos
	19/01/2019
	Descri��o do projeto: Visualizador de ficheiros TXT b�sico
	Linguagem: C++ com CLR
*/

#include "FirstForm.h"

using namespace System;

[STAThreadAttribute]

// Fun��o main
int main()
{
	// Ativa os estilos visuais do Windows 10
	Windows::Forms::Application::EnableVisualStyles();

	// Abre o formul�rio FirstForm ao abrir o programa
	System::Windows::Forms::Application::Run(gcnew VerTXT::FirstForm());
	return 0;
}