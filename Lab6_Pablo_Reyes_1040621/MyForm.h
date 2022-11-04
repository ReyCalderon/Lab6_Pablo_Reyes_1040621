#pragma once
#include <string>
#include <cstring>
#include <cstdlib>

#include <fstream>
#include <sstream>

#include <time.h>

#define Nombre_del_Archivo "Pokemones.csv"

namespace Lab6PabloReyes1040621 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Diagnostics;


#include "Header.h"
#include "Header.cpp"

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::LinkLabel^ lblshellNT;
	private: System::Windows::Forms::LinkLabel^ lblquickNT;
	private: System::Windows::Forms::LinkLabel^ lblselectionNT;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::LinkLabel^ lblshellGen;
	private: System::Windows::Forms::LinkLabel^ lblquickGen;
	private: System::Windows::Forms::LinkLabel^ lblselectionGen;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lblorden;
	private: System::Windows::Forms::ComboBox^ cmbox1;
	private: System::Windows::Forms::GroupBox^ gbox1;
	private: System::Windows::Forms::RadioButton^ rbnNT;
	private: System::Windows::Forms::RadioButton^ rbnGen;
	private: System::Windows::Forms::Button^ btnlistapkm;
	private: System::Windows::Forms::DataGridView^ dgvpkm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ numero;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Generación;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nationalnum;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblshellNT = (gcnew System::Windows::Forms::LinkLabel());
			this->lblquickNT = (gcnew System::Windows::Forms::LinkLabel());
			this->lblselectionNT = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->lblshellGen = (gcnew System::Windows::Forms::LinkLabel());
			this->lblquickGen = (gcnew System::Windows::Forms::LinkLabel());
			this->lblselectionGen = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblorden = (gcnew System::Windows::Forms::Label());
			this->cmbox1 = (gcnew System::Windows::Forms::ComboBox());
			this->gbox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbnNT = (gcnew System::Windows::Forms::RadioButton());
			this->rbnGen = (gcnew System::Windows::Forms::RadioButton());
			this->btnlistapkm = (gcnew System::Windows::Forms::Button());
			this->dgvpkm = (gcnew System::Windows::Forms::DataGridView());
			this->numero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Generación = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nationalnum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->gbox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvpkm))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lblshellNT);
			this->groupBox1->Controls->Add(this->lblquickNT);
			this->groupBox1->Controls->Add(this->lblselectionNT);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Location = System::Drawing::Point(819, 294);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(332, 161);
			this->groupBox1->TabIndex = 26;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tiempo de resolución";
			// 
			// lblshellNT
			// 
			this->lblshellNT->AutoSize = true;
			this->lblshellNT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblshellNT->Location = System::Drawing::Point(149, 124);
			this->lblshellNT->Name = L"lblshellNT";
			this->lblshellNT->Size = System::Drawing::Size(23, 18);
			this->lblshellNT->TabIndex = 1;
			this->lblshellNT->TabStop = true;
			this->lblshellNT->Text = L"---";
			// 
			// lblquickNT
			// 
			this->lblquickNT->AutoSize = true;
			this->lblquickNT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblquickNT->Location = System::Drawing::Point(149, 82);
			this->lblquickNT->Name = L"lblquickNT";
			this->lblquickNT->Size = System::Drawing::Size(23, 18);
			this->lblquickNT->TabIndex = 1;
			this->lblquickNT->TabStop = true;
			this->lblquickNT->Text = L"---";
			// 
			// lblselectionNT
			// 
			this->lblselectionNT->AutoSize = true;
			this->lblselectionNT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblselectionNT->Location = System::Drawing::Point(149, 43);
			this->lblselectionNT->Name = L"lblselectionNT";
			this->lblselectionNT->Size = System::Drawing::Size(23, 18);
			this->lblselectionNT->TabIndex = 1;
			this->lblselectionNT->TabStop = true;
			this->lblselectionNT->Text = L"---";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 125);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Shell Sort";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 22);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Quick Sort";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(16, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(114, 22);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Selection Sort";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->lblshellGen);
			this->groupBox2->Controls->Add(this->lblquickGen);
			this->groupBox2->Controls->Add(this->lblselectionGen);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(467, 294);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(332, 156);
			this->groupBox2->TabIndex = 27;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tiempo de resolución ";
			// 
			// lblshellGen
			// 
			this->lblshellGen->AutoSize = true;
			this->lblshellGen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblshellGen->Location = System::Drawing::Point(149, 124);
			this->lblshellGen->Name = L"lblshellGen";
			this->lblshellGen->Size = System::Drawing::Size(23, 18);
			this->lblshellGen->TabIndex = 1;
			this->lblshellGen->TabStop = true;
			this->lblshellGen->Text = L"---";
			// 
			// lblquickGen
			// 
			this->lblquickGen->AutoSize = true;
			this->lblquickGen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblquickGen->Location = System::Drawing::Point(149, 82);
			this->lblquickGen->Name = L"lblquickGen";
			this->lblquickGen->Size = System::Drawing::Size(23, 18);
			this->lblquickGen->TabIndex = 1;
			this->lblquickGen->TabStop = true;
			this->lblquickGen->Text = L"---";
			// 
			// lblselectionGen
			// 
			this->lblselectionGen->AutoSize = true;
			this->lblselectionGen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblselectionGen->Location = System::Drawing::Point(149, 43);
			this->lblselectionGen->Name = L"lblselectionGen";
			this->lblselectionGen->Size = System::Drawing::Size(23, 18);
			this->lblselectionGen->TabIndex = 1;
			this->lblselectionGen->TabStop = true;
			this->lblselectionGen->Text = L"---";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(16, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 22);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Shell Sort";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 22);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Quick Sort";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(16, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 22);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Selection Sort";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(833, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(310, 38);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Ordenamiento por National Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(481, 258);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(266, 24);
			this->label7->TabIndex = 25;
			this->label7->Text = L"Ordenamiento por generación";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(916, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 37);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Ordenar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// lblorden
			// 
			this->lblorden->AutoSize = true;
			this->lblorden->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblorden->Location = System::Drawing::Point(699, 152);
			this->lblorden->Name = L"lblorden";
			this->lblorden->Size = System::Drawing::Size(196, 22);
			this->lblorden->TabIndex = 21;
			this->lblorden->Text = L"Método de ordenamiento";
			this->lblorden->Visible = false;
			// 
			// cmbox1
			// 
			this->cmbox1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cmbox1->FormattingEnabled = true;
			this->cmbox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Selection Sort", L"Quick Sort", L"Shell Sort" });
			this->cmbox1->Location = System::Drawing::Point(702, 182);
			this->cmbox1->Name = L"cmbox1";
			this->cmbox1->Size = System::Drawing::Size(121, 30);
			this->cmbox1->TabIndex = 20;
			this->cmbox1->Visible = false;
			// 
			// gbox1
			// 
			this->gbox1->Controls->Add(this->rbnNT);
			this->gbox1->Controls->Add(this->rbnGen);
			this->gbox1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbox1->Location = System::Drawing::Point(513, 143);
			this->gbox1->Name = L"gbox1";
			this->gbox1->Size = System::Drawing::Size(169, 84);
			this->gbox1->TabIndex = 19;
			this->gbox1->TabStop = false;
			this->gbox1->Text = L"Ordenar por:";
			this->gbox1->Visible = false;
			// 
			// rbnNT
			// 
			this->rbnNT->AutoSize = true;
			this->rbnNT->Location = System::Drawing::Point(7, 43);
			this->rbnNT->Name = L"rbnNT";
			this->rbnNT->Size = System::Drawing::Size(150, 26);
			this->rbnNT->TabIndex = 0;
			this->rbnNT->TabStop = true;
			this->rbnNT->Text = L"National number";
			this->rbnNT->UseVisualStyleBackColor = true;
			// 
			// rbnGen
			// 
			this->rbnGen->AutoSize = true;
			this->rbnGen->Location = System::Drawing::Point(7, 20);
			this->rbnGen->Name = L"rbnGen";
			this->rbnGen->Size = System::Drawing::Size(111, 26);
			this->rbnGen->TabIndex = 0;
			this->rbnGen->TabStop = true;
			this->rbnGen->Text = L"Generación";
			this->rbnGen->UseVisualStyleBackColor = true;
			// 
			// btnlistapkm
			// 
			this->btnlistapkm->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnlistapkm->Location = System::Drawing::Point(513, 43);
			this->btnlistapkm->Name = L"btnlistapkm";
			this->btnlistapkm->Size = System::Drawing::Size(478, 69);
			this->btnlistapkm->TabIndex = 18;
			this->btnlistapkm->Text = L"Ver lista de Lista_Pokemoneses";
			this->btnlistapkm->UseVisualStyleBackColor = true;
			this->btnlistapkm->Click += gcnew System::EventHandler(this, &MyForm::btnlistapkm_Click);
			// 
			// dgvpkm
			// 
			this->dgvpkm->AllowUserToAddRows = false;
			this->dgvpkm->AllowUserToDeleteRows = false;
			this->dgvpkm->AllowUserToResizeColumns = false;
			this->dgvpkm->AllowUserToResizeRows = false;
			this->dgvpkm->BackgroundColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dgvpkm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvpkm->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->numero, this->Generación,
					this->nombre, this->Nationalnum
			});
			this->dgvpkm->Cursor = System::Windows::Forms::Cursors::No;
			this->dgvpkm->Location = System::Drawing::Point(12, 27);
			this->dgvpkm->Name = L"dgvpkm";
			this->dgvpkm->ReadOnly = true;
			this->dgvpkm->RowHeadersWidth = 51;
			this->dgvpkm->Size = System::Drawing::Size(447, 536);
			this->dgvpkm->TabIndex = 17;
			// 
			// numero
			// 
			this->numero->HeaderText = L"No.";
			this->numero->MinimumWidth = 6;
			this->numero->Name = L"numero";
			this->numero->ReadOnly = true;
			this->numero->Width = 50;
			// 
			// Generación
			// 
			this->Generación->HeaderText = L"Generación";
			this->Generación->MinimumWidth = 6;
			this->Generación->Name = L"Generación";
			this->Generación->ReadOnly = true;
			this->Generación->Width = 125;
			// 
			// nombre
			// 
			this->nombre->HeaderText = L"Pokemón";
			this->nombre->MinimumWidth = 6;
			this->nombre->Name = L"nombre";
			this->nombre->ReadOnly = true;
			this->nombre->Width = 125;
			// 
			// Nationalnum
			// 
			this->Nationalnum->HeaderText = L"National Number";
			this->Nationalnum->MinimumWidth = 6;
			this->Nationalnum->Name = L"Nationalnum";
			this->Nationalnum->ReadOnly = true;
			this->Nationalnum->Width = 125;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1165, 628);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblorden);
			this->Controls->Add(this->cmbox1);
			this->Controls->Add(this->gbox1);
			this->Controls->Add(this->btnlistapkm);
			this->Controls->Add(this->dgvpkm);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->gbox1->ResumeLayout(false);
			this->gbox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvpkm))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnlistapkm_Click(System::Object^ sender, System::EventArgs^ e) {

		btnlistapkm->Visible = false;
		button1->Visible = true;
		gbox1->Visible = true;
		cmbox1->Visible = true;
		lblorden->Visible = true;

		AddCSV_to_List();

	}
		   void AddCSV_to_List()
		   {
			   ifstream Archivo(Nombre_del_Archivo);
			   string linea = "";
			   string dato = "";

			   if (Archivo.fail())
			   {
				   MessageBox::Show("No se ha podido abrir el archivo", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				   std::exit(1);
			   }

			   while (getline(Archivo, linea))
			   {
				   stringstream datoenproceso(linea);
				   string gen = "", name = "", ntnum = "";

				   getline(datoenproceso, gen, ',');
				   getline(datoenproceso, name, ',');
				   getline(datoenproceso, ntnum, ',');


				   Lista_Pokemones.AddList(Convert::ToInt32(ToSystemString(gen)), Convert::ToInt32(ToSystemString(ntnum)), name);

			   }

			   Archivo.close();

			   MostrarListaDGV();

		   }

		   void MostrarListaDGV()
		   {

			   Lista::Nodo* actual;

			   actual = Lista_Pokemones.GetHeader();
			   int i = 0;

			   while (actual != NULL)
			   {
				   dgvpkm->Rows->Add(1);
				   dgvpkm->Rows[i]->Cells[0]->Value = (i + 1);
				   dgvpkm->Rows[i]->Cells[1]->Value = actual->generacion;
				   dgvpkm->Rows[i]->Cells[2]->Value = ToSystemString(actual->nombre);
				   dgvpkm->Rows[i]->Cells[3]->Value = actual->nationalNumber;

				   actual = actual->next;
				   i++;
			   }

		   }

		   static string ToStardarString(System::String^ string) // pasa un dato String^ a un string normal
		   {
			   using System::Runtime::InteropServices::Marshal;
			   System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			   char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
			   std::string returnString(charPointer, string->Length);
			   Marshal::FreeHGlobal(pointer);
			   return returnString;

		   }

		   static String^ ToSystemString(string str) // pasa un dato string a un String^
		   {
			   return gcnew String(str.c_str());
		   }

		   Stopwatch^ Cronometro = gcnew Stopwatch();
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	int index = cmbox1->SelectedIndex;

	if (rbnGen->Checked == true)
	{
		switch (index)
		{
		case 0:
		{
			dgvpkm->Rows->Clear();

			Cronometro->Restart();
			Lista_Pokemones.SelectionSortGen();
			Cronometro->Stop();



			MostrarListaDGV();
			lblselectionGen->Text = "" + Cronometro->Elapsed;

		}break;
		case 1:
		{
			dgvpkm->Rows->Clear();

			Cronometro->Restart();
			Lista_Pokemones.QuickSortGen(Lista_Pokemones.GetHeader(), Lista_Pokemones.GetFin());
			Cronometro->Stop();

			MostrarListaDGV();
			lblquickGen->Text = "" + Cronometro->Elapsed;

		}break;
		case 2:
		{
			dgvpkm->Rows->Clear();

			Cronometro->Restart();

			Lista_Pokemones.ShellSortGen();

			Cronometro->Stop();
			MostrarListaDGV();

			lblshellGen->Text = "" + Cronometro->Elapsed;

		}break;

		default:
		{
			MessageBox::Show("Seleccione un método de ordenamiento.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}break;
		}

	}
	else if (rbnNT->Checked == true)
	{
		switch (index)
		{
		case 0:
		{
			dgvpkm->Rows->Clear();

			Cronometro->Restart();
			Lista_Pokemones.SelectionSortNT();
			Cronometro->Stop();

			MostrarListaDGV();
			lblselectionNT->Text = "" + Cronometro->Elapsed;

		}break;
		case 1:
		{
			dgvpkm->Rows->Clear();

			Cronometro->Restart();
			Lista_Pokemones.QuickSortNT(Lista_Pokemones.GetHeader(), Lista_Pokemones.GetFin());
			Cronometro->Stop();
			MostrarListaDGV();

			lblquickNT->Text = "" + Cronometro->Elapsed;


		}break;
		case 2:
		{
			dgvpkm->Rows->Clear();

			Cronometro->Restart();

			Lista_Pokemones.ShellSortNT();

			Cronometro->Stop();
			MostrarListaDGV();

			lblshellNT->Text = "" + Cronometro->Elapsed;

		}break;

		default:
		{
			MessageBox::Show("Seleccione un método de ordenamiento.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}break;
		}

	}
	else
	{
		MessageBox::Show("Seleccione un botón para que pueda ser ordenado.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}
};
}
