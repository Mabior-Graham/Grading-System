#pragma once
#include <string>
//#include <windows.h>
//#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;
using namespace System::Drawing::Printing;


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
		std::string Form1::calculategrade(int mark) {
			std::string grade;

			if (mark >= 80 && mark <= 100) {

				grade = "D1";
			}
			else if (mark >= 70 && mark <= 79) {
				grade = "D2";
			}

			else if (mark >= 60 && mark <= 69) {

				grade = "C";
			}

			else if (mark >= 50 && mark <= 59) {

				grade = "E";
			}

			else if (mark < 50 && mark >= 0) {

				grade = "F";
			}
			else {
				grade = "Error:";
			}
			return grade;
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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ Addmarkspanel;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ lastname;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ firstname;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ classname;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ englishmarks;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ mathsmarks;

	private: System::Windows::Forms::Label^ maths;

	private: System::Windows::Forms::TextBox^ geographymarks;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ chemistrymarks;
	private: System::Windows::Forms::Label^ Chemistry;
	private: System::Windows::Forms::TextBox^ biologymarks;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ physicsmarks;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ historymarks;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ kiswahilimarks;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ agriculturemarks;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ commercemarks;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ submit;
	private: System::Windows::Forms::Button^ clearbtn;
	private: System::Windows::Forms::Label^ errorbox;



























private: System::Windows::Forms::Panel^ welcomepanel;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Panel^ gridviewcon;
private: System::Windows::Forms::DataGridView^ allstudentsview;

























private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ deletebtn;
private: System::Windows::Forms::Button^ searchbtn;

private: System::Windows::Forms::TextBox^ searchfield;

























private: System::Windows::Forms::Panel^ editstudent;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Button^ button8;

private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;

























private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::PrintDialog^ dlgPrint;
private: System::Drawing::Printing::PrintDocument^ docPrint;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ student_id;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ first_name_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ last_name_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ class_name_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ english_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ english_grade_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ maths_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ maths_grade_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ biology_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ biology_grade_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ chemistry_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ chemistry_grade_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ geography_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ geography_grade_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ history_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ history_grade_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ physics_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ physics_grade_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ commerce_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ commerce_grade_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ agriculture_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ agriculture_grade_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ kiswahili_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ kiswahili_grade_col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ total_col;

























































































	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->editstudent = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->gridviewcon = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->searchbtn = (gcnew System::Windows::Forms::Button());
			this->searchfield = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->deletebtn = (gcnew System::Windows::Forms::Button());
			this->allstudentsview = (gcnew System::Windows::Forms::DataGridView());
			this->student_id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->first_name_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->last_name_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->class_name_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->english_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->english_grade_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->maths_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->maths_grade_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->biology_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->biology_grade_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chemistry_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chemistry_grade_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->geography_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->geography_grade_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->history_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->history_grade_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->physics_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->physics_grade_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->commerce_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->commerce_grade_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->agriculture_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->agriculture_grade_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->kiswahili_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->kiswahili_grade_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->total_col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->welcomepanel = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Addmarkspanel = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->errorbox = (gcnew System::Windows::Forms::Label());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->clearbtn = (gcnew System::Windows::Forms::Button());
			this->kiswahilimarks = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->agriculturemarks = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->commercemarks = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->physicsmarks = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->historymarks = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->geographymarks = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->chemistrymarks = (gcnew System::Windows::Forms::TextBox());
			this->Chemistry = (gcnew System::Windows::Forms::Label());
			this->biologymarks = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->mathsmarks = (gcnew System::Windows::Forms::TextBox());
			this->maths = (gcnew System::Windows::Forms::Label());
			this->englishmarks = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->classname = (gcnew System::Windows::Forms::ComboBox());
			this->lastname = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->firstname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dlgPrint = (gcnew System::Windows::Forms::PrintDialog());
			this->docPrint = (gcnew System::Drawing::Printing::PrintDocument());
			this->panel1->SuspendLayout();
			this->editstudent->SuspendLayout();
			this->panel2->SuspendLayout();
			this->gridviewcon->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->allstudentsview))->BeginInit();
			this->welcomepanel->SuspendLayout();
			this->Addmarkspanel->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(199)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(218, 622);
			this->panel1->TabIndex = 0;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(3, 515);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(208, 95);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Senior 4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(3, 406);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(208, 103);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Senior 3";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(3, 303);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(208, 97);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Senior 2";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(3, 199);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(208, 98);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Senior 1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(3, 101);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(208, 94);
			this->button2->TabIndex = 2;
			this->button2->Text = L"All Students";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 92);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add Marks";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// editstudent
			// 
			this->editstudent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->editstudent->Controls->Add(this->button8);
			this->editstudent->Controls->Add(this->textBox3);
			this->editstudent->Controls->Add(this->label22);
			this->editstudent->Controls->Add(this->textBox4);
			this->editstudent->Controls->Add(this->label23);
			this->editstudent->Controls->Add(this->textBox5);
			this->editstudent->Controls->Add(this->label24);
			this->editstudent->Controls->Add(this->textBox6);
			this->editstudent->Controls->Add(this->label25);
			this->editstudent->Controls->Add(this->textBox7);
			this->editstudent->Controls->Add(this->label26);
			this->editstudent->Controls->Add(this->textBox8);
			this->editstudent->Controls->Add(this->label27);
			this->editstudent->Controls->Add(this->textBox9);
			this->editstudent->Controls->Add(this->label28);
			this->editstudent->Controls->Add(this->textBox10);
			this->editstudent->Controls->Add(this->label29);
			this->editstudent->Controls->Add(this->textBox11);
			this->editstudent->Controls->Add(this->label30);
			this->editstudent->Controls->Add(this->textBox12);
			this->editstudent->Controls->Add(this->label31);
			this->editstudent->Controls->Add(this->label32);
			this->editstudent->Controls->Add(this->comboBox1);
			this->editstudent->Controls->Add(this->textBox1);
			this->editstudent->Controls->Add(this->label19);
			this->editstudent->Controls->Add(this->textBox2);
			this->editstudent->Controls->Add(this->label20);
			this->editstudent->Controls->Add(this->label21);
			this->editstudent->Controls->Add(this->label18);
			this->editstudent->Controls->Add(this->label17);
			this->editstudent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->editstudent->Location = System::Drawing::Point(0, 0);
			this->editstudent->Name = L"editstudent";
			this->editstudent->Size = System::Drawing::Size(914, 630);
			this->editstudent->TabIndex = 7;
			this->editstudent->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::editstudent_Paint);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(703, 537);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(115, 46);
			this->button8->TabIndex = 47;
			this->button8->Text = L"Update";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(589, 560);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 45;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(491, 560);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(59, 16);
			this->label22->TabIndex = 44;
			this->label22->Text = L"Kiswahili";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(589, 527);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(76, 20);
			this->textBox4->TabIndex = 43;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(491, 527);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(71, 16);
			this->label23->TabIndex = 42;
			this->label23->Text = L"Agriculture";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(589, 488);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(76, 20);
			this->textBox5->TabIndex = 41;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(491, 488);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(74, 16);
			this->label24->TabIndex = 40;
			this->label24->Text = L"Commerce";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(589, 450);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(76, 20);
			this->textBox6->TabIndex = 39;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(491, 450);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 16);
			this->label25->TabIndex = 38;
			this->label25->Text = L"Physics";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(589, 412);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(76, 20);
			this->textBox7->TabIndex = 37;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(491, 412);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(50, 16);
			this->label26->TabIndex = 36;
			this->label26->Text = L"History";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(589, 374);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(76, 20);
			this->textBox8->TabIndex = 35;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(491, 374);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(76, 16);
			this->label27->TabIndex = 34;
			this->label27->Text = L"Geography";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(589, 338);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(76, 20);
			this->textBox9->TabIndex = 33;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(491, 338);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(67, 16);
			this->label28->TabIndex = 32;
			this->label28->Text = L"Chemistry";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(589, 297);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(76, 20);
			this->textBox10->TabIndex = 31;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(491, 297);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(54, 16);
			this->label29->TabIndex = 30;
			this->label29->Text = L"Biology";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(589, 257);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(76, 20);
			this->textBox11->TabIndex = 29;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(491, 257);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(92, 16);
			this->label30->TabIndex = 28;
			this->label30->Text = L"Mathematices";
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::White;
			this->textBox12->Location = System::Drawing::Point(589, 216);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(76, 20);
			this->textBox12->TabIndex = 27;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(491, 216);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(52, 16);
			this->label31->TabIndex = 26;
			this->label31->Text = L"English";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label32->Location = System::Drawing::Point(555, 145);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(57, 20);
			this->label32->TabIndex = 25;
			this->label32->Text = L"Marks";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Senior 1", L"Senior 2", L"Senior 3", L"Senior 4" });
			this->comboBox1->Location = System::Drawing::Point(82, 403);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(173, 21);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"Select Class";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(82, 362);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 11;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(79, 338);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(73, 16);
			this->label19->TabIndex = 10;
			this->label19->Text = L"Last Name";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(82, 305);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 20);
			this->textBox2->TabIndex = 9;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(79, 281);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(73, 16);
			this->label20->TabIndex = 8;
			this->label20->Text = L"First Name";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->Location = System::Drawing::Point(121, 224);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(134, 20);
			this->label21->TabIndex = 7;
			this->label21->Text = L"Student Details";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(79, 151);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(0, 13);
			this->label18->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(290, 32);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(203, 37);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Edit Student";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel2->Controls->Add(this->welcomepanel);
			this->panel2->Controls->Add(this->editstudent);
			this->panel2->Controls->Add(this->Addmarkspanel);
			this->panel2->Controls->Add(this->gridviewcon);
			this->panel2->Location = System::Drawing::Point(236, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(914, 630);
			this->panel2->TabIndex = 1;
			// 
			// gridviewcon
			// 
			this->gridviewcon->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(222)),
				static_cast<System::Int32>(static_cast<System::Byte>(232)));
			this->gridviewcon->Controls->Add(this->button9);
			this->gridviewcon->Controls->Add(this->searchbtn);
			this->gridviewcon->Controls->Add(this->searchfield);
			this->gridviewcon->Controls->Add(this->button7);
			this->gridviewcon->Controls->Add(this->deletebtn);
			this->gridviewcon->Controls->Add(this->allstudentsview);
			this->gridviewcon->Dock = System::Windows::Forms::DockStyle::Fill;
			this->gridviewcon->Location = System::Drawing::Point(0, 0);
			this->gridviewcon->Name = L"gridviewcon";
			this->gridviewcon->Size = System::Drawing::Size(914, 630);
			this->gridviewcon->TabIndex = 6;
			this->gridviewcon->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::gridviewcon_Paint);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::DarkMagenta;
			this->button9->Location = System::Drawing::Point(257, 560);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(84, 36);
			this->button9->TabIndex = 6;
			this->button9->Text = L"Print";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click_1);
			// 
			// searchbtn
			// 
			this->searchbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)), static_cast<System::Int32>(static_cast<System::Byte>(238)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->searchbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->searchbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchbtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(114)), static_cast<System::Int32>(static_cast<System::Byte>(59)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->searchbtn->Location = System::Drawing::Point(800, 560);
			this->searchbtn->Name = L"searchbtn";
			this->searchbtn->Size = System::Drawing::Size(68, 30);
			this->searchbtn->TabIndex = 5;
			this->searchbtn->Text = L"Search";
			this->searchbtn->UseVisualStyleBackColor = false;
			this->searchbtn->Click += gcnew System::EventHandler(this, &Form1::searchbtn_Click);
			// 
			// searchfield
			// 
			this->searchfield->Location = System::Drawing::Point(568, 560);
			this->searchfield->Multiline = true;
			this->searchfield->Name = L"searchfield";
			this->searchfield->Size = System::Drawing::Size(230, 30);
			this->searchfield->TabIndex = 4;
			this->searchfield->TextChanged += gcnew System::EventHandler(this, &Form1::searchfield_TextChanged);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(251)),
				static_cast<System::Int32>(static_cast<System::Byte>(19)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::DarkMagenta;
			this->button7->Location = System::Drawing::Point(128, 560);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(84, 36);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Edit";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// deletebtn
			// 
			this->deletebtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(100)),
				static_cast<System::Int32>(static_cast<System::Byte>(142)));
			this->deletebtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->deletebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deletebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletebtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->deletebtn->Location = System::Drawing::Point(25, 560);
			this->deletebtn->Name = L"deletebtn";
			this->deletebtn->Size = System::Drawing::Size(84, 36);
			this->deletebtn->TabIndex = 2;
			this->deletebtn->Text = L"Delete";
			this->deletebtn->UseVisualStyleBackColor = false;
			this->deletebtn->Click += gcnew System::EventHandler(this, &Form1::deletebtn_Click);
			// 
			// allstudentsview
			// 
			this->allstudentsview->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(182)),
				static_cast<System::Int32>(static_cast<System::Byte>(238)), static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->allstudentsview->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->allstudentsview->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->allstudentsview->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(25) {
				this->student_id,
					this->first_name_col, this->last_name_col, this->class_name_col, this->english_col, this->english_grade_col, this->maths_col,
					this->maths_grade_col, this->biology_col, this->biology_grade_col, this->chemistry_col, this->chemistry_grade_col, this->geography_col,
					this->geography_grade_col, this->history_col, this->history_grade_col, this->physics_col, this->physics_grade_col, this->commerce_col,
					this->commerce_grade_col, this->agriculture_col, this->agriculture_grade_col, this->kiswahili_col, this->kiswahili_grade_col,
					this->total_col
			});
			this->allstudentsview->Cursor = System::Windows::Forms::Cursors::Hand;
			this->allstudentsview->Location = System::Drawing::Point(0, 0);
			this->allstudentsview->Name = L"allstudentsview";
			this->allstudentsview->RowHeadersWidth = 20;
			this->allstudentsview->Size = System::Drawing::Size(911, 533);
			this->allstudentsview->TabIndex = 1;
			this->allstudentsview->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::allstudentsview_CellClick);
			this->allstudentsview->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::allstudentsview_CellContentClick);
			this->allstudentsview->CellMouseMove += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Form1::allstudentsview_CellMouseMove);
			this->allstudentsview->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::allstudentsview_MouseMove);
			// 
			// student_id
			// 
			this->student_id->DataPropertyName = L"student_id";
			this->student_id->HeaderText = L"ID";
			this->student_id->Name = L"student_id";
			this->student_id->Width = 50;
			// 
			// first_name_col
			// 
			this->first_name_col->DataPropertyName = L"first_name";
			this->first_name_col->FillWeight = 50;
			this->first_name_col->HeaderText = L"First Name";
			this->first_name_col->Name = L"first_name_col";
			this->first_name_col->Width = 60;
			// 
			// last_name_col
			// 
			this->last_name_col->DataPropertyName = L"last_name";
			this->last_name_col->HeaderText = L"Last Name";
			this->last_name_col->Name = L"last_name_col";
			this->last_name_col->Width = 60;
			// 
			// class_name_col
			// 
			this->class_name_col->DataPropertyName = L"class_name";
			this->class_name_col->HeaderText = L"Class";
			this->class_name_col->Name = L"class_name_col";
			this->class_name_col->Width = 50;
			// 
			// english_col
			// 
			this->english_col->DataPropertyName = L"english";
			this->english_col->HeaderText = L"English";
			this->english_col->Name = L"english_col";
			this->english_col->Width = 50;
			// 
			// english_grade_col
			// 
			this->english_grade_col->DataPropertyName = L"english_grade";
			this->english_grade_col->HeaderText = L"English Grade";
			this->english_grade_col->Name = L"english_grade_col";
			this->english_grade_col->Width = 50;
			// 
			// maths_col
			// 
			this->maths_col->DataPropertyName = L"mathematics";
			this->maths_col->HeaderText = L"Maths";
			this->maths_col->Name = L"maths_col";
			this->maths_col->Width = 50;
			// 
			// maths_grade_col
			// 
			this->maths_grade_col->DataPropertyName = L"maths_grade";
			this->maths_grade_col->HeaderText = L"Maths Grade";
			this->maths_grade_col->Name = L"maths_grade_col";
			this->maths_grade_col->Width = 50;
			// 
			// biology_col
			// 
			this->biology_col->DataPropertyName = L"biology";
			this->biology_col->HeaderText = L"Biology";
			this->biology_col->Name = L"biology_col";
			this->biology_col->Width = 50;
			// 
			// biology_grade_col
			// 
			this->biology_grade_col->DataPropertyName = L"biology_grade";
			this->biology_grade_col->HeaderText = L"Biology Grade";
			this->biology_grade_col->Name = L"biology_grade_col";
			this->biology_grade_col->Width = 50;
			// 
			// chemistry_col
			// 
			this->chemistry_col->DataPropertyName = L"chemistry";
			this->chemistry_col->HeaderText = L"Chemistry";
			this->chemistry_col->Name = L"chemistry_col";
			this->chemistry_col->Width = 60;
			// 
			// chemistry_grade_col
			// 
			this->chemistry_grade_col->DataPropertyName = L"chemistry_grade";
			this->chemistry_grade_col->HeaderText = L"Chemistry Grade";
			this->chemistry_grade_col->Name = L"chemistry_grade_col";
			this->chemistry_grade_col->Width = 60;
			// 
			// geography_col
			// 
			this->geography_col->DataPropertyName = L"geography";
			this->geography_col->HeaderText = L"Geography";
			this->geography_col->Name = L"geography_col";
			this->geography_col->Width = 60;
			// 
			// geography_grade_col
			// 
			this->geography_grade_col->DataPropertyName = L"geography_grade";
			this->geography_grade_col->HeaderText = L"Geography Grade";
			this->geography_grade_col->Name = L"geography_grade_col";
			this->geography_grade_col->Width = 60;
			// 
			// history_col
			// 
			this->history_col->DataPropertyName = L"history";
			this->history_col->HeaderText = L"History";
			this->history_col->Name = L"history_col";
			this->history_col->Width = 50;
			// 
			// history_grade_col
			// 
			this->history_grade_col->DataPropertyName = L"history_grade";
			this->history_grade_col->HeaderText = L"History Grade";
			this->history_grade_col->Name = L"history_grade_col";
			this->history_grade_col->Width = 50;
			// 
			// physics_col
			// 
			this->physics_col->DataPropertyName = L"physics";
			this->physics_col->HeaderText = L"Physics";
			this->physics_col->Name = L"physics_col";
			this->physics_col->Width = 50;
			// 
			// physics_grade_col
			// 
			this->physics_grade_col->DataPropertyName = L"physics_grade";
			this->physics_grade_col->HeaderText = L"Physics Grade";
			this->physics_grade_col->Name = L"physics_grade_col";
			this->physics_grade_col->Width = 50;
			// 
			// commerce_col
			// 
			this->commerce_col->DataPropertyName = L"commerce";
			this->commerce_col->HeaderText = L"Commerce";
			this->commerce_col->Name = L"commerce_col";
			this->commerce_col->Width = 60;
			// 
			// commerce_grade_col
			// 
			this->commerce_grade_col->DataPropertyName = L"commerce_grade";
			this->commerce_grade_col->HeaderText = L"Commerce Grade";
			this->commerce_grade_col->Name = L"commerce_grade_col";
			this->commerce_grade_col->Width = 60;
			// 
			// agriculture_col
			// 
			this->agriculture_col->DataPropertyName = L"agriculture";
			this->agriculture_col->HeaderText = L"Agriculture";
			this->agriculture_col->Name = L"agriculture_col";
			this->agriculture_col->Width = 60;
			// 
			// agriculture_grade_col
			// 
			this->agriculture_grade_col->DataPropertyName = L"agriculture_grade";
			this->agriculture_grade_col->HeaderText = L"Agriculture Grade";
			this->agriculture_grade_col->Name = L"agriculture_grade_col";
			this->agriculture_grade_col->Width = 60;
			// 
			// kiswahili_col
			// 
			this->kiswahili_col->DataPropertyName = L"kiswahili";
			this->kiswahili_col->HeaderText = L"Kiswahili";
			this->kiswahili_col->Name = L"kiswahili_col";
			this->kiswahili_col->Width = 50;
			// 
			// kiswahili_grade_col
			// 
			this->kiswahili_grade_col->DataPropertyName = L"kiswahili_grade";
			this->kiswahili_grade_col->HeaderText = L"Kiswahili Grade";
			this->kiswahili_grade_col->Name = L"kiswahili_grade_col";
			this->kiswahili_grade_col->Width = 50;
			// 
			// total_col
			// 
			this->total_col->DataPropertyName = L"total";
			this->total_col->HeaderText = L"Total";
			this->total_col->Name = L"total_col";
			this->total_col->Width = 50;
			// 
			// welcomepanel
			// 
			this->welcomepanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->welcomepanel->Controls->Add(this->label14);
			this->welcomepanel->Controls->Add(this->label16);
			this->welcomepanel->Controls->Add(this->label15);
			this->welcomepanel->Controls->Add(this->label13);
			this->welcomepanel->Location = System::Drawing::Point(3, 3);
			this->welcomepanel->Name = L"welcomepanel";
			this->welcomepanel->Size = System::Drawing::Size(908, 619);
			this->welcomepanel->TabIndex = 2;
			this->welcomepanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::welcomepanel_Paint_1);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(89, 344);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(595, 86);
			this->label14->TabIndex = 5;
			this->label14->Text = L"GRADING SYSTEM";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(258, 191);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(293, 86);
			this->label16->TabIndex = 4;
			this->label16->Text = L"SCHOOL";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(89, 190);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(201, 86);
			this->label15->TabIndex = 3;
			this->label15->Text = L"HIGH";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(78, 55);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(654, 128);
			this->label13->TabIndex = 2;
			this->label13->Text = L"PORTOBELLO";
			// 
			// Addmarkspanel
			// 
			this->Addmarkspanel->Controls->Add(this->panel4);
			this->Addmarkspanel->Controls->Add(this->panel3);
			this->Addmarkspanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Addmarkspanel->Location = System::Drawing::Point(0, 0);
			this->Addmarkspanel->Name = L"Addmarkspanel";
			this->Addmarkspanel->Size = System::Drawing::Size(914, 630);
			this->Addmarkspanel->TabIndex = 0;
			this->Addmarkspanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Addmarkspanel_Paint);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->panel4->Controls->Add(this->errorbox);
			this->panel4->Controls->Add(this->submit);
			this->panel4->Controls->Add(this->clearbtn);
			this->panel4->Controls->Add(this->kiswahilimarks);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->agriculturemarks);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->commercemarks);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->physicsmarks);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->historymarks);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->geographymarks);
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->chemistrymarks);
			this->panel4->Controls->Add(this->Chemistry);
			this->panel4->Controls->Add(this->biologymarks);
			this->panel4->Controls->Add(this->label6);
			this->panel4->Controls->Add(this->mathsmarks);
			this->panel4->Controls->Add(this->maths);
			this->panel4->Controls->Add(this->englishmarks);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(457, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(457, 630);
			this->panel4->TabIndex = 1;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel4_Paint);
			// 
			// errorbox
			// 
			this->errorbox->AutoSize = true;
			this->errorbox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->errorbox->Location = System::Drawing::Point(50, 44);
			this->errorbox->Name = L"errorbox";
			this->errorbox->Size = System::Drawing::Size(0, 20);
			this->errorbox->TabIndex = 25;
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(198)));
			this->submit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->submit->Location = System::Drawing::Point(238, 410);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(115, 46);
			this->submit->TabIndex = 24;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &Form1::submit_Click);
			// 
			// clearbtn
			// 
			this->clearbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(8)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->clearbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->clearbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clearbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearbtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->clearbtn->Location = System::Drawing::Point(238, 78);
			this->clearbtn->Name = L"clearbtn";
			this->clearbtn->Size = System::Drawing::Size(105, 31);
			this->clearbtn->TabIndex = 23;
			this->clearbtn->Text = L"Clear";
			this->clearbtn->UseVisualStyleBackColor = false;
			this->clearbtn->Click += gcnew System::EventHandler(this, &Form1::clearbtn_Click);
			// 
			// kiswahilimarks
			// 
			this->kiswahilimarks->BackColor = System::Drawing::Color::White;
			this->kiswahilimarks->Location = System::Drawing::Point(124, 433);
			this->kiswahilimarks->Name = L"kiswahilimarks";
			this->kiswahilimarks->Size = System::Drawing::Size(76, 26);
			this->kiswahilimarks->TabIndex = 22;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(26, 433);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(59, 16);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Kiswahili";
			// 
			// agriculturemarks
			// 
			this->agriculturemarks->BackColor = System::Drawing::Color::White;
			this->agriculturemarks->Location = System::Drawing::Point(124, 400);
			this->agriculturemarks->Name = L"agriculturemarks";
			this->agriculturemarks->Size = System::Drawing::Size(76, 26);
			this->agriculturemarks->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(26, 400);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(71, 16);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Agriculture";
			// 
			// commercemarks
			// 
			this->commercemarks->BackColor = System::Drawing::Color::White;
			this->commercemarks->Location = System::Drawing::Point(124, 361);
			this->commercemarks->Name = L"commercemarks";
			this->commercemarks->Size = System::Drawing::Size(76, 26);
			this->commercemarks->TabIndex = 18;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(26, 361);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 16);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Commerce";
			// 
			// physicsmarks
			// 
			this->physicsmarks->BackColor = System::Drawing::Color::White;
			this->physicsmarks->Location = System::Drawing::Point(124, 323);
			this->physicsmarks->Name = L"physicsmarks";
			this->physicsmarks->Size = System::Drawing::Size(76, 26);
			this->physicsmarks->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(26, 323);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 16);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Physics";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// historymarks
			// 
			this->historymarks->BackColor = System::Drawing::Color::White;
			this->historymarks->Location = System::Drawing::Point(124, 285);
			this->historymarks->Name = L"historymarks";
			this->historymarks->Size = System::Drawing::Size(76, 26);
			this->historymarks->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(26, 285);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 16);
			this->label8->TabIndex = 13;
			this->label8->Text = L"History";
			// 
			// geographymarks
			// 
			this->geographymarks->BackColor = System::Drawing::Color::White;
			this->geographymarks->Location = System::Drawing::Point(124, 247);
			this->geographymarks->Name = L"geographymarks";
			this->geographymarks->Size = System::Drawing::Size(76, 26);
			this->geographymarks->TabIndex = 12;
			this->geographymarks->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_2);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(26, 247);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(76, 16);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Geography";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// chemistrymarks
			// 
			this->chemistrymarks->BackColor = System::Drawing::Color::White;
			this->chemistrymarks->Location = System::Drawing::Point(124, 211);
			this->chemistrymarks->Name = L"chemistrymarks";
			this->chemistrymarks->Size = System::Drawing::Size(76, 26);
			this->chemistrymarks->TabIndex = 10;
			// 
			// Chemistry
			// 
			this->Chemistry->AutoSize = true;
			this->Chemistry->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Chemistry->Location = System::Drawing::Point(26, 211);
			this->Chemistry->Name = L"Chemistry";
			this->Chemistry->Size = System::Drawing::Size(67, 16);
			this->Chemistry->TabIndex = 9;
			this->Chemistry->Text = L"Chemistry";
			// 
			// biologymarks
			// 
			this->biologymarks->BackColor = System::Drawing::Color::White;
			this->biologymarks->Location = System::Drawing::Point(124, 170);
			this->biologymarks->Name = L"biologymarks";
			this->biologymarks->Size = System::Drawing::Size(76, 26);
			this->biologymarks->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(26, 170);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(54, 16);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Biology";
			// 
			// mathsmarks
			// 
			this->mathsmarks->BackColor = System::Drawing::Color::White;
			this->mathsmarks->Location = System::Drawing::Point(124, 130);
			this->mathsmarks->Name = L"mathsmarks";
			this->mathsmarks->Size = System::Drawing::Size(76, 26);
			this->mathsmarks->TabIndex = 6;
			// 
			// maths
			// 
			this->maths->AutoSize = true;
			this->maths->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maths->Location = System::Drawing::Point(26, 130);
			this->maths->Name = L"maths";
			this->maths->Size = System::Drawing::Size(92, 16);
			this->maths->TabIndex = 5;
			this->maths->Text = L"Mathematices";
			// 
			// englishmarks
			// 
			this->englishmarks->BackColor = System::Drawing::Color::White;
			this->englishmarks->Location = System::Drawing::Point(124, 89);
			this->englishmarks->Name = L"englishmarks";
			this->englishmarks->Size = System::Drawing::Size(76, 26);
			this->englishmarks->TabIndex = 4;
			this->englishmarks->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 16);
			this->label5->TabIndex = 3;
			this->label5->Text = L"English";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(90, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Marks";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->panel3->Controls->Add(this->classname);
			this->panel3->Controls->Add(this->lastname);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->firstname);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(411, 630);
			this->panel3->TabIndex = 0;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel3_Paint);
			// 
			// classname
			// 
			this->classname->FormattingEnabled = true;
			this->classname->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Senior 1", L"Senior 2", L"Senior 3", L"Senior 4" });
			this->classname->Location = System::Drawing::Point(39, 211);
			this->classname->Name = L"classname";
			this->classname->Size = System::Drawing::Size(173, 21);
			this->classname->TabIndex = 6;
			this->classname->Text = L"Select Class";
			this->classname->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::classname_SelectedIndexChanged);
			// 
			// lastname
			// 
			this->lastname->BackColor = System::Drawing::Color::White;
			this->lastname->Location = System::Drawing::Point(39, 170);
			this->lastname->Name = L"lastname";
			this->lastname->Size = System::Drawing::Size(173, 20);
			this->lastname->TabIndex = 5;
			this->lastname->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(36, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Last Name";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// firstname
			// 
			this->firstname->BackColor = System::Drawing::Color::White;
			this->firstname->Location = System::Drawing::Point(39, 113);
			this->firstname->Name = L"firstname";
			this->firstname->Size = System::Drawing::Size(173, 20);
			this->firstname->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(36, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"First Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(78, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Student Details";
			// 
			// dlgPrint
			// 
			this->dlgPrint->Document = this->docPrint;
			this->dlgPrint->UseEXDialog = true;
			// 
			// docPrint
			// 
			this->docPrint->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &Form1::docPrint_PrintPage);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1154, 636);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Dashboard";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->editstudent->ResumeLayout(false);
			this->editstudent->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->gridviewcon->ResumeLayout(false);
			this->gridviewcon->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->allstudentsview))->EndInit();
			this->welcomepanel->ResumeLayout(false);
			this->welcomepanel->PerformLayout();
			this->Addmarkspanel->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void classname_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {

	
	
	if (englishmarks->Text == "" || mathsmarks->Text == "" || biologymarks->Text == "" || chemistrymarks->Text == "" || agriculturemarks->Text == "" || physicsmarks->Text == "" || kiswahilimarks->Text == "" || geographymarks->Text == "" || historymarks->Text == "" || commercemarks->Text == "" || firstname->Text == "" || lastname->Text == "") {
		errorbox->Text = "Please fill all the fields";
	}
	else if (classname->Text == "Select Class") {
		errorbox->Text = "Please Select the Class";
	}
	else {

		try {


			int English_marks = Convert::ToInt32(this->englishmarks->Text);
			int Maths_marks = Convert::ToInt32(this->mathsmarks->Text);
			int Biology_marks = Convert::ToInt32(this->biologymarks->Text);
			int Chemistry_marks = Convert::ToInt32(this->chemistrymarks->Text);
			int Agricukture_marks = Convert::ToInt32(this->agriculturemarks->Text);
			int Physics_marks = Convert::ToInt32(this->physicsmarks->Text);
			int Kiswahili_marks = Convert::ToInt32(this->kiswahilimarks->Text);
			int Geography_marks = Convert::ToInt32(this->geographymarks->Text);
			int History_marks = Convert::ToInt32(this->historymarks->Text);
			int Commerce_marks = Convert::ToInt32(this->commercemarks->Text);

			String^ First_name = this->firstname->Text;
			String^ Last_name = this->lastname->Text;

			String^ Class_name = this->classname->Text;

			int Total = English_marks + Maths_marks + Biology_marks + Chemistry_marks + Agricukture_marks + Physics_marks + Kiswahili_marks + Geography_marks + History_marks + Commerce_marks;

			String^ English_grade = gcnew String(calculategrade(English_marks).c_str());
			String^ Maths_grade = gcnew String(calculategrade(Maths_marks).c_str());
			String^ Biology_grade = gcnew String(calculategrade(Biology_marks).c_str());
			String^ Chemistry_grade = gcnew String(calculategrade(Chemistry_marks).c_str());
			String^ Agriculture_grade = gcnew String(calculategrade(Agricukture_marks).c_str());
			String^ Physics_grade = gcnew String(calculategrade(Physics_marks).c_str());
			String^ Kiswahili_grade = gcnew String(calculategrade(Kiswahili_marks).c_str());
			String^ Geography_grade = gcnew String(calculategrade(Geography_marks).c_str());
			String^ History_grade = gcnew String(calculategrade(History_marks).c_str());
			String^ Commerce_grade = gcnew String(calculategrade(Commerce_marks).c_str());



			String^ MyCon = "datasource=localhost;username=root;password=;";
			String^ Query = "insert into mabgrading.students_marks(first_name,last_name,class_name,english,mathematics,biology,chemistry,geography,history,physics,commerce,agriculture,kiswahili,total,english_grade,maths_grade,biology_grade,chemistry_grade,geography_grade,history_grade,physics_grade,commerce_grade,agriculture_grade,kiswahili_grade)values('" + First_name + "','" + Last_name + "','" + Class_name + "','" + English_marks + "','" + Maths_marks + "','" + Biology_marks + "','" + Chemistry_marks + "','" + Geography_marks + "','" + History_marks + "','" + Physics_marks + "','" + Commerce_marks + "','" + Agricukture_marks + "','" + Kiswahili_marks + "','" + Total + "','" + English_grade + "','" + Maths_grade+ "','" + Biology_grade + "','" + Chemistry_grade+ "','" + Geography_grade + "','" + History_grade + "','" + Physics_grade + "','" + Commerce_grade + "','" + Agriculture_grade + "','" + Kiswahili_grade + "');";
			MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon);
			MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2);
			MySqlDataReader^ MyReader2;
			MyCon2->Open();
			MyReader2 = MyCommand->ExecuteReader();
			errorbox->Text = "Records Saved";

			while (MyReader2->Read())
			{
				MyCon2->Close();
			}


		}
		catch (Exception^ ex)
		{
			errorbox->Text = ex->Message;
		}


	}

	
		

	


}

private: System::Void clearbtn_Click(System::Object^ sender, System::EventArgs^ e) {



	englishmarks->Text = "";
	mathsmarks->Text = "";
	biologymarks->Text = "";
	chemistrymarks->Text = "";
	agriculturemarks->Text = "";
	physicsmarks->Text = "";
	kiswahilimarks->Text = "";
	geographymarks->Text = "";
	historymarks->Text = "";
	commercemarks->Text = "";
	firstname->Text = "";
	lastname->Text = "";
	classname->Text = "Select Class";
	errorbox->Text = "";




}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void Addmarkspanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {


		this->gridviewcon->BringToFront();
		this->allstudentsview->BringToFront();

		String^ MyCon = "datasource=localhost;username=root;password=;";
		String^ Query = "select * from mabgrading.students_marks;";

		MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon);
		MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2);
		MySqlDataReader^ MyReader;

		try {
			MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = MyCommand;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bsource = gcnew BindingSource();
			bsource->DataSource = dbdataset;
			allstudentsview->DataSource = bsource;
			sda->Update(dbdataset);
			


		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


	this->Addmarkspanel->BringToFront();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	this->gridviewcon->BringToFront();
	this->allstudentsview->BringToFront();

	String^ MyCon = "datasource=localhost;username=root;password=;";
	String^ Query = "select * from mabgrading.students_marks where class_name = 'senior 1';";

	MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon);
	MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2);
	MySqlDataReader^ MyReader;

	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = MyCommand;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dbdataset;
		allstudentsview->DataSource = bsource;
		sda->Update(dbdataset);



	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}



}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	this->gridviewcon->BringToFront();
	this->allstudentsview->BringToFront();

	String^ MyCon = "datasource=localhost;username=root;password=;";
	String^ Query = "select * from mabgrading.students_marks where class_name = 'senior 2';";

	MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon);
	MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2);
	MySqlDataReader^ MyReader;

	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = MyCommand;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dbdataset;
		allstudentsview->DataSource = bsource;
		sda->Update(dbdataset);



	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->gridviewcon->BringToFront();
	this->allstudentsview->BringToFront();
	

	

	String^ MyCon = "datasource=localhost;username=root;password=;";
	String^ Query = "select * from mabgrading.students_marks where class_name = 'senior 3';";

	MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon);
	MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2);
	MySqlDataReader^ MyReader;

	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = MyCommand;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dbdataset;
		allstudentsview->DataSource = bsource;
		sda->Update(dbdataset);



	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	this->gridviewcon->BringToFront();
	this->allstudentsview->BringToFront();

	String^ MyCon = "datasource=localhost;username=root;password=;";
	String^ Query = "select * from mabgrading.students_marks where class_name = 'senior 4';";

	MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon);
	MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2);
	MySqlDataReader^ MyReader;

	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = MyCommand;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dbdataset;
		allstudentsview->DataSource = bsource;
		sda->Update(dbdataset);



	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void welcomepanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void welcomepanel_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void allstudentsview_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void searchbtn_Click(System::Object^ sender, System::EventArgs^ e) {




			this->gridviewcon->BringToFront();
			this->allstudentsview->BringToFront();

			String^ MyCon = "datasource=localhost;username=root;password=;";
			String^ Query = "select * from mabgrading.students_marks where `student_id` like '" + this->searchfield->Text + "';";

			MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon);
			MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2);
			MySqlDataReader^ MyReader;

			try {
				MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
				sda->SelectCommand = MyCommand;
				DataTable^ dbdataset = gcnew DataTable();
				sda->Fill(dbdataset);
				BindingSource^ bsource = gcnew BindingSource();
				bsource->DataSource = dbdataset;
				allstudentsview->DataSource = bsource;
				sda->Update(dbdataset);



			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}



}
private: System::Void gridviewcon_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void searchfield_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
int studentid;
String^ FirstNameupdate;
String^ LastNameupdate;
String^ Classupdate;
int Engupdate;
int Mathupdate;
int Bioupdate;
int Chemupdate;
int Geoupdate;
int Hisupdate;
int Phyupdate;
int Comupdate;
int Agrupdate;
int Kisupdate;
String^ Enggradeupdate;
String^ Mathgradeupdate;
String^ Biogradeupdate;
String^ Chemgradeupdate;
String^ Geogradeupdate;
String^ Hisgradeupdate;
String^ Phygradeupdate;
String^ Comgradeupdate;
String^ Agrgradeupdate;
String^ Kisgradeupdate;
int Totalupdate;
private: System::Void allstudentsview_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	studentid = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["student_id"]->FormattedValue->ToString());
	FirstNameupdate = allstudentsview->Rows[e->RowIndex]->Cells["first_name_col"]->FormattedValue->ToString();
	LastNameupdate = allstudentsview->Rows[e->RowIndex]->Cells["last_name_col"]->FormattedValue->ToString();
	Classupdate = allstudentsview->Rows[e->RowIndex]->Cells["class_name_col"]->FormattedValue->ToString();
	Engupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["english_col"]->FormattedValue->ToString());
	Mathupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["maths_col"]->FormattedValue->ToString());
	Bioupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["biology_col"]->FormattedValue->ToString());
	Chemupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["chemistry_col"]->FormattedValue->ToString());
	Geoupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["geography_col"]->FormattedValue->ToString());
	Hisupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["history_col"]->FormattedValue->ToString());
	Phyupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["physics_col"]->FormattedValue->ToString());
	Comupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["commerce_col"]->FormattedValue->ToString());
	Agrupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["agriculture_col"]->FormattedValue->ToString());
	Kisupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["student_id"]->FormattedValue->ToString());
	Totalupdate = Convert::ToInt32(allstudentsview->Rows[e->RowIndex]->Cells["total_col"]->FormattedValue->ToString());

	Enggradeupdate = allstudentsview->Rows[e->RowIndex]->Cells["english_grade_col"]->FormattedValue->ToString();
	Mathgradeupdate = allstudentsview->Rows[e->RowIndex]->Cells["Maths_grade_col"]->FormattedValue->ToString();
	Biogradeupdate = allstudentsview->Rows[e->RowIndex]->Cells["biology_grade_col"]->FormattedValue->ToString();
	Chemgradeupdate = allstudentsview->Rows[e->RowIndex]->Cells["chemistry_grade_col"]->FormattedValue->ToString();
	Geogradeupdate = allstudentsview->Rows[e->RowIndex]->Cells["geography_grade_col"]->FormattedValue->ToString();
	Hisgradeupdate = allstudentsview->Rows[e->RowIndex]->Cells["history_grade_col"]->FormattedValue->ToString();
	Phygradeupdate = allstudentsview->Rows[e->RowIndex]->Cells["physics_grade_col"]->FormattedValue->ToString();
	Comgradeupdate = allstudentsview->Rows[e->RowIndex]->Cells["commerce_grade_col"]->FormattedValue->ToString();
	Agrgradeupdate = allstudentsview->Rows[e->RowIndex]->Cells["agriculture_grade_col"]->FormattedValue->ToString();
	Kisgradeupdate = allstudentsview->Rows[e->RowIndex]->Cells["kiswahili_grade_col"]->FormattedValue->ToString();


	//MessageBox::Show(Convert::ToString(id));
}
private: System::Void allstudentsview_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	
	
}
private: System::Void allstudentsview_CellMouseMove(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {

	if (e->RowIndex > -1)
	{
		//allstudentsview->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Style->BackColor = Color->
	}
}
private: System::Void deletebtn_Click(System::Object^ sender, System::EventArgs^ e) {
	//MessageBox::Show(Convert::ToString(studentid));

	String^ MyCon = "datasource=localhost;username=root;password=;";
	String^ Query = "delete from mabgrading.students_marks where `student_id` = '" + studentid + "';";

	MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon);
	MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2);
	MySqlDataReader^ MyReader;

	try {
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = MyCommand;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dbdataset;
		//dataGridView1->DataSource = bsource;
		sda->Update(dbdataset);



	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	fetchstudents();
}
	   void fetchstudents() {
		   String^ MyCon = "datasource=localhost;username=root;password=;";
		   String^ Query = "select * from mabgrading.students_marks;";

		   MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon);
		   MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2);
		   MySqlDataReader^ MyReader;

		   try {
			   MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
			   sda->SelectCommand = MyCommand;
			   DataTable^ dbdataset = gcnew DataTable();
			   sda->Fill(dbdataset);
			   BindingSource^ bsource = gcnew BindingSource();
			   bsource->DataSource = dbdataset;
			   allstudentsview->DataSource = bsource;
			   sda->Update(dbdataset);



		   }
		   catch (Exception^ ex)
		   {
			   MessageBox::Show(ex->Message);
		   }

	   }
private: System::Void editstudent_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {


	///edit btn
	editstudent->BringToFront();
	this->textBox2->Text = Convert::ToString(FirstNameupdate);
	this->textBox1->Text = Convert::ToString(LastNameupdate);
	this->comboBox1->Text = Convert::ToString(Classupdate);
	this->textBox12->Text = Convert::ToString(Engupdate);
	this->textBox11->Text = Convert::ToString(Mathupdate);
	this->textBox10->Text = Convert::ToString(Bioupdate);
	this->textBox9->Text = Convert::ToString(Chemupdate);
	this->textBox8->Text = Convert::ToString(Geoupdate);
	this->textBox7->Text = Convert::ToString(Hisupdate);
	this->textBox6->Text = Convert::ToString(Phyupdate);
	this->textBox5->Text = Convert::ToString(Comupdate);
	this->textBox4->Text = Convert::ToString(Agrupdate);
	this->textBox3->Text = Convert::ToString(Kisupdate);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	//Start



	try {
		String^ MyCon = "datasource=localhost;username=root;password=;";
		String^ Query = "update mabgrading.students_marks set first_name = '" + textBox2->Text + "',last_name = '" + textBox1->Text + "',class_name = '" + comboBox1->Text + "',english = '" + textBox12->Text + "',mathematics = '" + textBox11->Text + "',biology = '" + textBox10->Text + "',chemistry = '" + textBox9->Text + "',geography = '" + textBox8->Text + "',History = '" + textBox7->Text + "',physics = '" + textBox6->Text + "',commerce = '" + textBox5->Text + "',agriculture = '" + textBox4->Text + "',kiswahili = '" + textBox3->Text + "' where student_id = '" + studentid + "';";
		MySqlConnection^ MyCon2 = gcnew MySqlConnection(MyCon);
		MySqlCommand^ MyCommand = gcnew MySqlCommand(Query, MyCon2);
		MySqlDataReader^ MyReader2;
		MyCon2->Open();
		MyReader2 = MyCommand->ExecuteReader();
		MessageBox::Show("Data Updated");

		while (MyReader2->Read())
		{
			MyCon2->Close();
		}


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

	//End 


}
private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {

		PrintDialog^ dlgPrint = gcnew PrintDialog;
		PrintDocument^ docPrint = gcnew PrintDocument;
		docPrint->DocumentName = L"Results";
		dlgPrint->Document = docPrint;
		docPrint->PrintPage += gcnew PrintPageEventHandler(this, &Form1::docPrint_PrintPage);
		
		if (dlgPrint->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			docPrint->Print();
		}
}
private: System::Void docPrint_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 60, 90, 700, 90);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 1), 60, 93, 700, 93);

	String^ strDisplay = "Student Result";
	System::Drawing::Font^ fntString = gcnew System::Drawing::Font("Times New Roman", 28,
		FontStyle::Bold);
	e->Graphics->DrawString(strDisplay, fntString,
		Brushes::Black, 280, 100);


	e->Graphics->DrawLine(gcnew Pen(Color::Black, 1), 60, 184, 700, 184);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 60, 187, 700, 187);

	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 250, 680, 250);

	fntString = gcnew System::Drawing::Font("Times New Roman", 10,
		FontStyle::Bold);
	e->Graphics->DrawString("First Name:", fntString,
		Brushes::Black, 100, 260);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10,
		FontStyle::Regular);
	e->Graphics->DrawString(FirstNameupdate, fntString,
		Brushes::Black, 260, 260); 

	e->Graphics->DrawLine(gcnew Pen(Color::Black, 1), 100, 280, 680, 280);

	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Bold);
	e->Graphics->DrawString("Last Name:", fntString,
		Brushes::Black, 100, 290);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(LastNameupdate, fntString,
		Brushes::Black, 260, 290); 

	e->Graphics->DrawLine(gcnew Pen(Color::Black, 1), 100, 310, 680, 310);


	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Bold);
	e->Graphics->DrawString("Subjects", fntString, Brushes::Black, 100, 350);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);

	e->Graphics->DrawString("Marks", fntString, Brushes::Black, 260, 350);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 1), 100, 370, 680, 370);

	e->Graphics->DrawString("Grades", fntString, Brushes::Black, 420, 350);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 1), 100, 370, 680, 370);

	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Bold);
	e->Graphics->DrawString("English:", fntString,
		Brushes::Black, 100, 380);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Engupdate), fntString,
		Brushes::Black,
		RectangleF(260, 380, 420, 380));
	e->Graphics->DrawString(Enggradeupdate, fntString, Brushes::Black, 420, 380);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 1), 100, 400, 680, 400);

	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Bold);
	e->Graphics->DrawString("Maths:", fntString,
		Brushes::Black, 100, 410);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Mathupdate), fntString,
		Brushes::Black,
		RectangleF(260, 410, 400, 410));
	e->Graphics->DrawString(Mathgradeupdate, fntString, Brushes::Black, 420, 410);

	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 430, 680, 430);

	e->Graphics->DrawString("Biology:", fntString,
		Brushes::Black, 100, 440);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Bioupdate), fntString,
		Brushes::Black,
		RectangleF(260, 440, 420, 440));
	e->Graphics->DrawString(Biogradeupdate, fntString, Brushes::Black, 420, 440);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 460, 680, 460);

	e->Graphics->DrawString("Chemistry:", fntString,
		Brushes::Black, 100, 470);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Chemupdate), fntString,
		Brushes::Black,
		RectangleF(260, 470, 440, 470));
	e->Graphics->DrawString(Chemgradeupdate, fntString, Brushes::Black, 420, 470);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 500, 680, 500);

	e->Graphics->DrawString("Geography:", fntString,
		Brushes::Black, 100, 505);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Geoupdate), fntString,
		Brushes::Black,
		RectangleF(260, 505, 460, 505));
	e->Graphics->DrawString(Geogradeupdate, fntString, Brushes::Black, 420, 505);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 530, 680, 530);

	e->Graphics->DrawString("History:", fntString,
		Brushes::Black, 100, 540);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Hisupdate), fntString,
		Brushes::Black,
		RectangleF(260, 540, 480, 540));
	e->Graphics->DrawString(Hisgradeupdate, fntString, Brushes::Black, 420, 540);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 560, 680, 560);

	e->Graphics->DrawString("Physics:", fntString,
		Brushes::Black, 100, 570);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Phyupdate), fntString,
		Brushes::Black,
		RectangleF(260, 570, 500, 570));
	e->Graphics->DrawString(Phygradeupdate, fntString, Brushes::Black, 420, 570);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 600, 680, 600);

	e->Graphics->DrawString("Commerce:", fntString,
		Brushes::Black, 100, 610);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Comupdate), fntString,
		Brushes::Black,
		RectangleF(260, 610, 520, 610));
	e->Graphics->DrawString(Comgradeupdate, fntString, Brushes::Black, 420, 610);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 630, 680, 630);

	e->Graphics->DrawString("Agriculture:", fntString,
		Brushes::Black, 100, 640);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Agrupdate), fntString,
		Brushes::Black,
		RectangleF(260, 640, 520, 640));
	e->Graphics->DrawString(Agrgradeupdate, fntString, Brushes::Black, 420, 640);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 660, 680, 660);

	e->Graphics->DrawString("Kiswahili:", fntString,
		Brushes::Black, 100, 670);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Kisupdate), fntString,
		Brushes::Black,
		RectangleF(260, 670, 520, 670));
	e->Graphics->DrawString(Kisgradeupdate, fntString, Brushes::Black, 420, 670);
	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 690, 680, 690);

	e->Graphics->DrawString("Total:", fntString,
		Brushes::Black, 100, 700);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Totalupdate), fntString,
		Brushes::Black,
		RectangleF(260, 700, 520, 700));

	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 720, 680, 720);

	e->Graphics->DrawString("Class:", fntString,
		Brushes::Black, 100, 730);
	fntString = gcnew System::Drawing::Font("Times New Roman", 10, FontStyle::Regular);
	e->Graphics->DrawString(Convert::ToString(Classupdate), fntString,
		Brushes::Black,
		RectangleF(260, 730, 520, 730));

	e->Graphics->DrawLine(gcnew Pen(Color::Black, 2), 100, 750, 680, 750);
}
};
}