#pragma once
#include <ctime>
#include "Create_Image.h"
#include "ArrayToFromFile.h"
//#include "ProgrBarFRM.h"
#include "test_perceptron.h"

#define DEBUG 0 //отладочный макрос: 1 - отдака включена, 0 - отладка отключена


namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridView^  dataGridView4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::DataGridView^  dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::DataGridView^  dataGridView6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::DataGridView^  dataGridView7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn18;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle17 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle18 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->dataGridView5);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(29, 30);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(230, 343);
			this->panel1->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(159, 79);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(32, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Веса";
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->AllowUserToResizeColumns = false;
			this->dataGridView5->AllowUserToResizeRows = false;
			this->dataGridView5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView5->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView5->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle13->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView5->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
			});
			this->dataGridView5->Enabled = false;
			this->dataGridView5->Location = System::Drawing::Point(139, 109);
			this->dataGridView5->MultiSelect = false;
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle14->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView5->RowHeadersDefaultCellStyle = dataGridViewCellStyle14;
			this->dataGridView5->RowHeadersWidth = 10;
			this->dataGridView5->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView5->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView5->Size = System::Drawing::Size(75, 121);
			this->dataGridView5->TabIndex = 10;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"1";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 5;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"2";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 5;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"3";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 5;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 326);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(59, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Результат";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Пример цифры 1";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Enabled = false;
			this->dataGridView2->Location = System::Drawing::Point(15, 109);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle16->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle16->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle16;
			this->dataGridView2->RowHeadersWidth = 10;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView2->Size = System::Drawing::Size(75, 121);
			this->dataGridView2->TabIndex = 5;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"1";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 5;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"2";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 5;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"3";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 326);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(6, 270);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Распознавание 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Обучение распознаванию 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->dataGridView6);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->dataGridView3);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Location = System::Drawing::Point(285, 30);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(224, 343);
			this->panel2->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(163, 79);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Веса";
			// 
			// dataGridView6
			// 
			this->dataGridView6->AllowUserToAddRows = false;
			this->dataGridView6->AllowUserToDeleteRows = false;
			this->dataGridView6->AllowUserToResizeColumns = false;
			this->dataGridView6->AllowUserToResizeRows = false;
			this->dataGridView6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView6->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView6->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn13,
					this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15
			});
			dataGridViewCellStyle17->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle17->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle17->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle17->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle17->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle17->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView6->DefaultCellStyle = dataGridViewCellStyle17;
			this->dataGridView6->Enabled = false;
			this->dataGridView6->Location = System::Drawing::Point(139, 109);
			this->dataGridView6->MultiSelect = false;
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->ReadOnly = true;
			dataGridViewCellStyle18->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle18->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle18->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle18->SelectionBackColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle18->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle18->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView6->RowHeadersDefaultCellStyle = dataGridViewCellStyle18;
			this->dataGridView6->RowHeadersWidth = 10;
			this->dataGridView6->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView6->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView6->Size = System::Drawing::Size(69, 121);
			this->dataGridView6->TabIndex = 11;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"1";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->ReadOnly = true;
			this->dataGridViewTextBoxColumn13->Width = 5;
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"2";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->ReadOnly = true;
			this->dataGridViewTextBoxColumn14->Width = 5;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"3";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->ReadOnly = true;
			this->dataGridViewTextBoxColumn15->Width = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 326);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Результат";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 79);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Пример цифры 2";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(88, 326);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView3->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			dataGridViewCellStyle19->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle19->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle19->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle19->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle19->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle19->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle19;
			this->dataGridView3->Enabled = false;
			this->dataGridView3->Location = System::Drawing::Point(15, 109);
			this->dataGridView3->MultiSelect = false;
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			dataGridViewCellStyle20->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle20->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle20->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle20->SelectionBackColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle20->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle20->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle20;
			this->dataGridView3->RowHeadersWidth = 10;
			this->dataGridView3->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView3->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView3->Size = System::Drawing::Size(72, 121);
			this->dataGridView3->TabIndex = 6;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView3_CellContentClick);
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"1";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 5;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"2";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 5;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"3";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 5;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 270);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(205, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Распознавание 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(3, 18);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(205, 23);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Обучение распознаванию 2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->dataGridView7);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->dataGridView4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Location = System::Drawing::Point(553, 30);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(203, 343);
			this->panel3->TabIndex = 2;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(130, 79);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 13);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Веса";
			// 
			// dataGridView7
			// 
			this->dataGridView7->AllowUserToAddRows = false;
			this->dataGridView7->AllowUserToDeleteRows = false;
			this->dataGridView7->AllowUserToResizeColumns = false;
			this->dataGridView7->AllowUserToResizeRows = false;
			this->dataGridView7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView7->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView7->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView7->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn16,
					this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18
			});
			dataGridViewCellStyle21->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle21->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle21->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle21->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle21->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView7->DefaultCellStyle = dataGridViewCellStyle21;
			this->dataGridView7->Enabled = false;
			this->dataGridView7->Location = System::Drawing::Point(114, 109);
			this->dataGridView7->MultiSelect = false;
			this->dataGridView7->Name = L"dataGridView7";
			this->dataGridView7->ReadOnly = true;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle22->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView7->RowHeadersDefaultCellStyle = dataGridViewCellStyle22;
			this->dataGridView7->RowHeadersWidth = 10;
			this->dataGridView7->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView7->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView7->Size = System::Drawing::Size(75, 121);
			this->dataGridView7->TabIndex = 11;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"1";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->ReadOnly = true;
			this->dataGridViewTextBoxColumn16->Width = 5;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"2";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->ReadOnly = true;
			this->dataGridViewTextBoxColumn17->Width = 5;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"3";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->ReadOnly = true;
			this->dataGridViewTextBoxColumn18->Width = 5;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 326);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Результат";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Пример цифры 4";
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->AllowUserToResizeColumns = false;
			this->dataGridView4->AllowUserToResizeRows = false;
			this->dataGridView4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView4->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView4->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle23->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle23->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView4->DefaultCellStyle = dataGridViewCellStyle23;
			this->dataGridView4->Enabled = false;
			this->dataGridView4->Location = System::Drawing::Point(15, 109);
			this->dataGridView4->MultiSelect = false;
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle24->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle24->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView4->RowHeadersDefaultCellStyle = dataGridViewCellStyle24;
			this->dataGridView4->RowHeadersWidth = 10;
			this->dataGridView4->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView4->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView4->Size = System::Drawing::Size(75, 121);
			this->dataGridView4->TabIndex = 6;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"1";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 5;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"2";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 5;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"3";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(83, 326);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(3, 270);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(186, 23);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Распознавание 4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(3, 18);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(186, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Обучение распознаванию 4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(80, 47);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 10;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(77, 127);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellValueChanged);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"1";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 5;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"2";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 5;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"3";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 5;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(762, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(600, 600);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->dataGridView1);
			this->panel4->Location = System::Drawing::Point(285, 416);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(224, 191);
			this->panel4->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(35, 14);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(173, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Введите распознаваемую цифру";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 640);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"PROTORYPE";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


		
		
		


	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		//ifstream in;
		//in.open("weights.txt");//открываем файл для вывода инфы из файла в прогу
		//vector<int> weights;
		//char dig;//символ в файле, может принимать значенио 0 или 1 или размер вектора
		//if (!in.is_open()) // если файл не открыт
		//{
		//	MessageBox::Show("Файл не может быть открыт!");
		//}
		//else
		//{
		//	while (in.get(dig))
		//	{
		//		if (dig != '\n')
		//			weights.push_back(dig - '0');
		//	}
		//	Recog::setweights(weights);
		//}
		//in.close();
		ifstream in;
#pragma region rows and columns

		for (int i = 0; i < row; i++)
		{
			//добавление столбцов и заголовков к ним
			dataGridView1->Columns->Add(i.ToString(), "");
			dataGridView1->Columns[i]->HeaderText = Convert::ToString(i + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView2->Columns->Add(i.ToString(), "");
			dataGridView2->Columns[i]->HeaderText = Convert::ToString(i + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView3->Columns->Add(i.ToString(), "");
			dataGridView3->Columns[i]->HeaderText = Convert::ToString(i + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView4->Columns->Add(i.ToString(), "");
			dataGridView4->Columns[i]->HeaderText = Convert::ToString(i + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView5->Columns->Add(i.ToString(), "");
			dataGridView5->Columns[i]->HeaderText = Convert::ToString(i + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView6->Columns->Add(i.ToString(), "");
			dataGridView6->Columns[i]->HeaderText = Convert::ToString(i + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView7->Columns->Add(i.ToString(), "");
			dataGridView7->Columns[i]->HeaderText = Convert::ToString(i + 1);
		}
		for (int j = 0; j < column; j++)
		{
			//добавление строк и заголовков к ним
			dataGridView1->Rows->Add();
			dataGridView1->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView2->Rows->Add();
			dataGridView2->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView3->Rows->Add();
			dataGridView3->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView4->Rows->Add();
			dataGridView4->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView5->Rows->Add();
			dataGridView5->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView6->Rows->Add();
			dataGridView6->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
			////////////////////////////////////////////////////////////////////////////////
			dataGridView7->Rows->Add();
			dataGridView7->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
		}
#pragma endregion rows and columns

#pragma region fill weights
		///////////////////////////////////////////////////////////////////////////////////для единицы
		in.open("weights_one.txt");//открываем файл для вывода инфы из файла в прогу	
		if (!in.is_open()) // если файл не открыт
			MessageBox::Show("Файл с весами для цифры \"1\" не найден!"); // сообщить об этом
		else
		{
			string str;//переменная для записи числа()
			char dig;//символ в файле, может принимать значенио 0 или 1 или размер вектора
			bool isNeg = false;//является ли число отрицательным
			int x, y;//размеры

			//узнаём размеры из файла--------------------
			for (int f = 0; f < 2; f++)//это цикл для пробега по 2 первым строкам в файле(эти строки хранят размерность вектора) 
			{
				getline(in, str);
				if (f == 0) { y = std::stoi(str); }//из символов получаем строку и конвертируем в число
				if (f == 1) { x = std::stoi(str); }
			}
			//-------------------------------------------
			for (int i = 2; i < x + 2; i++)//игнорим 2 первые строки, так как они задают размер вектора
			{
				for (int j = 0; j < y; j++)
				{
					str = "";
					isNeg = false;
					in >> dig;
					while (dig != ';' && dig != '\n')
					{
						if (dig == '-')
						{
							isNeg = true;
						}
						else
						{
							str += dig;
						}
						in >> dig;
					}
					if (isNeg)
					{
						dataGridView5->Rows[i-2]->Cells[j]->Value = 0 - std::stoi(str);
					}
					else
					{
						dataGridView5->Rows[i - 2]->Cells[j]->Value = std::stoi(str);
					}

				}
			}
			in.close(); // закрываем файл			
		}

		///////////////////////////////////////////////////////////////////////////////////для двойки
		in.open("weights_two.txt");//открываем файл для вывода инфы из файла в прогу	
		if (!in.is_open()) // если файл не открыт
			MessageBox::Show("Файл с весами для цифры \"2\" не найден!"); // сообщить об этом
		else
		{
			string str;//переменная для записи числа()
			char dig;//символ в файле, может принимать значенио 0 или 1 или размер вектора
			bool isNeg = false;//является ли число отрицательным
			int x, y;//размеры

			//узнаём размеры из файла--------------------
			for (int f = 0; f < 2; f++)//это цикл для пробега по 2 первым строкам в файле(эти строки хранят размерность вектора) 
			{
				getline(in, str);
				if (f == 0) { y = std::stoi(str); }//из символов получаем строку и конвертируем в число
				if (f == 1) { x = std::stoi(str); }
			}
			//-------------------------------------------
			for (int i = 2; i < x + 2; i++)//игнорим 2 первые строки, так как они задают размер вектора
			{
				for (int j = 0; j < y; j++)
				{
					str = "";
					isNeg = false;
					in >> dig;
					while (dig != ';' && dig != '\n')
					{
						if (dig == '-')
						{
							isNeg = true;
						}
						else
						{
							str += dig;
						}
						in >> dig;
					}
					if (isNeg)
					{
						dataGridView6->Rows[i - 2]->Cells[j]->Value = 0 - std::stoi(str);
					}
					else
					{
						dataGridView6->Rows[i - 2]->Cells[j]->Value = std::stoi(str);
					}
				}
			}
			in.close(); // закрываем файл			
		}

		///////////////////////////////////////////////////////////////////////////////////для четвёрки
		in.open("weights_four.txt");//открываем файл для вывода инфы из файла в прогу	
		if (!in.is_open()) // если файл не открыт
			MessageBox::Show("Файл с весами для цифры \"4\" не найден!"); // сообщить об этом
		else
		{
			string str;//переменная для записи числа()
			char dig;//символ в файле, может принимать значенио 0 или 1 или размер вектора
			bool isNeg = false;//является ли число отрицательным
			int x, y;//размеры

			//узнаём размеры из файла--------------------
			for (int f = 0; f < 2; f++)//это цикл для пробега по 2 первым строкам в файле(эти строки хранят размерность вектора) 
			{
				getline(in, str);
				if (f == 0) { y = std::stoi(str); }//из символов получаем строку и конвертируем в число
				if (f == 1) { x = std::stoi(str); }
			}
			//-------------------------------------------
			for (int i = 2; i < x + 2; i++)//игнорим 2 первые строки, так как они задают размер вектора
			{
				for (int j = 0; j < y; j++)
				{
					str = "";
					isNeg = false;
					in >> dig;
					while (dig != ';' && dig != '\n')
					{
						if (dig == '-')
						{
							isNeg = true;
						}
						else
						{
							str += dig;
						}
						in >> dig;
					}
					if (isNeg)
					{
						dataGridView7->Rows[i - 2]->Cells[j]->Value = 0 - std::stoi(str);
					}
					else
					{
						dataGridView7->Rows[i - 2]->Cells[j]->Value = std::stoi(str);
					}
				}
			}
			in.close(); // закрываем файл			
		}

		///////////////////////////////////////////////////////////////////////////////////для проверочного грида
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < column; j++)
			{
				dataGridView1->Rows[j]->Cells[i]->Value = 0;
			}
		}

#pragma endregion fill weights

#pragma region Examples

#pragma region one
		//пример единицы
		for (int i = 0; i < 5; i++)
		{
			dataGridView2->Rows[i]->Cells[0]->Value = 0;
			dataGridView2->Rows[i]->Cells[1]->Value = 0;
			dataGridView2->Rows[i]->Cells[2]->Value = 1;
			dataGridView2->Rows[i]->Cells[2]->Style->BackColor = Color::Black;
			dataGridView2->Rows[i]->Cells[2]->Style->ForeColor = Color::White;
		}

#pragma endregion one

#pragma region two
		//пример двойки
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if ( (i==1 && j==0) || (i == 1 && j == 1) || (i == 3 && j == 1) || (i == 3 && j == 2))
				{
					dataGridView3->Rows[i]->Cells[j]->Value = 0;
					continue;
				}
				else
				{
					dataGridView3->Rows[i]->Cells[j]->Value = 1;
					dataGridView3->Rows[i]->Cells[j]->Style->BackColor = Color::Black;
					dataGridView3->Rows[i]->Cells[j]->Style->ForeColor = Color::White;
				}
			}
		}
#pragma endregion two

#pragma region four
		//пример четвёрки
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if ((i == 3 && j == 0) || (i == 4 && j == 0) || 
					(i == 0 && j == 1) || (i == 1 && j == 1) || 
					(i == 3 && j == 1) || (i == 4 && j == 1))
				{
					dataGridView4->Rows[i]->Cells[j]->Value = 0;
					continue;
				}
				else
				{
					dataGridView4->Rows[i]->Cells[j]->Value = 1;
					dataGridView4->Rows[i]->Cells[j]->Style->BackColor = Color::Black;
					dataGridView4->Rows[i]->Cells[j]->Style->ForeColor = Color::White;
				}
			}
		}
#pragma endregion four

#pragma endregion Examples

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		unique_ptr<Recog> one(new Recog());
		srand(time(0)); // автоматическая рандомизация
		unique_ptr<ArrayToFromFile> oneArrToFile (new ArrayToFromFile());
		//ArrayToFromFile *oneArrToFile = new ArrayToFromFile();
		for (int i = 0; i < numberDataTraining; i++) 
		{
			int random_number = rand() % 10;
			one->setNumber(random_number);
			if (random_number == 1) {
				if (!(one->proceed())) one->increase();
			}
			else {
				if (one->proceed()) one->decrease();
			}
		}
		int **arr = one->getWeights();
		oneArrToFile->ArrayToFile(arr, 5, 3, "weights_one.txt");		
		for (int i=0; i<5; i++) 
		{
			for (int j = 0; j < 3; j++)
			{
				dataGridView5->Rows[i]->Cells[j]->Value = arr[i][j];
			}
			delete[] arr[i];
		}
		delete[] arr;
		one.reset();
		oneArrToFile.reset();
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	unique_ptr<Recog> two(new Recog());
	srand(time(0)); // автоматическая рандомизация
	unique_ptr<ArrayToFromFile> twoArrToFile(new ArrayToFromFile());
	//ArrayToFromFile *twoArrToFile = new ArrayToFromFile();
	for (int i = 0; i < numberDataTraining; i++)
	{
		int random_number = rand() % 10;
		two->setNumber(random_number);
		if (random_number == 2) {
			if (!(two->proceed())) two->increase();
		}
		else {
			if (two->proceed()) two->decrease();
		}
	}
	int **arr = two->getWeights();
	twoArrToFile->ArrayToFile(arr, 5, 3, "weights_two.txt");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			dataGridView6->Rows[i]->Cells[j]->Value = arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
	two.reset();
	twoArrToFile.reset();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	unique_ptr<Recog> one(new Recog());
	ifstream in;
	in.open("weights_one.txt");//открываем файл для вывода инфы из файла в прогу	
	string str;//переменная для записи числа()
	if (!in.is_open()) // если файл не открыт
		MessageBox::Show("Файл с весами для цифры \"1\" не найден!"); // сообщить об этом
	else
	{
		char dig;//символ в файле
		bool isNeg = false;//является ли число отрицательным
		int x, y;//размеры

		//узнаём размеры из файла--------------------
		for (int f = 0; f < 2; f++)//это цикл для пробега по 2 первым строкам в файле(эти строки хранят размерность) 
		{
			getline(in, str);
			if (f == 0) { y = std::stoi(str); }//из символов получаем строку и конвертируем в число
			if (f == 1) { x = std::stoi(str); }
		}
		int **loadweights = new int* [x];
		//-------------------------------------------
		for (int i = 2; i < x + 2; i++)//игнорим 2 первые строки, так как они задают размер
		{
			loadweights[i - 2] = new int[y];
			for (int j = 0; j < y; j++)
			{
				str = "";
				isNeg = false;
				in >> dig;
				while (dig != ';' && dig != '\n')
				{
					if (dig == '-')
					{
						isNeg = true;
					}
					else
					{
						str += dig;
					}
					in >> dig;
				}
				if (isNeg)
				{
					loadweights[i - 2][j] = 0 - std::stoi(str);
				}
				else
				{
					loadweights[i - 2][j] = std::stoi(str);
				}
			}
		}
		in.close(); // закрываем файл
		int **inparr = new int*[x];//получив размер создаём его
		for (int i = 0; i < x; i++)
		{
			inparr[i] = new int[y];
			for (int j = 0; j < y; j++)
			{
				inparr[i][j] = Convert::ToInt16(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		unique_ptr<Create_Image> one_im(new Create_Image(loadweights, inparr, x, y));
		//Create_Image * one_im = new Create_Image(loadweights, inparr, x, y);
		MemoryStream^ ms = gcnew MemoryStream(File::ReadAllBytes("test.bmp"));
		Bitmap^ img = gcnew Bitmap(ms);
		ms->Close();
		//pictureBox1->Image = (Image^)img->Clone();
		delete this->pictureBox1->Image;
		pictureBox1->Image = img;
		//delete img;
		//delete one_im;
		Form1::Width = 1400;
		label1->Text = Convert::ToString(one->recognize(inparr, loadweights, x, y));
		label1->Visible = true;
		for (int i = 0; i < x; i++)
		{
			delete[] inparr[i];
			delete[] loadweights[i];
		}
		delete[] inparr;
		delete[] loadweights;
		one.reset();
		one_im.reset();
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	unique_ptr<Recog> two(new Recog());
	ifstream in;
	in.open("weights_two.txt");//открываем файл для вывода инфы из файла в прогу
	if (!in.is_open()) // если файл не открыт
		MessageBox::Show("Файл с весами для цифры \"2\" не найден!"); // сообщить об этом
	else
	{
		char dig;//символ в файле
		bool isNeg = false;//является ли число отрицательным
		int x, y;//размеры
		string str;//переменная для записи числа
		//узнаём размеры из файла--------------------
		for (int f = 0; f < 2; f++)//это цикл для пробега по 2 первым строкам в файле(эти строки хранят размерность) 
		{
			getline(in, str);
			if (f == 0) { y = std::stoi(str); }//из символов получаем строку и конвертируем в число
			if (f == 1) { x = std::stoi(str); }
		}
		int **loadweights = new int*[x];
		//-------------------------------------------
		for (int i = 2; i < x + 2; i++)//игнорим 2 первые строки, так как они задают размер
		{
			loadweights[i - 2] = new int[y];
			for (int j = 0; j < y; j++)
			{
				str = "";
				isNeg = false;
				in >> dig;
				while (dig != ';' && dig != '\n')
				{
					if (dig == '-')
					{
						isNeg = true;
					}
					else
					{
						str += dig;
					}
					in >> dig;
				}
				if (isNeg)
				{
					loadweights[i - 2][j] = 0 - std::stoi(str);
				}
				else
				{
					loadweights[i - 2][j] = std::stoi(str);
				}
			}
		}
		in.close(); // закрываем файл
		int **inparr = new int*[x];//получив размер создаём его
		for (int i = 0; i < x; i++)
		{
			inparr[i] = new int[y];
			for (int j = 0; j < y; j++)
			{
				inparr[i][j] = Convert::ToInt16(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		unique_ptr<Create_Image> two_im(new Create_Image(loadweights, inparr, x, y));
		//Create_Image * two_im = new Create_Image(loadweights, inparr, x, y);
		MemoryStream^ ms = gcnew MemoryStream(File::ReadAllBytes("test.bmp"));
		Bitmap^ img = gcnew Bitmap(ms);
		ms->Close();
		//pictureBox1->Image = (Image^)img->Clone();
		delete this->pictureBox1->Image;
		pictureBox1->Image = img;
		//delete img;
		//delete two_im;
		Form1::Width = 1400;
		label2->Text = Convert::ToString(two->recognize(inparr, loadweights, x, y));
		label2->Visible = true;
		for (int i = 0; i < x; i++)
		{
			delete[] inparr[i];
			delete[] loadweights[i];
		}
		delete[] inparr;
		delete[] loadweights;
		two.reset();
		two_im.reset();
	}
}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		unique_ptr<Recog> four (new Recog());
		srand(time(0)); // автоматическая рандомизация
		unique_ptr<ArrayToFromFile> fourArrToFile (new ArrayToFromFile());
		//ArrayToFromFile *threeArrToFile = new ArrayToFromFile();

#if DEBUG == 1 
		ofstream f;
		f.open("DEBUG_4.txt");
		
	
#endif // DEBUG


	for (int i = 0; i < numberDataTraining; i++)
	{
		int random_number = rand() % 10;

#if DEBUG == 1
		if (f.is_open())
		{
			f << random_number << "\n";
		}
		
#endif // DEBUG

		four->setNumber(random_number);
		if (random_number == 4) {
			if (!(four->proceed())) four->increase();
		}
		else {
			if (four->proceed()) four->decrease();
		}
	}
	int **arr = four->getWeights();
	fourArrToFile->ArrayToFile(arr, 5, 3, "weights_four.txt");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			dataGridView7->Rows[i]->Cells[j]->Value = arr[i][j];
		}
		delete[] arr[i];
	}
	delete[] arr;
	four.reset();
	fourArrToFile.reset();

	//four->~Recog();
#if DEBUG == 1
	f.close();
#endif // DEBUG

}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	unique_ptr<Recog> four(new Recog());
	ifstream in;
	in.open("weights_four.txt");//открываем файл для вывода инфы из файла в прогу
	if (!in.is_open()) // если файл не открыт
		MessageBox::Show("Файл с весами для цифры \"4\" не найден!"); // сообщить об этом
	else
	{
		char dig;//символ в файле
		bool isNeg = false;//является ли число отрицательным
		int x, y;//размеры вектора
		string str;//переменная для записи числа()
		//узнаём размеры из файла--------------------
		for (int f = 0; f < 2; f++)//это цикл для пробега по 2 первым строкам в файле(эти строки хранят размерность) 
		{
			getline(in, str);
			if (f == 0) { y = std::stoi(str); }//из символов получаем строку и конвертируем в число
			if (f == 1) { x = std::stoi(str); }
		}
		int **loadweights = new int*[x];
		//-------------------------------------------
		for (int i = 2; i < x + 2; i++)//игнорим 2 первые строки, так как они задают размер
		{
			loadweights[i - 2] = new int[y];
			for (int j = 0; j < y; j++)
			{
				str = "";
				isNeg = false;
				in >> dig;
				while (dig != ';' && dig != '\n')
				{
						if (dig == '-')
						{
							isNeg = true;
						}
						else
						{
							str += dig;
						}
					in >> dig;
				}
				if (isNeg)
				{
					loadweights[i - 2][j] = 0 - std::stoi(str);
				}
				else
				{
					loadweights[i - 2][j] = std::stoi(str);;
				}
			}
		}
		in.close(); // закрываем файл
		int **inparr = new int*[x];//получив размер создаём его
		for (int i = 0; i < x; i++)
		{
			inparr[i] = new int[y];
			for (int j = 0; j < y; j++)
			{
				inparr[i][j] = Convert::ToInt16(dataGridView1->Rows[i]->Cells[j]->Value);
			}
		}
		unique_ptr<Create_Image> four_im(new Create_Image(loadweights, inparr, x, y));
		//Create_Image * four_im = new Create_Image(loadweights, inparr, x, y);
		MemoryStream^ ms = gcnew MemoryStream(File::ReadAllBytes("test.bmp"));
		Bitmap^ img = gcnew Bitmap(ms);
		ms->Close();
		//pictureBox1->Image = (Image^)img->Clone();
		delete this->pictureBox1->Image;
		pictureBox1->Image = img;
		//delete img;
		//delete four_im;
		label3->Text = Convert::ToString(four->recognize(inparr, loadweights, x, y));
		label3->Visible = true;
		for (int i = 0; i < x; i++)
		{
			delete[] inparr[i];
			delete[] loadweights[i];
		}
		delete[] inparr;
		delete[] loadweights;
		four.reset();
		four_im.reset();
		Form1::Width = 1400;
	}
}
	private: System::Void dataGridView1_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) 
	{
		if (dataGridView1->CurrentCell!=nullptr)
		{
			if (Convert::ToInt16(dataGridView1->CurrentCell->Value) == 0)
			{
				dataGridView1->CurrentCell->Style->BackColor = Color::White;
				dataGridView1->CurrentCell->Style->ForeColor = Color::Black;
			}
			else
			{
				dataGridView1->CurrentCell->Style->BackColor = Color::Black;
				dataGridView1->CurrentCell->Style->ForeColor = Color::White;
			}
		}
	}
private: System::Void dataGridView3_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
};
}
