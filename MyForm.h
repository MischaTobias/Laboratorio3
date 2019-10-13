#pragma once
#include "Carta.h"
#include "Pila.h"

namespace Lab3MischaTobias1170919 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::RichTextBox^ rTBPila7;
	private: System::Windows::Forms::RichTextBox^ rTBPila6;
	private: System::Windows::Forms::RichTextBox^ rTBPila5;
	private: System::Windows::Forms::RichTextBox^ rTBPila4;
	private: System::Windows::Forms::RichTextBox^ rTBPila3;
	private: System::Windows::Forms::RichTextBox^ rTBPila2;
	private: System::Windows::Forms::RichTextBox^ rTBPila1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ cBPilaSalida;
	private: System::Windows::Forms::ComboBox^ cBPilaEntrada;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ComboBox^ cBCantidadCartas;
	private: System::Windows::Forms::Button^ btnMoverCartas;
	private: System::Windows::Forms::Button^ btnRepartirCartasDelMazo;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lblCartaMazoPrincipal;



	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->rTBPila7 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBPila6 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBPila5 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBPila4 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBPila3 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBPila2 = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBPila1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->cBPilaSalida = (gcnew System::Windows::Forms::ComboBox());
			this->cBPilaEntrada = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cBCantidadCartas = (gcnew System::Windows::Forms::ComboBox());
			this->btnMoverCartas = (gcnew System::Windows::Forms::Button());
			this->btnRepartirCartasDelMazo = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lblCartaMazoPrincipal = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnIniciar
			// 
			this->btnIniciar->Location = System::Drawing::Point(13, 63);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(102, 20);
			this->btnIniciar->TabIndex = 0;
			this->btnIniciar->Text = L"Iniciar Solitario";
			this->btnIniciar->UseVisualStyleBackColor = true;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &MyForm::btnIniciar_Click);
			// 
			// rTBPila7
			// 
			this->rTBPila7->Location = System::Drawing::Point(133, 64);
			this->rTBPila7->Name = L"rTBPila7";
			this->rTBPila7->Size = System::Drawing::Size(81, 254);
			this->rTBPila7->TabIndex = 1;
			this->rTBPila7->Text = L"";
			// 
			// rTBPila6
			// 
			this->rTBPila6->Location = System::Drawing::Point(231, 64);
			this->rTBPila6->Name = L"rTBPila6";
			this->rTBPila6->Size = System::Drawing::Size(81, 254);
			this->rTBPila6->TabIndex = 2;
			this->rTBPila6->Text = L"";
			// 
			// rTBPila5
			// 
			this->rTBPila5->Location = System::Drawing::Point(329, 64);
			this->rTBPila5->Name = L"rTBPila5";
			this->rTBPila5->Size = System::Drawing::Size(81, 254);
			this->rTBPila5->TabIndex = 3;
			this->rTBPila5->Text = L"";
			// 
			// rTBPila4
			// 
			this->rTBPila4->Location = System::Drawing::Point(427, 64);
			this->rTBPila4->Name = L"rTBPila4";
			this->rTBPila4->Size = System::Drawing::Size(81, 254);
			this->rTBPila4->TabIndex = 4;
			this->rTBPila4->Text = L"";
			// 
			// rTBPila3
			// 
			this->rTBPila3->Location = System::Drawing::Point(524, 64);
			this->rTBPila3->Name = L"rTBPila3";
			this->rTBPila3->Size = System::Drawing::Size(81, 254);
			this->rTBPila3->TabIndex = 5;
			this->rTBPila3->Text = L"";
			// 
			// rTBPila2
			// 
			this->rTBPila2->Location = System::Drawing::Point(621, 64);
			this->rTBPila2->Name = L"rTBPila2";
			this->rTBPila2->Size = System::Drawing::Size(81, 254);
			this->rTBPila2->TabIndex = 6;
			this->rTBPila2->Text = L"";
			// 
			// rTBPila1
			// 
			this->rTBPila1->Location = System::Drawing::Point(722, 64);
			this->rTBPila1->Name = L"rTBPila1";
			this->rTBPila1->Size = System::Drawing::Size(81, 254);
			this->rTBPila1->TabIndex = 7;
			this->rTBPila1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(153, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Pila 7";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(253, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Pila 6";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(351, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Pila 5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(449, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Pila 4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(547, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Pila 3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(641, 48);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Pila 2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(743, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Pila 1";
			// 
			// cBPilaSalida
			// 
			this->cBPilaSalida->Enabled = false;
			this->cBPilaSalida->FormattingEnabled = true;
			this->cBPilaSalida->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
			this->cBPilaSalida->Location = System::Drawing::Point(14, 119);
			this->cBPilaSalida->Name = L"cBPilaSalida";
			this->cBPilaSalida->Size = System::Drawing::Size(101, 21);
			this->cBPilaSalida->TabIndex = 15;
			// 
			// cBPilaEntrada
			// 
			this->cBPilaEntrada->Enabled = false;
			this->cBPilaEntrada->FormattingEnabled = true;
			this->cBPilaEntrada->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
			this->cBPilaEntrada->Location = System::Drawing::Point(14, 162);
			this->cBPilaEntrada->Name = L"cBPilaEntrada";
			this->cBPilaEntrada->Size = System::Drawing::Size(101, 21);
			this->cBPilaEntrada->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 103);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Pila de Salida";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(12, 146);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Pila de Entrada";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 193);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(115, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Cantidad de Cartas";
			// 
			// cBCantidadCartas
			// 
			this->cBCantidadCartas->Enabled = false;
			this->cBCantidadCartas->FormattingEnabled = true;
			this->cBCantidadCartas->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
			this->cBCantidadCartas->Location = System::Drawing::Point(15, 209);
			this->cBCantidadCartas->Name = L"cBCantidadCartas";
			this->cBCantidadCartas->Size = System::Drawing::Size(101, 21);
			this->cBCantidadCartas->TabIndex = 20;
			// 
			// btnMoverCartas
			// 
			this->btnMoverCartas->Enabled = false;
			this->btnMoverCartas->Location = System::Drawing::Point(13, 255);
			this->btnMoverCartas->Name = L"btnMoverCartas";
			this->btnMoverCartas->Size = System::Drawing::Size(102, 20);
			this->btnMoverCartas->TabIndex = 21;
			this->btnMoverCartas->Text = L"Mover Cartas";
			this->btnMoverCartas->UseVisualStyleBackColor = true;
			this->btnMoverCartas->Click += gcnew System::EventHandler(this, &MyForm::btnMoverCartas_Click);
			// 
			// btnRepartirCartasDelMazo
			// 
			this->btnRepartirCartasDelMazo->Enabled = false;
			this->btnRepartirCartasDelMazo->Location = System::Drawing::Point(13, 281);
			this->btnRepartirCartasDelMazo->Name = L"btnRepartirCartasDelMazo";
			this->btnRepartirCartasDelMazo->Size = System::Drawing::Size(102, 37);
			this->btnRepartirCartasDelMazo->TabIndex = 22;
			this->btnRepartirCartasDelMazo->Text = L"Repartir Cartas del Mazo";
			this->btnRepartirCartasDelMazo->UseVisualStyleBackColor = true;
			this->btnRepartirCartasDelMazo->Click += gcnew System::EventHandler(this, &MyForm::btnRepartirCartasDelMazo_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(718, 337);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Mazo Principal";
			// 
			// lblCartaMazoPrincipal
			// 
			this->lblCartaMazoPrincipal->AutoSize = true;
			this->lblCartaMazoPrincipal->Location = System::Drawing::Point(755, 360);
			this->lblCartaMazoPrincipal->Name = L"lblCartaMazoPrincipal";
			this->lblCartaMazoPrincipal->Size = System::Drawing::Size(10, 13);
			this->lblCartaMazoPrincipal->TabIndex = 24;
			this->lblCartaMazoPrincipal->Text = L"-";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 419);
			this->Controls->Add(this->lblCartaMazoPrincipal);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->btnRepartirCartasDelMazo);
			this->Controls->Add(this->btnMoverCartas);
			this->Controls->Add(this->cBCantidadCartas);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->cBPilaEntrada);
			this->Controls->Add(this->cBPilaSalida);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->rTBPila1);
			this->Controls->Add(this->rTBPila2);
			this->Controls->Add(this->rTBPila3);
			this->Controls->Add(this->rTBPila4);
			this->Controls->Add(this->rTBPila5);
			this->Controls->Add(this->rTBPila6);
			this->Controls->Add(this->rTBPila7);
			this->Controls->Add(this->btnIniciar);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Pila* pila = new Pila();
		Pila* pila1 = new Pila();
		Pila* pila2 = new Pila();
		Pila* pila3 = new Pila();
		Pila* pila4 = new Pila();
		Pila* pila5 = new Pila();
		Pila* pila6 = new Pila();
		Pila* pila7 = new Pila();
		Pila* pilaAux = new Pila();

	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {

		Random^ rand = gcnew Random();
		int random;
		int valor = 1;
		int pos = 0;
		int pos1 = 0;
		char color = 'R';
		Carta *vectorCartas[52];
		int cartasUsadas[52];
		for (int j = 0; j < 26; j++)
		{
			Carta *car = new Carta;
			car->color = color;
			car->valor = valor;
			if (valor == 13)
			{
				valor = 1;
			}
			else
			{
				valor++;
			}
			vectorCartas[pos] = car;
			pos++;
		}

		color = 'N';

		for (int i = 26; i < 52; i++)
		{
			Carta* car = new Carta;
			car->color = color;
			car->valor = valor;
			if (valor == 13)
			{
				valor = 1;
			}
			else
			{
				valor++;
			}
			vectorCartas[pos] = car;
			pos++;
		}

		while (pila->NElementos < 52)
		{
			random = rand->Next(0, 52);
			random = random % 52;
			if (!Used(random, cartasUsadas))
			{
				pila->Apilar(*vectorCartas[random]);
				cartasUsadas[pos1] = random;
				pos1++;
			}
		}

		while (pila1->NElementos < 1 || pila2->NElementos < 2 || pila3->NElementos < 3 || pila4->NElementos < 4 || pila5->NElementos < 5 || pila6->NElementos < 6 || pila7->NElementos < 7)
		{
			if (pila7->NElementos < 7)
			{
				pila7->Apilar(pila->Desapilar());
			}
			else if (pila6->NElementos < 6)
			{
				pila6->Apilar(pila->Desapilar());
			}
			else if (pila5->NElementos <  5)
			{
				pila5->Apilar(pila->Desapilar());
			}
			else if (pila4->NElementos < 4)
			{
				pila4->Apilar(pila->Desapilar());
			}
			else if (pila3->NElementos < 3)
			{
				pila3->Apilar(pila->Desapilar());
			}
			else if (pila2->NElementos < 2)
			{
				pila2->Apilar(pila->Desapilar());
			}
			else
			{
				pila1->Apilar(pila->Desapilar());
			}
		}

		CambiarPilas();

		cBCantidadCartas->Enabled = true;
		cBPilaEntrada->Enabled = true;
		cBPilaSalida->Enabled = true;
		btnMoverCartas->Enabled = true;
		btnRepartirCartasDelMazo->Enabled = true;

	}

	private: System::Void CambiarPilas() {
		System::String^ t = "";
		for (int i = 0; i < pila7->NElementos; i++)
		{
			if (i < (pila7->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila7->ObtenerCima())->color == 'N')
				{
					t += ((&pila7->ObtenerCima())->valor).ToString() + "N";
					rTBPila7->Text = t;
				}
				else
				{
					t += ((&pila7->ObtenerCima())->valor).ToString() + "R";
					rTBPila7->Text = t;
				}
				
			}
		}

		if (pila7->NElementos == 0)
		{
			rTBPila7->Text = t;
		}

		t = "";

		for (int i = 0; i < pila6->NElementos; i++)
		{
			if (i < (pila6->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila6->ObtenerCima())->color == 'N')
				{
					t += ((&pila6->ObtenerCima())->valor).ToString() + "N";
					rTBPila6->Text = t;
				}
				else
				{
					t += ((&pila6->ObtenerCima())->valor).ToString() + "R";
					rTBPila6->Text = t;
				}

			}
		}

		if (pila6->NElementos == 0)
		{
			rTBPila6->Text = t;
		}

		t = "";

		for (int i = 0; i < pila5->NElementos; i++)
		{
			if (i < (pila5->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila5->ObtenerCima())->color == 'N')
				{
					t += ((&pila5->ObtenerCima())->valor).ToString() + "N";
					rTBPila5->Text = t;
				}
				else
				{
					t += ((&pila5->ObtenerCima())->valor).ToString() + "R";
					rTBPila5->Text = t;
				}

			}
		}

		if (pila5->NElementos == 0)
		{
			rTBPila5->Text = t;
		}

		t = "";

		for (int i = 0; i < pila4->NElementos; i++)
		{
			if (i < (pila4->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila4->ObtenerCima())->color == 'N')
				{
					t += ((&pila4->ObtenerCima())->valor).ToString() + "N";
					rTBPila4->Text = t;
				}
				else
				{
					t += ((&pila4->ObtenerCima())->valor).ToString() + "R";
					rTBPila4->Text = t;
				}

			}
		}

		if (pila4->NElementos == 0)
		{
			rTBPila4->Text = t;
		}

		t = "";

		for (int i = 0; i < pila3->NElementos; i++)
		{
			if (i < (pila3->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila3->ObtenerCima())->color == 'N')
				{
					t += ((&pila3->ObtenerCima())->valor).ToString() + "N";
					rTBPila3->Text = t;
				}
				else
				{
					t += ((&pila3->ObtenerCima())->valor).ToString() + "R";
					rTBPila3->Text = t;
				}

			}
		}

		if (pila3->NElementos == 0)
		{
			rTBPila3->Text = t;
		}

		t = "";

		for (int i = 0; i < pila2->NElementos; i++)
		{
			if (i < (pila2->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila2->ObtenerCima())->color == 'N')
				{
					t += ((&pila2->ObtenerCima())->valor).ToString() + "N";
					rTBPila2->Text = t;
				}
				else
				{
					t += ((&pila6->ObtenerCima())->valor).ToString() + "R";
					rTBPila2->Text = t;
				}

			}
		}

		if (pila2->NElementos == 0)
		{
			rTBPila2->Text = t;
		}

		t = "";

		for (int i = 0; i < pila1->NElementos; i++)
		{
			if (i < (pila1->NElementos - 1))
			{
				t += "________\n";
			}
			else
			{
				if ((&pila1->ObtenerCima())->color == 'N')
				{
					t += ((&pila1->ObtenerCima())->valor).ToString() + "N";
					rTBPila1->Text = t;
				}
				else
				{
					t += ((&pila1->ObtenerCima())->valor).ToString() + "R";
					rTBPila1->Text = t;
				}

			}
		}

		if (pila1->NElementos == 0)
		{
			rTBPila1->Text = t;
		}

		t = "";

		if (pila->NElementos == 0)
		{
			lblCartaMazoPrincipal->Text = t;
		}
		else
		{
			if ((&pila->ObtenerCima())->color == 'N')
			{
				t += ((&pila->ObtenerCima())->valor).ToString() + "N";
			}
			else
			{
				t += ((&pila->ObtenerCima())->valor).ToString() + "R";
			}
			
			lblCartaMazoPrincipal->Text = t;
		}
	}

	private: System::Boolean Used(int val, int car[]) {
		for (int i = 0; i < 52; i++)
		{
			if (car[i] == val)
			{
				return true;
			}
		}
		return false;
	}

	private: System::Boolean okCards(Carta* carMen, Carta* carMay) {
		if (carMen->valor < carMay->valor)
		{
			if (carMen->color != carMay->color)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}

	private: System::Void ApilarYDesapilar(Pila* pilaEntrada, Pila* pilaSalida, int numCartas)
	{
		int cont = 0;

		if (numCartas <= pilaSalida->NElementos)
		{
			if (okCards(&pilaSalida->ObtenerCima(), &pilaEntrada->ObtenerCima()))
			{
				pilaAux->Apilar(pilaSalida->Desapilar());
				for (int i = 0; i < numCartas - 1; i++)
				{
					if (okCards(&pilaAux->ObtenerCima(), &pilaSalida->ObtenerCima()))
					{
						pilaAux->Apilar(pilaSalida->Desapilar());
						cont++;
					}
					else
					{
						i = numCartas;
						for (int i = 0; i < cont; i++)
						{
							pilaSalida->Apilar(pilaAux->Desapilar());
						}
						MessageBox::Show("No se puede realizar el movimiento, el color de la nueva carta debe ser diferente y el número debe ser menor al de la carta superior");
					}
				}

				for (int i = 0; i < numCartas; i++)
				{
					pilaEntrada->Apilar(pilaAux->Desapilar());
				}
			}
			else
			{
				MessageBox::Show("No se puede realizar el movimiento, el color de la nueva carta debe ser diferente y el número debe ser menor al de la carta superior");
			}
		}
		else
		{
			MessageBox::Show("La pila seleccionada no tiene las suficientes cartas para mover");
		}
	}

	private: System::Void btnMoverCartas_Click(System::Object^ sender, System::EventArgs^ e) {
		//something cool here xd
		int x = Convert::ToInt16(cBCantidadCartas->SelectedItem);
		int pilaSalida = Convert::ToInt16(cBPilaSalida->SelectedItem);
		int pilaEntrada = Convert::ToInt16(cBPilaEntrada->SelectedItem);

		switch (pilaSalida)
		{
			case 1:
				switch (pilaEntrada)
				{
					case 2:
						ApilarYDesapilar(pila2, pila1, x);
						break;
					case 3:
						ApilarYDesapilar(pila3, pila1, x);
						break;
					case 4:
						ApilarYDesapilar(pila4, pila1, x);
						break;
					case 5:
						ApilarYDesapilar(pila5, pila1, x);
						break;
					case 6:
						ApilarYDesapilar(pila6, pila1, x);
						break;
					case 7:
						ApilarYDesapilar(pila7, pila1, x);
						break;
				}
			break;

			case 2:
				switch (pilaEntrada)
				{
					case 1:
						ApilarYDesapilar(pila1, pila2, x);
						break;
					case 3:
						ApilarYDesapilar(pila3, pila2, x);
						break;
					case 4:
						ApilarYDesapilar(pila4, pila2, x);
						break;
					case 5:
						ApilarYDesapilar(pila5, pila2, x);
						break;
					case 6:
						ApilarYDesapilar(pila6, pila2, x);
						break;
					case 7:
						ApilarYDesapilar(pila7, pila2, x);
						break;
				}
				break;

			case 3:
				switch (pilaEntrada)
				{
					case 1:
						ApilarYDesapilar(pila1, pila3, x);
						break;
					case 2:
						ApilarYDesapilar(pila2, pila3, x);
						break;
					case 4:
						ApilarYDesapilar(pila4, pila3, x);
						break;
					case 5:
						ApilarYDesapilar(pila5, pila3, x);
						break;
					case 6:
						ApilarYDesapilar(pila6, pila3, x);
						break;
					case 7:
						ApilarYDesapilar(pila7, pila3, x);
						break;
				}
				break;

			case 4:
				switch (pilaEntrada)
				{
					case 1:
						ApilarYDesapilar(pila1, pila4, x);
						break;
					case 2:
						ApilarYDesapilar(pila2, pila4, x);
						break;
					case 3:
						ApilarYDesapilar(pila3, pila4, x);
						break;
					case 5:
						ApilarYDesapilar(pila5, pila4, x);
						break;
					case 6:
						ApilarYDesapilar(pila6, pila4, x);
						break;
					case 7:
						ApilarYDesapilar(pila7, pila4, x);
						break;
				}
				break;

			case 5:
				switch (pilaEntrada)
				{
					case 1:
						ApilarYDesapilar(pila1, pila5, x);
						break;
					case 2:
						ApilarYDesapilar(pila2, pila5, x);
						break;
					case 3:
						ApilarYDesapilar(pila3, pila5, x);
						break;
					case 4:
						ApilarYDesapilar(pila4, pila5, x);
						break;
					case 6:
						ApilarYDesapilar(pila6, pila5, x);
						break;
					case 7:
						ApilarYDesapilar(pila7, pila5, x);
						break;
				}
				break;

			case 6:
				switch (pilaEntrada)
				{
					case 1:
						ApilarYDesapilar(pila1, pila6, x);
						break;
					case 2:
						ApilarYDesapilar(pila2, pila6, x);
						break;
					case 3:
						ApilarYDesapilar(pila3, pila6, x);
						break;
					case 4:
						ApilarYDesapilar(pila4, pila6, x);
						break;
					case 5:
						ApilarYDesapilar(pila5, pila6, x);
						break;
					case 7:
						ApilarYDesapilar(pila7, pila6, x);
						break;
				}
				break;

			case 7:
				switch (pilaEntrada)
				{
					case 1:
						ApilarYDesapilar(pila1, pila7, x);
						break;
					case 2:
						ApilarYDesapilar(pila2, pila7, x);
						break;
					case 3:
						ApilarYDesapilar(pila3, pila7, x);
						break;
					case 4:
						ApilarYDesapilar(pila4, pila7, x);
						break;
					case 5:
						ApilarYDesapilar(pila5, pila7, x);
						break;
					case 6:
						ApilarYDesapilar(pila6, pila7, x);
						break;
				}
				break;
		}

		CambiarPilas();
		FinJuego();
		/*for (int i = 0; i < x; i++)
		{
			pila6->Apilar(pila7->Desapilar());
		}*/
	}

private: System::Void FinJuego() {

	if (HayOrden(pila7))
	{
		MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		cBCantidadCartas->Enabled = false;
		cBPilaEntrada->Enabled = false;
		cBPilaSalida->Enabled = false;
		btnMoverCartas->Enabled = false;
		btnRepartirCartasDelMazo->Enabled = false;
	}
	else if (HayOrden(pila6))
	{
		MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		cBCantidadCartas->Enabled = false;
		cBPilaEntrada->Enabled = false;
		cBPilaSalida->Enabled = false;
		btnMoverCartas->Enabled = false;
		btnRepartirCartasDelMazo->Enabled = false;
	}
	else if (HayOrden(pila5))
	{
		MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		cBCantidadCartas->Enabled = false;
		cBPilaEntrada->Enabled = false;
		cBPilaSalida->Enabled = false;
		btnMoverCartas->Enabled = false;
		btnRepartirCartasDelMazo->Enabled = false;
	}
	else if (HayOrden(pila4))
	{
		MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		cBCantidadCartas->Enabled = false;
		cBPilaEntrada->Enabled = false;
		cBPilaSalida->Enabled = false;
		btnMoverCartas->Enabled = false;
		btnRepartirCartasDelMazo->Enabled = false;
	}
	else if (HayOrden(pila3))
	{
		MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		cBCantidadCartas->Enabled = false;
		cBPilaEntrada->Enabled = false;
		cBPilaSalida->Enabled = false;
		btnMoverCartas->Enabled = false;
		btnRepartirCartasDelMazo->Enabled = false;
	}
	else if (HayOrden(pila2))
	{
		MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		cBCantidadCartas->Enabled = false;
		cBPilaEntrada->Enabled = false;
		cBPilaSalida->Enabled = false;
		btnMoverCartas->Enabled = false;
		btnRepartirCartasDelMazo->Enabled = false;
	}
	else if (HayOrden(pila1))
	{
		MessageBox::Show("¡HAS GANADO, FELICITACIONES!");
		cBCantidadCartas->Enabled = false;
		cBPilaEntrada->Enabled = false;
		cBPilaSalida->Enabled = false;
		btnMoverCartas->Enabled = false;
		btnRepartirCartasDelMazo->Enabled = false;
	}
}

private: System::Boolean HayOrden(Pila* pila) {
	Carta* cartaComparar = new Carta();
	Carta* cartaComparar2 = new Carta();
	Nodo* nodCarta2 = new Nodo();
	nodCarta2 = (pila->head2)->siguiente;
	cartaComparar = &pila->ObtenerCima();
	cartaComparar2 = &nodCarta2->valor;
	int cartasOrdenadas = 0;

	if (pila->NElementos < 5)
	{
		return false;
	}

	for (int i = 0; i < 4; i++)
	{
		if (cartaComparar->valor == cartaComparar2->valor - 1 && okCards(cartaComparar, cartaComparar2))
		{
			cartasOrdenadas++;
			cartaComparar = cartaComparar2;
			nodCarta2 = nodCarta2->siguiente;
			cartaComparar2 = &nodCarta2->valor;
		}
		else
		{
			i = 4;
			cartasOrdenadas = 0;
		}
	}

	if (cartasOrdenadas == 5)
	{
		return true;
	}

	return false;
}


private: System::Void btnRepartirCartasDelMazo_Click(System::Object^ sender, System::EventArgs^ e) {
	//Smthing cool here too xd
	if (pila->NElementos > 0)
	{
		pila7->Apilar(pila->Desapilar());
		if (pila->NElementos > 0)
		{
			pila6->Apilar(pila->Desapilar());
			if (pila->NElementos > 0)
			{
				pila5->Apilar(pila->Desapilar());
				if (pila->NElementos > 0)
				{
					pila4->Apilar(pila->Desapilar());
					if (pila->NElementos > 0)
					{
						pila3->Apilar(pila->Desapilar());
						if (pila->NElementos > 0)
						{
							pila2->Apilar(pila->Desapilar());
							if (pila->NElementos > 0)
							{
								pila1->Apilar(pila->Desapilar());
							}
							else
							{
								MessageBox::Show("Ya no hay más cartas por repartir en el mazo principal");
							}
						}
						else
						{
							MessageBox::Show("Ya no hay más cartas por repartir en el mazo principal");
						}
					}
					else
					{
						MessageBox::Show("Ya no hay más cartas por repartir en el mazo principal");
					}
				}
				else
				{
					MessageBox::Show("Ya no hay más cartas por repartir en el mazo principal");
				}
			}
			else
			{
				MessageBox::Show("Ya no hay más cartas por repartir en el mazo principal");
			}
		}
		else
		{
			MessageBox::Show("Ya no hay más cartas por repartir en el mazo principal");
		}
	}
	else
	{
		MessageBox::Show("Ya no hay más cartas por repartir en el mazo principal");
	}

	CambiarPilas();
}
};
}
