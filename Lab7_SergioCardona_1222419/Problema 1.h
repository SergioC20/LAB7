#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>
namespace Lab7SergioCardona1222419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Problema1
	/// </summary>
	public ref class Problema1 : public System::Windows::Forms::Form
	{
	public:
		Problema1(void)
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
		~Problema1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lblBuex;
	private: System::Windows::Forms::Label^ lblBufall;
	private: System::Windows::Forms::Label^ lblExito;



	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblFallo;
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblBuex = (gcnew System::Windows::Forms::Label());
			this->lblBufall = (gcnew System::Windows::Forms::Label());
			this->lblExito = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblFallo = (gcnew System::Windows::Forms::Label());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(453, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BUSQUEDA SECUENCIAL";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(110, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Busquedas con exito:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(110, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Busquedas fallidas:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(110, 279);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Exito";
			// 
			// lblBuex
			// 
			this->lblBuex->AutoSize = true;
			this->lblBuex->Location = System::Drawing::Point(278, 129);
			this->lblBuex->Name = L"lblBuex";
			this->lblBuex->Size = System::Drawing::Size(46, 17);
			this->lblBuex->TabIndex = 4;
			this->lblBuex->Text = L"label5";
			// 
			// lblBufall
			// 
			this->lblBufall->AutoSize = true;
			this->lblBufall->Location = System::Drawing::Point(278, 197);
			this->lblBufall->Name = L"lblBufall";
			this->lblBufall->Size = System::Drawing::Size(46, 17);
			this->lblBufall->TabIndex = 5;
			this->lblBufall->Text = L"label6";
			// 
			// lblExito
			// 
			this->lblExito->AutoSize = true;
			this->lblExito->Location = System::Drawing::Point(278, 279);
			this->lblExito->Name = L"lblExito";
			this->lblExito->Size = System::Drawing::Size(46, 17);
			this->lblExito->TabIndex = 6;
			this->lblExito->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(110, 331);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 17);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Fallo";
			// 
			// lblFallo
			// 
			this->lblFallo->AutoSize = true;
			this->lblFallo->Location = System::Drawing::Point(278, 342);
			this->lblFallo->Name = L"lblFallo";
			this->lblFallo->Size = System::Drawing::Size(46, 17);
			this->lblFallo->TabIndex = 8;
			this->lblFallo->Text = L"label9";
			// 
			// btnIniciar
			// 
			this->btnIniciar->Location = System::Drawing::Point(199, 396);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(75, 23);
			this->btnIniciar->TabIndex = 9;
			this->btnIniciar->Text = L"Iniciar";
			this->btnIniciar->UseVisualStyleBackColor = true;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &Problema1::btnIniciar_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(331, 279);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"%";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(331, 342);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"%";
			// 
			// Problema1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(526, 469);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnIniciar);
			this->Controls->Add(this->lblFallo);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->lblExito);
			this->Controls->Add(this->lblBufall);
			this->Controls->Add(this->lblBuex);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Problema1";
			this->Text = L"Problema1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		const int tamaño = 100;
		int x[tamaño];
		int i, k;
		int ee = 0;
		int ff = 0;
		int ll = 0;
		for (i = 0; i < tamaño; i++)
		{
			x[i] = 1 + rand() % 200;
		}
		
		for (int j = 0; j < 50; j++)
		{
			k = 1 + rand() % 200;
			
			ll = 0;
			for (i = 0; i < tamaño; i++)
			{
				
				if (k == x[i])
				{
					ll = ll + 1;
					if (ll == 1) // No toma encuenta los numeros repetidos en el arreglo
					{
						ee = ee + 1;
					}
					
					
				}
				
			}
			
		
		}

		ff = 50 - ee;
		int pe = ee * 2;
		int pf = ff * 2;
		
		lblBuex->Text = Convert::ToString(ee);
		lblBufall->Text = Convert::ToString(ff);
		lblExito->Text = Convert::ToString(pe);
		lblFallo->Text = Convert::ToString(pf);
	}
private: System::Void lblArreglo_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
