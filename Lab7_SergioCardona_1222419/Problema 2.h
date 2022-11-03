#pragma once
#include <iostream>
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Rectangulo.h"


namespace Lab7SergioCardona1222419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Problema2
	/// </summary>
	public ref class Problema2 : public System::Windows::Forms::Form
	{
	public:
		Problema2(void)
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
		~Problema2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtLCuadrado;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txtBTriangulo;
	private: System::Windows::Forms::TextBox^ txtATriangulo;
	private: System::Windows::Forms::TextBox^ txtBRectangulo;
	private: System::Windows::Forms::TextBox^ txtARectangulo;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::Button^ btnCuadrado;
	private: System::Windows::Forms::Button^ btnTriangulo;
	private: System::Windows::Forms::Button^ btnRectangulo;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ lblIDC;
	private: System::Windows::Forms::Label^ lblPoligonoC;
	private: System::Windows::Forms::Label^ lblAreaC;
	private: System::Windows::Forms::Label^ lblPerimetroC;
	private: System::Windows::Forms::Label^ lblColorC;
	private: System::Windows::Forms::Label^ lblIDT;
	private: System::Windows::Forms::Label^ lblPoligonoT;
	private: System::Windows::Forms::Label^ lblAreaT;
	private: System::Windows::Forms::Label^ lblPerimetroT;
	private: System::Windows::Forms::Label^ lblColorT;
	private: System::Windows::Forms::Label^ lblIDR;
	private: System::Windows::Forms::Label^ lblPoligonoR;
	private: System::Windows::Forms::Label^ lblAreaR;
	private: System::Windows::Forms::Label^ lblPerimetroR;
	private: System::Windows::Forms::Label^ lblColorR;


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
			this->txtLCuadrado = (gcnew System::Windows::Forms::TextBox());
			this->txtBTriangulo = (gcnew System::Windows::Forms::TextBox());
			this->txtATriangulo = (gcnew System::Windows::Forms::TextBox());
			this->txtBRectangulo = (gcnew System::Windows::Forms::TextBox());
			this->txtARectangulo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnCuadrado = (gcnew System::Windows::Forms::Button());
			this->btnTriangulo = (gcnew System::Windows::Forms::Button());
			this->btnRectangulo = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->lblIDC = (gcnew System::Windows::Forms::Label());
			this->lblPoligonoC = (gcnew System::Windows::Forms::Label());
			this->lblAreaC = (gcnew System::Windows::Forms::Label());
			this->lblPerimetroC = (gcnew System::Windows::Forms::Label());
			this->lblColorC = (gcnew System::Windows::Forms::Label());
			this->lblIDT = (gcnew System::Windows::Forms::Label());
			this->lblPoligonoT = (gcnew System::Windows::Forms::Label());
			this->lblAreaT = (gcnew System::Windows::Forms::Label());
			this->lblPerimetroT = (gcnew System::Windows::Forms::Label());
			this->lblColorT = (gcnew System::Windows::Forms::Label());
			this->lblIDR = (gcnew System::Windows::Forms::Label());
			this->lblPoligonoR = (gcnew System::Windows::Forms::Label());
			this->lblAreaR = (gcnew System::Windows::Forms::Label());
			this->lblPerimetroR = (gcnew System::Windows::Forms::Label());
			this->lblColorR = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtLCuadrado
			// 
			this->txtLCuadrado->Location = System::Drawing::Point(164, 215);
			this->txtLCuadrado->Name = L"txtLCuadrado";
			this->txtLCuadrado->Size = System::Drawing::Size(100, 22);
			this->txtLCuadrado->TabIndex = 0;
			// 
			// txtBTriangulo
			// 
			this->txtBTriangulo->Location = System::Drawing::Point(421, 215);
			this->txtBTriangulo->Name = L"txtBTriangulo";
			this->txtBTriangulo->Size = System::Drawing::Size(100, 22);
			this->txtBTriangulo->TabIndex = 2;
			// 
			// txtATriangulo
			// 
			this->txtATriangulo->Location = System::Drawing::Point(421, 258);
			this->txtATriangulo->Name = L"txtATriangulo";
			this->txtATriangulo->Size = System::Drawing::Size(100, 22);
			this->txtATriangulo->TabIndex = 3;
			// 
			// txtBRectangulo
			// 
			this->txtBRectangulo->Location = System::Drawing::Point(694, 210);
			this->txtBRectangulo->Name = L"txtBRectangulo";
			this->txtBRectangulo->Size = System::Drawing::Size(100, 22);
			this->txtBRectangulo->TabIndex = 4;
			// 
			// txtARectangulo
			// 
			this->txtARectangulo->Location = System::Drawing::Point(694, 258);
			this->txtARectangulo->Name = L"txtARectangulo";
			this->txtARectangulo->Size = System::Drawing::Size(100, 22);
			this->txtARectangulo->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(95, 218);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Longitud";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(634, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Base";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(357, 215);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Base";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(634, 263);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Altura";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(357, 261);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Altura";
			// 
			// btnCuadrado
			// 
			this->btnCuadrado->Location = System::Drawing::Point(150, 307);
			this->btnCuadrado->Name = L"btnCuadrado";
			this->btnCuadrado->Size = System::Drawing::Size(130, 23);
			this->btnCuadrado->TabIndex = 15;
			this->btnCuadrado->Text = L"Datos Cuadrado";
			this->btnCuadrado->UseVisualStyleBackColor = true;
			this->btnCuadrado->Click += gcnew System::EventHandler(this, &Problema2::btnCuadrado_Click);
			// 
			// btnTriangulo
			// 
			this->btnTriangulo->Location = System::Drawing::Point(409, 307);
			this->btnTriangulo->Name = L"btnTriangulo";
			this->btnTriangulo->Size = System::Drawing::Size(133, 30);
			this->btnTriangulo->TabIndex = 16;
			this->btnTriangulo->Text = L"Datos Triangulo";
			this->btnTriangulo->UseVisualStyleBackColor = true;
			this->btnTriangulo->Click += gcnew System::EventHandler(this, &Problema2::btnTriangulo_Click);
			// 
			// btnRectangulo
			// 
			this->btnRectangulo->Location = System::Drawing::Point(666, 307);
			this->btnRectangulo->Name = L"btnRectangulo";
			this->btnRectangulo->Size = System::Drawing::Size(154, 33);
			this->btnRectangulo->TabIndex = 17;
			this->btnRectangulo->Text = L"Datos Rectangulo";
			this->btnRectangulo->UseVisualStyleBackColor = true;
			this->btnRectangulo->Click += gcnew System::EventHandler(this, &Problema2::btnRectangulo_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(61, 355);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"ID";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(61, 391);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 17);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Poligono";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(61, 421);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 17);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Área";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(61, 456);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 17);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Perímetro";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(61, 492);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 17);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Color";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(357, 355);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(21, 17);
			this->label12->TabIndex = 23;
			this->label12->Text = L"ID";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(634, 355);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(21, 17);
			this->label13->TabIndex = 24;
			this->label13->Text = L"ID";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(357, 391);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(63, 17);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Poligono";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(634, 391);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(63, 17);
			this->label15->TabIndex = 26;
			this->label15->Text = L"Poligono";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(357, 421);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 17);
			this->label16->TabIndex = 27;
			this->label16->Text = L"Área";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(634, 421);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(38, 17);
			this->label17->TabIndex = 28;
			this->label17->Text = L"Área";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(357, 456);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(69, 17);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Perímetro";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(634, 456);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(69, 17);
			this->label19->TabIndex = 30;
			this->label19->Text = L"Perímetro";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(357, 492);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(41, 17);
			this->label20->TabIndex = 31;
			this->label20->Text = L"Color";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(634, 492);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(41, 17);
			this->label21->TabIndex = 32;
			this->label21->Text = L"Color";
			// 
			// lblIDC
			// 
			this->lblIDC->AutoSize = true;
			this->lblIDC->Location = System::Drawing::Point(164, 355);
			this->lblIDC->Name = L"lblIDC";
			this->lblIDC->Size = System::Drawing::Size(54, 17);
			this->lblIDC->TabIndex = 33;
			this->lblIDC->Text = L"label22";
			// 
			// lblPoligonoC
			// 
			this->lblPoligonoC->AutoSize = true;
			this->lblPoligonoC->Location = System::Drawing::Point(164, 391);
			this->lblPoligonoC->Name = L"lblPoligonoC";
			this->lblPoligonoC->Size = System::Drawing::Size(46, 17);
			this->lblPoligonoC->TabIndex = 34;
			this->lblPoligonoC->Text = L"label2";
			// 
			// lblAreaC
			// 
			this->lblAreaC->AutoSize = true;
			this->lblAreaC->Location = System::Drawing::Point(164, 421);
			this->lblAreaC->Name = L"lblAreaC";
			this->lblAreaC->Size = System::Drawing::Size(54, 17);
			this->lblAreaC->TabIndex = 35;
			this->lblAreaC->Text = L"label24";
			// 
			// lblPerimetroC
			// 
			this->lblPerimetroC->AutoSize = true;
			this->lblPerimetroC->Location = System::Drawing::Point(161, 456);
			this->lblPerimetroC->Name = L"lblPerimetroC";
			this->lblPerimetroC->Size = System::Drawing::Size(54, 17);
			this->lblPerimetroC->TabIndex = 36;
			this->lblPerimetroC->Text = L"label25";
			// 
			// lblColorC
			// 
			this->lblColorC->AutoSize = true;
			this->lblColorC->Location = System::Drawing::Point(161, 492);
			this->lblColorC->Name = L"lblColorC";
			this->lblColorC->Size = System::Drawing::Size(38, 17);
			this->lblColorC->TabIndex = 37;
			this->lblColorC->Text = L"label";
			// 
			// lblIDT
			// 
			this->lblIDT->AutoSize = true;
			this->lblIDT->Location = System::Drawing::Point(454, 355);
			this->lblIDT->Name = L"lblIDT";
			this->lblIDT->Size = System::Drawing::Size(54, 17);
			this->lblIDT->TabIndex = 38;
			this->lblIDT->Text = L"label27";
			// 
			// lblPoligonoT
			// 
			this->lblPoligonoT->AutoSize = true;
			this->lblPoligonoT->Location = System::Drawing::Point(454, 391);
			this->lblPoligonoT->Name = L"lblPoligonoT";
			this->lblPoligonoT->Size = System::Drawing::Size(54, 17);
			this->lblPoligonoT->TabIndex = 39;
			this->lblPoligonoT->Text = L"label28";
			// 
			// lblAreaT
			// 
			this->lblAreaT->AutoSize = true;
			this->lblAreaT->Location = System::Drawing::Point(454, 421);
			this->lblAreaT->Name = L"lblAreaT";
			this->lblAreaT->Size = System::Drawing::Size(54, 17);
			this->lblAreaT->TabIndex = 40;
			this->lblAreaT->Text = L"label29";
			// 
			// lblPerimetroT
			// 
			this->lblPerimetroT->AutoSize = true;
			this->lblPerimetroT->Location = System::Drawing::Point(454, 456);
			this->lblPerimetroT->Name = L"lblPerimetroT";
			this->lblPerimetroT->Size = System::Drawing::Size(54, 17);
			this->lblPerimetroT->TabIndex = 41;
			this->lblPerimetroT->Text = L"label30";
			// 
			// lblColorT
			// 
			this->lblColorT->AutoSize = true;
			this->lblColorT->Location = System::Drawing::Point(454, 492);
			this->lblColorT->Name = L"lblColorT";
			this->lblColorT->Size = System::Drawing::Size(54, 17);
			this->lblColorT->TabIndex = 42;
			this->lblColorT->Text = L"label31";
			// 
			// lblIDR
			// 
			this->lblIDR->AutoSize = true;
			this->lblIDR->Location = System::Drawing::Point(740, 355);
			this->lblIDR->Name = L"lblIDR";
			this->lblIDR->Size = System::Drawing::Size(54, 17);
			this->lblIDR->TabIndex = 43;
			this->lblIDR->Text = L"label32";
			// 
			// lblPoligonoR
			// 
			this->lblPoligonoR->AutoSize = true;
			this->lblPoligonoR->Location = System::Drawing::Point(740, 391);
			this->lblPoligonoR->Name = L"lblPoligonoR";
			this->lblPoligonoR->Size = System::Drawing::Size(54, 17);
			this->lblPoligonoR->TabIndex = 44;
			this->lblPoligonoR->Text = L"label33";
			// 
			// lblAreaR
			// 
			this->lblAreaR->AutoSize = true;
			this->lblAreaR->Location = System::Drawing::Point(740, 421);
			this->lblAreaR->Name = L"lblAreaR";
			this->lblAreaR->Size = System::Drawing::Size(54, 17);
			this->lblAreaR->TabIndex = 45;
			this->lblAreaR->Text = L"label34";
			// 
			// lblPerimetroR
			// 
			this->lblPerimetroR->AutoSize = true;
			this->lblPerimetroR->Location = System::Drawing::Point(740, 456);
			this->lblPerimetroR->Name = L"lblPerimetroR";
			this->lblPerimetroR->Size = System::Drawing::Size(54, 17);
			this->lblPerimetroR->TabIndex = 46;
			this->lblPerimetroR->Text = L"label35";
			// 
			// lblColorR
			// 
			this->lblColorR->AutoSize = true;
			this->lblColorR->Location = System::Drawing::Point(740, 492);
			this->lblColorR->Name = L"lblColorR";
			this->lblColorR->Size = System::Drawing::Size(54, 17);
			this->lblColorR->TabIndex = 47;
			this->lblColorR->Text = L"label36";
			// 
			// Problema2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(871, 525);
			this->Controls->Add(this->lblColorR);
			this->Controls->Add(this->lblPerimetroR);
			this->Controls->Add(this->lblAreaR);
			this->Controls->Add(this->lblPoligonoR);
			this->Controls->Add(this->lblIDR);
			this->Controls->Add(this->lblColorT);
			this->Controls->Add(this->lblPerimetroT);
			this->Controls->Add(this->lblAreaT);
			this->Controls->Add(this->lblPoligonoT);
			this->Controls->Add(this->lblIDT);
			this->Controls->Add(this->lblColorC);
			this->Controls->Add(this->lblPerimetroC);
			this->Controls->Add(this->lblAreaC);
			this->Controls->Add(this->lblPoligonoC);
			this->Controls->Add(this->lblIDC);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->btnRectangulo);
			this->Controls->Add(this->btnTriangulo);
			this->Controls->Add(this->btnCuadrado);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtARectangulo);
			this->Controls->Add(this->txtBRectangulo);
			this->Controls->Add(this->txtATriangulo);
			this->Controls->Add(this->txtBTriangulo);
			this->Controls->Add(this->txtLCuadrado);
			this->Name = L"Problema2";
			this->Text = L"Problema2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCuadrado_Click(System::Object^ sender, System::EventArgs^ e) {
		double longitud = System::Convert::ToDouble(txtLCuadrado->Text);
		Cuadrado* cuadrado = new Cuadrado;

		lblIDC->Text = cuadrado->Id(1).ToString();
		lblPerimetroC->Text = cuadrado->PerimetroCT(longitud).ToString();
		lblAreaC->Text = cuadrado->AreaC(longitud).ToString();
		lblPoligonoC->Text = "Cuadrilatero";
		lblColorC->Text = "Rojo";
		
	}
	private: System::Void btnTriangulo_Click(System::Object^ sender, System::EventArgs^ e) {
		double base = System::Convert::ToDouble(txtBTriangulo->Text);
		double altura = System::Convert::ToDouble(txtATriangulo->Text);

		Triangulo* triangulo = new Triangulo;

		lblIDT->Text = triangulo->Id(2).ToString();
		lblAreaT->Text = triangulo->AreaTR(base, altura).ToString();
		lblPerimetroT->Text = triangulo->PerimetroT(base).ToString();
		lblColorT->Text = "Amarillo";
		lblPoligonoT->Text = "Triangulo";
	}
	private: System::Void btnRectangulo_Click(System::Object^ sender, System::EventArgs^ e) {
		double base = System::Convert::ToDouble(txtBRectangulo->Text);
		double altura = System::Convert::ToDouble(txtARectangulo->Text);

		Rectangulo* rectangulo = new Rectangulo;

		lblIDR->Text = rectangulo->Id(3).ToString();
		lblPoligonoR->Text = "Cuadrilatero";
		lblAreaR->Text = rectangulo->AreaTR(base, altura).ToString();
		lblPerimetroR->Text = rectangulo->PerimetroR(base, altura).ToString();
		lblColorR->Text = "Azul";
	}
};
}
