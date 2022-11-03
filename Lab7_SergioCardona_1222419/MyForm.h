#pragma once
#include "Problema 1.h"
#include "Problema 2.h"
namespace Lab7SergioCardona1222419 {

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
	private: System::Windows::Forms::Button^ btnPro1;
	protected:
	private: System::Windows::Forms::Button^ btnProb2;
	private: System::Windows::Forms::Label^ label1;

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
			this->btnPro1 = (gcnew System::Windows::Forms::Button());
			this->btnProb2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnPro1
			// 
			this->btnPro1->Location = System::Drawing::Point(224, 202);
			this->btnPro1->Name = L"btnPro1";
			this->btnPro1->Size = System::Drawing::Size(100, 23);
			this->btnPro1->TabIndex = 0;
			this->btnPro1->Text = L"Problema 1";
			this->btnPro1->UseVisualStyleBackColor = true;
			this->btnPro1->Click += gcnew System::EventHandler(this, &MyForm::btnPro1_Click);
			// 
			// btnProb2
			// 
			this->btnProb2->Location = System::Drawing::Point(224, 315);
			this->btnProb2->Name = L"btnProb2";
			this->btnProb2->Size = System::Drawing::Size(100, 23);
			this->btnProb2->TabIndex = 1;
			this->btnProb2->Text = L"Problema 2";
			this->btnProb2->UseVisualStyleBackColor = true;
			this->btnProb2->Click += gcnew System::EventHandler(this, &MyForm::btnProb2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(536, 39);
			this->label1->TabIndex = 2;
			this->label1->Text = L"LABORATORIO NO.7";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 455);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnProb2);
			this->Controls->Add(this->btnPro1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnPro1_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab7SergioCardona1222419::Problema1^ formuno = gcnew Lab7SergioCardona1222419::Problema1();
		this->Visible = false;
		formuno->ShowDialog();
		this->Visible = true;
	}
	private: System::Void btnProb2_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab7SergioCardona1222419::Problema2^ formdos = gcnew Lab7SergioCardona1222419::Problema2();
		this->Visible = false;
		formdos->ShowDialog();
		this->Visible = true;
	}
	};
}
