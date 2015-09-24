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
		int movimiento;
		String^ jugador;
		bool AI;
		String^ maquina;
		array<String^>^ Pos;
		int posMin;
		int posMax;
		bool ganador;
		bool empate;
	private: System::Windows::Forms::Button^  VS;
	private: System::Windows::Forms::Button^  VSAI;
	private: System::Windows::Forms::Label^  label1;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->gameSpace = (gcnew System::Windows::Forms::DataGridView());
			this->Col1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Restart = (gcnew System::Windows::Forms::Button());
			this->VS = (gcnew System::Windows::Forms::Button());
			this->VSAI = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backToMenu = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gameSpace))->BeginInit();
			this->SuspendLayout();
			// 
			// gameSpace
			// 
			this->gameSpace->AllowUserToAddRows = false;
			this->gameSpace->AllowUserToDeleteRows = false;
			this->gameSpace->AllowUserToResizeColumns = false;
			this->gameSpace->AllowUserToResizeRows = false;
			this->gameSpace->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->gameSpace->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gameSpace->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->Padding = System::Windows::Forms::Padding(100);
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->gameSpace->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->gameSpace->ColumnHeadersHeight = 4;
			this->gameSpace->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->gameSpace->ColumnHeadersVisible = false;
			this->gameSpace->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Col1, this->Col2,
					this->Col3
			});
			this->gameSpace->Cursor = System::Windows::Forms::Cursors::Hand;
			this->gameSpace->Location = System::Drawing::Point(312, 110);
			this->gameSpace->MultiSelect = false;
			this->gameSpace->Name = L"gameSpace";
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->gameSpace->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->gameSpace->RowHeadersVisible = false;
			this->gameSpace->RowHeadersWidth = 4;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->gameSpace->RowsDefaultCellStyle = dataGridViewCellStyle12;
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
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Col1->DefaultCellStyle = dataGridViewCellStyle8;
			this->Col1->HeaderText = L"";
			this->Col1->Name = L"Col1";
			// 
			// Col2
			// 
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Col2->DefaultCellStyle = dataGridViewCellStyle9;
			this->Col2->HeaderText = L"";
			this->Col2->Name = L"Col2";
			// 
			// Col3
			// 
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Col3->DefaultCellStyle = dataGridViewCellStyle10;
			this->Col3->HeaderText = L"";
			this->Col3->Name = L"Col3";
			// 
			// Restart
			// 
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
			this->backToMenu->Location = System::Drawing::Point(1080, 573);
			this->backToMenu->Name = L"backToMenu";
			this->backToMenu->Size = System::Drawing::Size(128, 44);
			this->backToMenu->TabIndex = 13;
			this->backToMenu->Text = L"Menu";
			this->backToMenu->UseVisualStyleBackColor = true;
			this->backToMenu->Visible = false;
			this->backToMenu->Click += gcnew System::EventHandler(this, &Triqui::backToMenu_Click);
			// 
			// Triqui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1220, 631);
			this->Controls->Add(this->backToMenu);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->VSAI);
			this->Controls->Add(this->VS);
			this->Controls->Add(this->Restart);
			this->Controls->Add(this->gameSpace);
			this->Name = L"Triqui";
			this->Text = L"Triqui";
			this->Load += gcnew System::EventHandler(this, &Triqui::Triqui_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gameSpace))->EndInit();
			this->ResumeLayout(false);

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
	}

	private: System::Void VSAI_Click(System::Object^  sender, System::EventArgs^  e) {
		VS->Visible = false;
		VSAI->Visible = false;
		gameSpace->Visible = true;
		Restart->Visible = true;
		backToMenu->Visible = true;
		restart();
		AI = true;
	}

	private: System::Void backToMenu_Click(System::Object^  sender, System::EventArgs^  e) {
		VS->Visible = true;
		VSAI->Visible = true;
		gameSpace->Visible = false;
		Restart->Visible = false;
		backToMenu->Visible = false;
		restart();
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
				if (AI == false) {
					if (jugador == "X") {
						jugador = "O";
					}
					else if (jugador == "O") {
						jugador = "X";
					}
				}
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
			}
			if (juegoValido == true && ganador == false && empate == false) {
				int mover = CPUMove();
				Pos[mover] = maquina;
				PosToGamespace(); 
				dataGridtoArray(gameSpace);
				winORdraw();
			}
		}
	}

	private: System::Void Restart_Click(System::Object^  sender, System::EventArgs^  e) {//restart
		restart();
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
				}
				if (winner(Pos) == -1) {
					MessageBox::Show("Gana " + maquina);
					ganador = true;
					gameSpace->Enabled = false;
				}
				if (draw() == 0) {
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
						Pos[cont-1] = " ";
					}
				}
			}

			int CPUMove() {
				if (Pos[4]->Equals(" ")) { return 4; } //Si el centro esta libre
				/*for (int i = 0; i < 9; i++) { //Si puede ganar o le ganan o empata
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
				}*/
				//Minimax
				int i, resTemp;
				movimiento = -1;
				int minimo = 2;
				for (i = 0; i < 9; i++) {
					if (Pos[i]->Equals(" ")) { //minimiza para O
						Pos[i] = maquina;
						resTemp = minimax(jugador);
						if (resTemp < minimo) {
							minimo = resTemp;
							movimiento = i;
						}
						Pos[i] = " ";
					}
				}
				return movimiento;
				
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
};
}
