/*
	Afonso Santos
	19/01/2019
	Descrição do projeto: Visualizador de ficheiros TXT básico
	Linguagem: C++ com CLR
*/

#include "FirstForm.h"

using namespace System;

[STAThreadAttribute]

// Função main
int main()
{
	// Ativa os estilos visuais do Windows 10
	Windows::Forms::Application::EnableVisualStyles();

	// Abre o formulário FirstForm ao abrir o programa
	System::Windows::Forms::Application::Run(gcnew VerTXT::FirstForm());
	return 0;
}