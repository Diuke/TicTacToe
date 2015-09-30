#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Triqui
	/// </summary>
	public ref class Triqui : public System::Windows::Forms::Form
	{
		//Var globales
		bool facil;
		int movimiento;
		String^ jugador;
		bool AI;
		String^ maquina;
		array<String^>^ Pos;
		int posMin;
		int posMax;
		int marcaO, marcaX;
		bool ganador;
		bool empate;
	private: System::Windows::Forms::Button^  VS;
	private: System::Windows::Forms::Button^  VSAI;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  DificultadLabel;

	private: System::Windows::Forms::Button^  Facil;
	private: System::Windows::Forms::Button^  Dificil;
	private: System::Windows::Forms::Label^  jugando;
	private: System::Windows::Forms::Label^  Juega;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  marcador0;
	private: System::Windows::Forms::Label^  marcadorX;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  backToMenu;
	public:
		Triqui(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			jugador = "X";
			maquina = "O";
			marcaO = 0;
			marcaX = 0;
			AI = false;
			Pos = gcnew array<String^>{" ", " ", " ", " ", " ", " ", " ", " ", " "};
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Triqui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  gameSpace;



	private: System::Windows::Forms::Button^  Restart;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Col1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Col2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Col3;





	protected:




	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Triqui::typeid));
			this->gameSpace = (gcnew System::Windows::Forms::DataGridView());
			this->Col1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Restart = (gcnew System::Windows::Forms::Button());
			this->VS = (gcnew System::Windows::Forms::Button());
			this->VSAI = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backToMenu = (gcnew System::Windows::Forms::Button());
			this->DificultadLabel = (gcnew System::Windows::Forms::Label());
			this->Facil = (gcnew System::Windows::Forms::Button());
			this->Dificil = (gcnew System::Windows::Forms::Button());
			this->jugando = (gcnew System::Windows::Forms::Label());
			this->Juega = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->marcador0 = (gcnew System::Windows::Forms::Label());
			this->marcadorX = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->gameSpace))->BeginInit();
			this->SuspendLayout();
			// 
			// gameSpace
			// 
			this->gameSpace->AllowUserToAddRows = false;
			this->gameSpace->AllowUserToDeleteRows = false;
			this->gameSpace->AllowUserToResizeColumns = false;
			this->gameSpace->AllowUserToResizeRows = false;
			this->gameSpace->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->gameSpace->BackgroundColor = System::Drawing::Color::White;
			this->gameSpace->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gameSpace->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->gameSpace->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->Padding = System::Windows::Forms::Padding(100);
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->gameSpace->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->gameSpace->ColumnHeadersHeight = 4;
			this->gameSpace->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->gameSpace->ColumnHeadersVisible = false;
			this->gameSpace->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Col1, this->Col2, 
				this->Col3});
			this->gameSpace->Cursor = System::Windows::Forms::Cursors::Hand;
			this->gameSpace->GridColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gameSpace->Location = System::Drawing::Point(312, 110);
			this->gameSpace->MultiSelect = false;
			this->gameSpace->Name = L"gameSpace";
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->gameSpace->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->gameSpace->RowHeadersVisible = false;
			this->gameSpace->RowHeadersWidth = 4;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->gameSpace->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->gameSpace->RowTemplate->Height = 125;
			this->gameSpace->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->gameSpace->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->gameSpace->Size = System::Drawing::Size(591, 375);
			this->gameSpace->TabIndex = 9;
			this->gameSpace->Visible = false;
			this->gameSpace->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Triqui::gameSpace_CellClick);
			// 
			// Col1
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Col1->DefaultCellStyle = dataGridViewCellStyle2;
			this->Col1->HeaderText = L"";
			this->Col1->Name = L"Col1";
			// 
			// Col2
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Col2->DefaultCellStyle = dataGridViewCellStyle3;
			this->Col2->HeaderText = L"";
			this->Col2->Name = L"Col2";
			// 
			// Col3
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Col3->DefaultCellStyle = dataGridViewCellStyle4;
			this->Col3->HeaderText = L"";
			this->Col3->Name = L"Col3";
			// 
			// Restart
			// 
			this->Restart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Restart->Location = System::Drawing::Point(12, 573);
			this->Restart->Name = L"Restart";
			this->Restart->Size = System::Drawing::Size(128, 44);
			this->Restart->TabIndex = 1;
			this->Restart->Text = L"Reiniciar";
			this->Restart->UseVisualStyleBackColor = true;
			this->Restart->Visible = false;
			this->Restart->Click += gcnew System::EventHandler(this, &Triqui::Restart_Click);
			// 
			// VS
			// 
			this->VS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->VS->Location = System::Drawing::Point(475, 162);
			this->VS->Name = L"VS";
			this->VS->Size = System::Drawing::Size(263, 72);
			this->VS->TabIndex = 10;
			this->VS->Text = L"2 Jugadores";
			this->VS->UseVisualStyleBackColor = true;
			this->VS->Click += gcnew System::EventHandler(this, &Triqui::VS_Click);
			// 
			// VSAI
			// 
			this->VSAI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->VSAI->Location = System::Drawing::Point(475, 368);
			this->VSAI->Name = L"VSAI";
			this->VSAI->Size = System::Drawing::Size(263, 72);
			this->VSAI->TabIndex = 11;
			this->VSAI->Text = L"VS AI";
			this->VSAI->UseVisualStyleBackColor = true;
			this->VSAI->Click += gcnew System::EventHandler(this, &Triqui::VSAI_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1196, 77);
			this->label1->TabIndex = 12;
			this->label1->Text = L"TRIQUI";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// backToMenu
			// 
			this->backToMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->backToMenu->Location = System::Drawing::Point(1080, 573);
			this->backToMenu->Name = L"backToMenu";
			this->backToMenu->Size = System::Drawing::Size(128, 44);
			this->backToMenu->TabIndex = 13;
			this->backToMenu->Text = L"Menu";
			this->backToMenu->UseVisualStyleBackColor = true;
			this->backToMenu->Visible = false;
			this->backToMenu->Click += gcnew System::EventHandler(this, &Triqui::backToMenu_Click);
			// 
			// DificultadLabel
			// 
			this->DificultadLabel->BackColor = System::Drawing::Color::Transparent;
			this->DificultadLabel->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DificultadLabel->Location = System::Drawing::Point(12, 138);
			this->DificultadLabel->Name = L"DificultadLabel";
			this->DificultadLabel->Size = System::Drawing::Size(1196, 77);
			this->DificultadLabel->TabIndex = 14;
			this->DificultadLabel->Text = L"DIFICULTAD";
			this->DificultadLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->DificultadLabel->Visible = false;
			// 
			// Facil
			// 
			this->Facil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Facil->Location = System::Drawing::Point(475, 240);
			this->Facil->Name = L"Facil";
			this->Facil->Size = System::Drawing::Size(263, 72);
			this->Facil->TabIndex = 15;
			this->Facil->Text = L"Facil";
			this->Facil->UseVisualStyleBackColor = true;
			this->Facil->Visible = false;
			this->Facil->Click += gcnew System::EventHandler(this, &Triqui::Facil_Click);
			// 
			// Dificil
			// 
			this->Dificil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Dificil->Location = System::Drawing::Point(475, 398);
			this->Dificil->Name = L"Dificil";
			this->Dificil->Size = System::Drawing::Size(263, 72);
			this->Dificil->TabIndex = 16;
			this->Dificil->Text = L"Imposible";
			this->Dificil->UseVisualStyleBackColor = true;
			this->Dificil->Visible = false;
			this->Dificil->Click += gcnew System::EventHandler(this, &Triqui::Dificil_Click);
			// 
			// jugando
			// 
			this->jugando->AutoSize = true;
			this->jugando->BackColor = System::Drawing::Color::Transparent;
			this->jugando->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->jugando->Location = System::Drawing::Point(87, 275);
			this->jugando->Name = L"jugando";
			this->jugando->Size = System::Drawing::Size(38, 37);
			this->jugando->TabIndex = 17;
			this->jugando->Text = L"X";
			this->jugando->Visible = false;
			// 
			// Juega
			// 
			this->Juega->AutoSize = true;
			this->Juega->BackColor = System::Drawing::Color::Transparent;
			this->Juega->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Juega->Location = System::Drawing::Point(61, 229);
			this->Juega->Name = L"Juega";
			this->Juega->Size = System::Drawing::Size(96, 31);
			this->Juega->TabIndex = 18;
			this->Juega->Text = L"Juega:";
			this->Juega->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(-1, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Version Beta 1.0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(700, 536);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 37);
			this->label3->TabIndex = 20;
			this->label3->Text = L"O";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(468, 536);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 37);
			this->label4->TabIndex = 21;
			this->label4->Text = L"X";
			this->label4->Visible = false;
			// 
			// marcador0
			// 
			this->marcador0->AutoSize = true;
			this->marcador0->BackColor = System::Drawing::Color::Transparent;
			this->marcador0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->marcador0->Location = System::Drawing::Point(704, 573);
			this->marcador0->Name = L"marcador0";
			this->marcador0->Size = System::Drawing::Size(35, 37);
			this->marcador0->TabIndex = 22;
			this->marcador0->Text = L"0";
			this->marcador0->Visible = false;
			// 
			// marcadorX
			// 
			this->marcadorX->AutoSize = true;
			this->marcadorX->BackColor = System::Drawing::Color::Transparent;
			this->marcadorX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->marcadorX->Location = System::Drawing::Point(468, 573);
			this->marcadorX->Name = L"marcadorX";
			this->marcadorX->Size = System::Drawing::Size(35, 37);
			this->marcadorX->TabIndex = 23;
			this->marcadorX->Text = L"0";
			this->marcadorX->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(530, 499);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 37);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Marcador";
			this->label7->Visible = false;
			// 
			// Triqui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1220, 631);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->marcadorX);
			this->Controls->Add(this->marcador0);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Juega);
			this->Controls->Add(this->jugando);
			this->Controls->Add(this->Dificil);
			this->Controls->Add(this->Facil);
			this->Controls->Add(this->DificultadLabel);
			this->Controls->Add(this->backToMenu);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->VSAI);
			this->Controls->Add(this->VS);
			this->Controls->Add(this->Restart);
			this->Controls->Add(this->gameSpace);
			this->Name = L"Triqui";
			this->Text = L"Triqui";
			this->Load += gcnew System::EventHandler(this, &Triqui::Triqui_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->gameSpace))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Triqui_Load(System::Object^  sender, System::EventArgs^  e) {
		this->gameSpace->Rows->Add(" ", " ", " ");
		this->gameSpace->Rows->Add(" ", " ", " ");
		this->gameSpace->Rows->Add(" ", " ", " ");
		gameSpace->CurrentCell->Selected = false;
		backToMenu->Visible = false;
	}

	private: System::Void VS_Click(System::Object^  sender, System::EventArgs^  e) {
		VS->Visible = false;
		VSAI->Visible = false;
		gameSpace->Visible = true;
		Restart->Visible = true;
		backToMenu->Visible = true;
		restart();
		AI = false;
		jugando->Visible = true;
		Juega->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label7->Visible = true;
		marcador0->Visible = true;
		marcadorX->Visible = true;
	}

	private: System::Void VSAI_Click(System::Object^  sender, System::EventArgs^  e) {
		VS->Visible = false;
		VSAI->Visible = false;
		backToMenu->Visible = true;
		restart();
		AI = true;
		DificultadLabel->Visible = true;
		Dificil->Visible = true;
		Facil->Visible = true;
	}

	private: System::Void backToMenu_Click(System::Object^  sender, System::EventArgs^  e) {
		VS->Visible = true;
		VSAI->Visible = true;
		gameSpace->Visible = false;
		Restart->Visible = false;
		backToMenu->Visible = false;
		restart();
		Dificil->Visible = false;
		Facil->Visible = false;
		DificultadLabel->Visible = false;
		jugando->Visible = false;
		Juega->Visible = false;
		AI = false;
		label3->Visible = false;
		label4->Visible = false;
		label7->Visible = false;
		marcador0->Visible = false;
		marcadorX->Visible = false;
		marcaO = 0;
		marcaX = 0;
		marcador0->Text = "0";
		marcadorX->Text = "0";
	}

	private: System::Void gameSpace_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {//juego principal
		DataGridViewCell^ CeldaActual = gameSpace->CurrentCell;
		ganador = false;
		empate = false;
		bool juegoValido = false;
		if (AI == false) { //2 jugadores
			if (CeldaActual->ReadOnly == false) {
				CeldaActual->Value = jugador;
				dataGridtoArray(gameSpace);
				CeldaActual->ReadOnly = true;
				CeldaActual->Selected = false;
				winORdraw();
				if (ganador == false) {
					if (jugador == "X") {
						jugador = "O";
						jugando->Text = jugador;
					}
					else if (jugador == "O") {
						jugador = "X";
						jugando->Text = jugador;
					}
				}
				marcador0->Text = "" + marcaO;
				marcadorX->Text = "" + marcaX;

			}
		}
		else {
			if (CeldaActual->ReadOnly == false) {
				CeldaActual->Value = jugador;
				dataGridtoArray(gameSpace);
				CeldaActual->ReadOnly = true;
				CeldaActual->Selected = false;
				juegoValido = true;
				winORdraw();
				marcador0->Text = "" + marcaO;
				marcadorX->Text = "" + marcaX;
			}
			if (juegoValido == true && ganador == false && empate == false) {
				if (facil) {
					int mover = CPUMoveFacil();
					Pos[mover] = maquina;
					PosToGamespace();
					dataGridtoArray(gameSpace);
					winORdraw();
					marcador0->Text = "" + marcaO;
					marcadorX->Text = "" + marcaX;
				}
				else {
					int mover = CPUMove();
					Pos[mover] = maquina;
					PosToGamespace();
					dataGridtoArray(gameSpace);
					winORdraw();
					marcador0->Text = "" + marcaO;
					marcadorX->Text = "" + marcaX;
				}
			}
		}
	}

	private: System::Void Restart_Click(System::Object^  sender, System::EventArgs^  e) {//restart
		restart();
	}

	private: System::Void Facil_Click(System::Object^  sender, System::EventArgs^  e) {
		facil = true;
		Facil->Visible = false;
		Dificil->Visible = false;
		DificultadLabel->Visible = false;
		gameSpace->Visible = true;
		Restart->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label7->Visible = true;
		marcador0->Visible = true;
		marcadorX->Visible = true;
	}
	private: System::Void Dificil_Click(System::Object^  sender, System::EventArgs^  e) {
		facil = false;
		Facil->Visible = false;
		Dificil->Visible = false;
		DificultadLabel->Visible = false;
		gameSpace->Visible = true;
		Restart->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
		label7->Visible = true;
		marcador0->Visible = true;
		marcadorX->Visible = true;
	}

			 //funciones custom


			 void restart() {
				 for (int i = 0; i < 3; i++) {
					 for (int j = 0; j < 3; j++) {
						 gameSpace->Rows[i]->Cells[j]->Value = " ";
						 gameSpace->Rows[i]->Cells[j]->ReadOnly = false;
					 }
				 }
				 jugador = "X";
				 maquina = "O";
				 gameSpace->Enabled = true;
				 Pos = gcnew array<String^>{" ", " ", " ", " ", " ", " ", " ", " ", " "};
				 int posMin = 2;
				 int posMax = -2;
				 jugando->Text = jugador;
			 }
			 void dataGridtoArray(DataGridView^ currentGame) { //pasa el gamespace al vector Pos
				 int counter = 0;
				 for (int i = 0; i < 3; i++) {
					 for (int j = 0; j < 3; j++) {
						 if (currentGame->Rows[i]->Cells[j]->Value->Equals("X")) {
							 Pos[counter] = "X";
							 counter++;
						 }
						 if (currentGame->Rows[i]->Cells[j]->Value->Equals("O")) {
							 Pos[counter] = "O";
							 counter++;
						 }
						 if (currentGame->Rows[i]->Cells[j]->Value->Equals(" ")) {
							 Pos[counter] = " ";
							 counter++;
						 }
					 }
				 }
			 }

			 int draw() {
				 int cont = 0;
				 for (int i = 0; i < 9; i++) {
					 if (Pos[i]->Equals("X") || Pos[i]->Equals("O")) { cont++; }
				 }
				 if (cont == 9) { return 0; }
				 else { return 2; }
			 }

			 int winner(array<String^>^ current) {
				 //{ { 0,1,2 },{ 3,4,5 },{ 6,7,8 },{ 0,3,6 },{ 1,4,7 },{ 2,5,8 },{ 0,4,8 },{ 2,4,6 } };
				 if (current[0]->Equals("X") && current[1]->Equals("X") && current[2]->Equals("X")) { return 1; }
				 if (current[3]->Equals("X") && current[4]->Equals("X") && current[5]->Equals("X")) { return 1; }
				 if (current[6]->Equals("X") && current[7]->Equals("X") && current[8]->Equals("X")) { return 1; }
				 if (current[0]->Equals("X") && current[3]->Equals("X") && current[6]->Equals("X")) { return 1; }
				 if (current[1]->Equals("X") && current[4]->Equals("X") && current[7]->Equals("X")) { return 1; }
				 if (current[2]->Equals("X") && current[5]->Equals("X") && current[8]->Equals("X")) { return 1; }
				 if (current[0]->Equals("X") && current[4]->Equals("X") && current[8]->Equals("X")) { return 1; }
				 if (current[2]->Equals("X") && current[4]->Equals("X") && current[6]->Equals("X")) { return 1; }
				 if (current[0]->Equals("O") && current[1]->Equals("O") && current[2]->Equals("O")) { return -1; }
				 if (current[3]->Equals("O") && current[4]->Equals("O") && current[5]->Equals("O")) { return -1; }
				 if (current[6]->Equals("O") && current[7]->Equals("O") && current[8]->Equals("O")) { return -1; }
				 if (current[0]->Equals("O") && current[3]->Equals("O") && current[6]->Equals("O")) { return -1; }
				 if (current[1]->Equals("O") && current[4]->Equals("O") && current[7]->Equals("O")) { return -1; }
				 if (current[2]->Equals("O") && current[5]->Equals("O") && current[8]->Equals("O")) { return -1; }
				 if (current[0]->Equals("O") && current[4]->Equals("O") && current[8]->Equals("O")) { return -1; }
				 if (current[2]->Equals("O") && current[4]->Equals("O") && current[6]->Equals("O")) { return -1; }
				 return 0;
			 }

			 void winORdraw() {
				 if (winner(Pos) == 1) {
					 MessageBox::Show("Gana " + jugador);
					 ganador = true;
					 gameSpace->Enabled = false;
					 marcaX++;
				 }
				 if (winner(Pos) == -1) {
					 MessageBox::Show("Gana " + maquina);
					 ganador = true;
					 gameSpace->Enabled = false;
					 marcaO++;
				 }
				 if (draw() == 0 && winner(Pos) == 0) {
					 MessageBox::Show("Empate");
					 gameSpace->Enabled = false;
					 empate = true;
				 }
			 }

			 void PosToGamespace() {
				 int cont = 0;
				 for (int i = 0; i < 3; i++) {
					 for (int j = 0; j < 3; j++) {
						 if (Pos[cont]->Equals("X")) {
							 gameSpace->Rows[i]->Cells[j]->Value = "X";
							 gameSpace->Rows[i]->Cells[j]->ReadOnly = true;
						 }
						 if (Pos[cont]->Equals("O")) {
							 gameSpace->Rows[i]->Cells[j]->Value = "O";
							 gameSpace->Rows[i]->Cells[j]->ReadOnly = true;
						 }
						 if (Pos[cont]->Equals(" ")) {
							 gameSpace->Rows[i]->Cells[j]->Value = " ";
						 }
						 cont++;
						 Pos[cont - 1] = " ";
					 }
				 }
			 }

			 int CPUMove() {
				 if (Pos[4]->Equals(" ")) { return 4; } //Si el centro esta libre - if center is free
				 for (int i = 0; i < 9; i++) { //Si puede ganar - checks if it wins
					 if (Pos[i]->Equals(" ")) {
						 Pos[i] = maquina;
						 int gana = winner(Pos);
						 int empate = draw();
						 if (gana == (-1)) {
							 Pos[i] = " ";
							 return i;
						 }
						 Pos[i] = " ";
					 }
				 }
				
				 
				 //Minimax
				int i, resTemp;
				movimiento = -1;
				int minimo = 2;
				for (i = 0; i < 9; i++) {
					if (Pos[i]->Equals(" ")) { //analiza si hay una libre - check if there is a free position
						Pos[i] = maquina; //mueve a esa posicion - moves to the free position
						resTemp = minimax(jugador); //analiza los siguientes movimiento - analize next moves
						if (resTemp < minimo) { //minimiza para O - minimizes for O
							minimo = resTemp;
							movimiento = i; //Selecciona la posicion - select the position
						}
						Pos[i] = " "; //Vuelve a dejar el estado original del tablero - leaves the board on its original state
					}
				}
				return movimiento; //Retorna el movimiento - Returns the movement

			 }


			int minimax(String^ player) {
				int i, res;
				int move = -1;
				int min = 2, max = -2;
				if (winner(Pos) == 1) { return 1; };
				if (winner(Pos) == -1) { return -1; };
				if (draw() == 0) { return 0; };

				for (i = 0; i < 9; i++) {
					if (player->Equals(jugador)) { //maximiza para X
						if (Pos[i]->Equals(" ")) {
							Pos[i] = jugador;
							res = minimax(maquina);
							Pos[i] = " ";
							if (res > max) {
								max = res;
								move = i;
							}
						}

					}
					if (player->Equals(maquina)) { //minimiza para O
						if (Pos[i]->Equals(" ")) {
							Pos[i] = maquina;
							res = minimax(jugador);
							Pos[i] = " ";
							if (res < min) {
								min = res;
								move = i;
							}
						}

					}
				}
				if (player->Equals(maquina)) { return min; }
				if (player->Equals(jugador)) { return max; }
}

			 int CPUMoveFacil() {
				 if (Pos[4]->Equals(" ")) { return 4; } //Si el centro esta libre
				 for (int i = 0; i < 9; i++) { //Si puede ganar o le ganan o empata
					 if (Pos[i]->Equals(" ")) {
						 Pos[i] = maquina;
						 int gana = winner(Pos);
						 int empate = draw();
						 if (gana == 1 || gana == (-1) || draw() == 0) {
							 Pos[i] = " ";
							 return i;
						 }
						 Pos[i] = " ";
						 Pos[i] = jugador;
						 gana = winner(Pos);
						 empate = draw();
						 if (gana == 1 || gana == (-1) || draw() == 0) {
							 Pos[i] = " ";
							 return i;
						 }
						 Pos[i] = " ";
					 }

				 }
				 for (int i = 0; i < 9; i++) {
					 if (Pos[i]->Equals(" ")) {
						 return i;
					 }
				 }
			 }


};
}
