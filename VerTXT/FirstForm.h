/*
	Afonso Santos
	19/01/2019
	Descrição do projeto: Visualizador de ficheiros TXT básico
	Linguagem: C++ com CLR
*/

#pragma once

namespace VerTXT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

	/// <summary>
	/// Sumário para FirstForm
	/// </summary>
	public ref class FirstForm : public System::Windows::Forms::Form
	{
	public:
		FirstForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~FirstForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::RichTextBox^  mybox;
	private: System::Windows::Forms::OpenFileDialog^  myDialog;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ficheiroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  abrirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  limparToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sobreToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  sobreOProgramaToolStripMenuItem;
	protected:



	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mybox = (gcnew System::Windows::Forms::RichTextBox());
			this->myDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ficheiroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->abrirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->limparToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sobreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sobreOProgramaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// mybox
			// 
			this->mybox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mybox->Location = System::Drawing::Point(0, 27);
			this->mybox->Name = L"mybox";
			this->mybox->ReadOnly = true;
			this->mybox->Size = System::Drawing::Size(914, 463);
			this->mybox->TabIndex = 1;
			this->mybox->Text = L"";
			// 
			// myDialog
			// 
			this->myDialog->FileName = L"Abrir";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ficheiroToolStripMenuItem,
					this->sobreToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(914, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ficheiroToolStripMenuItem
			// 
			this->ficheiroToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->abrirToolStripMenuItem,
					this->limparToolStripMenuItem
			});
			this->ficheiroToolStripMenuItem->Name = L"ficheiroToolStripMenuItem";
			this->ficheiroToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->ficheiroToolStripMenuItem->Text = L"Ficheiro";
			// 
			// abrirToolStripMenuItem
			// 
			this->abrirToolStripMenuItem->Name = L"abrirToolStripMenuItem";
			this->abrirToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->abrirToolStripMenuItem->Text = L"Abrir";
			this->abrirToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::abrirToolStripMenuItem_Click);
			// 
			// limparToolStripMenuItem
			// 
			this->limparToolStripMenuItem->Name = L"limparToolStripMenuItem";
			this->limparToolStripMenuItem->Size = System::Drawing::Size(111, 22);
			this->limparToolStripMenuItem->Text = L"Limpar";
			this->limparToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::limparToolStripMenuItem_Click);
			// 
			// sobreToolStripMenuItem
			// 
			this->sobreToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->sobreOProgramaToolStripMenuItem });
			this->sobreToolStripMenuItem->Name = L"sobreToolStripMenuItem";
			this->sobreToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->sobreToolStripMenuItem->Text = L"Sobre";
			// 
			// sobreOProgramaToolStripMenuItem
			// 
			this->sobreOProgramaToolStripMenuItem->Name = L"sobreOProgramaToolStripMenuItem";
			this->sobreOProgramaToolStripMenuItem->Size = System::Drawing::Size(178, 22);
			this->sobreOProgramaToolStripMenuItem->Text = L"Sobre o programa...";
			this->sobreOProgramaToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::sobreOProgramaToolStripMenuItem_Click);
			// 
			// FirstForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 490);
			this->Controls->Add(this->mybox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"FirstForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FirstForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FirstForm::FirstForm_FormClosing);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// Ao fechar o formulário FirstForm
	private: System::Void FirstForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

		// Mostra ao utilizador uma mensagem para confirmar o fecho do programa
		e->Cancel = MessageBox::Show("Quer mesmo sair?", "Sair", MessageBoxButtons::YesNo, MessageBoxIcon::Question) != System::Windows::Forms::DialogResult::Yes;
	}

	// Ao clicar no botão abrir
	private: System::Void abrirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		// Limpa a caixa de texto cada vez que o utilizador clica no botão
		mybox->Clear();

		// Filtra os ficheiros que podem ser selecionados na caixa de diálogo
		myDialog->Filter = "Ficheiros TXT (*.txt)|*.txt|Todos os ficheiros (*)|*";

		// Condição para verificar se o utilizador selecionou ou não algum ficheiro
		// Permite que o utilizador feche a caixa de diálogo sem interromper o programa
		if (myDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Cria uma String para armazenar o nome do ficheiro a abrir
			String^ pth = myDialog->FileName;

			// Cria uma String e armazena nela todas as linhas do ficheiro selecionado
			array<String^>^ myarr = File::ReadAllLines(pth);

		for each (String^ ST in myarr)
		{
			// Preenche a caixa de texto com as linhas da String
			mybox->AppendText(ST + "\n");
		}
	}
}

	// Ao clicar no item de menu Limpar
	private: System::Void limparToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		// Limpa a caixa de texto
		mybox->Clear();
	}

	// Ao clicar no item de menu Sobre
	private: System::Void sobreOProgramaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		MessageBox::Show("Programa criado por Afonso Santos, em 19/01/2019.\nMais informações em http://afonsosantos.x10.mx/portal", "Sobre o programa", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
};
}