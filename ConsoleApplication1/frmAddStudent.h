#pragma once
#include <iostream>
#include"ClassesManager.h"
#include"Classes.h"
#include "StudentManager.h"
#include "Student.h"
#include"Batch.h"
#include"BatchManager.h"
#include "Depart.h"
#include "DepartmentManager.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmAddStudent
	/// </summary>
	public ref class frmAddStudent : public System::Windows::Forms::Form
	{
	public:
		frmAddStudent(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmAddStudent(Student^ std) : frmAddStudent()
		{
			if (std != nullptr) {
				this->std = std;
				NAME->Text = std->Name;
				FNAME->Text = std->FName;
				ADDRESS->Text = std->Address;
				EMAIL->Text = std->Email;
				PASSWORD->Text = std->Password;
				BATCH->Text = std->Baatch->Name;
				ROLLNO->Text = std->RollNo;
				DEPARTMENT->Text = std->Depart->Name;
				CLASS->Text = std->Class->Name;
			}

		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAddStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ GENDER;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ PASSWORD;
	private: System::Windows::Forms::TextBox^ EMAIL;
	private: System::Windows::Forms::TextBox^ ADDRESS;
	private: System::Windows::Forms::TextBox^ FNAME;
	private: System::Windows::Forms::TextBox^ NAME;


	private: System::Windows::Forms::TextBox^ ROLLNO;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::ComboBox^ CLASS;
	private: System::Windows::Forms::Label^ clas;
	private: System::Windows::Forms::ComboBox^ BATCH;
	private: System::Windows::Forms::ComboBox^ DEPARTMENT;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->GENDER = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->PASSWORD = (gcnew System::Windows::Forms::TextBox());
			this->EMAIL = (gcnew System::Windows::Forms::TextBox());
			this->ADDRESS = (gcnew System::Windows::Forms::TextBox());
			this->FNAME = (gcnew System::Windows::Forms::TextBox());
			this->NAME = (gcnew System::Windows::Forms::TextBox());
			this->ROLLNO = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->CLASS = (gcnew System::Windows::Forms::ComboBox());
			this->clas = (gcnew System::Windows::Forms::Label());
			this->BATCH = (gcnew System::Windows::Forms::ComboBox());
			this->DEPARTMENT = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(493, 414);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAddStudent::button2_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(332, 139);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 25);
			this->label7->TabIndex = 31;
			this->label7->Text = L"Department";
			this->label7->Click += gcnew System::EventHandler(this, &frmAddStudent::label7_Click);
			// 
			// GENDER
			// 
			this->GENDER->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GENDER->FormattingEnabled = true;
			this->GENDER->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->GENDER->Location = System::Drawing::Point(12, 167);
			this->GENDER->Name = L"GENDER";
			this->GENDER->Size = System::Drawing::Size(290, 33);
			this->GENDER->TabIndex = 30;
			this->GENDER->Text = L"Male";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(332, 271);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 25);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(332, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 25);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(7, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 25);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Address";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 25);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Gender";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 25);
			this->label2->TabIndex = 25;
			this->label2->Text = L"Father Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(7, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 25);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Name";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(574, 414);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 37);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAddStudent::button1_Click);
			// 
			// PASSWORD
			// 
			this->PASSWORD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PASSWORD->Location = System::Drawing::Point(337, 299);
			this->PASSWORD->Name = L"PASSWORD";
			this->PASSWORD->Size = System::Drawing::Size(290, 35);
			this->PASSWORD->TabIndex = 22;
			this->PASSWORD->UseSystemPasswordChar = true;
			// 
			// EMAIL
			// 
			this->EMAIL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EMAIL->Location = System::Drawing::Point(337, 233);
			this->EMAIL->Name = L"EMAIL";
			this->EMAIL->Size = System::Drawing::Size(290, 35);
			this->EMAIL->TabIndex = 21;
			// 
			// ADDRESS
			// 
			this->ADDRESS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ADDRESS->Location = System::Drawing::Point(12, 231);
			this->ADDRESS->Multiline = true;
			this->ADDRESS->Name = L"ADDRESS";
			this->ADDRESS->Size = System::Drawing::Size(290, 86);
			this->ADDRESS->TabIndex = 20;
			// 
			// FNAME
			// 
			this->FNAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FNAME->Location = System::Drawing::Point(12, 101);
			this->FNAME->Name = L"FNAME";
			this->FNAME->Size = System::Drawing::Size(290, 35);
			this->FNAME->TabIndex = 19;
			// 
			// NAME
			// 
			this->NAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NAME->Location = System::Drawing::Point(12, 35);
			this->NAME->Name = L"NAME";
			this->NAME->Size = System::Drawing::Size(290, 35);
			this->NAME->TabIndex = 18;
			this->NAME->TextChanged += gcnew System::EventHandler(this, &frmAddStudent::NAME_TextChanged);
			// 
			// ROLLNO
			// 
			this->ROLLNO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ROLLNO->Location = System::Drawing::Point(337, 35);
			this->ROLLNO->Name = L"ROLLNO";
			this->ROLLNO->Size = System::Drawing::Size(290, 35);
			this->ROLLNO->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(332, 7);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 25);
			this->label8->TabIndex = 36;
			this->label8->Text = L"Roll No.";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(315, 95);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(213, 25);
			this->label9->TabIndex = 37;
			this->label9->Text = L"Batch (eg. 2019-Fall)";
			// 
			// CLASS
			// 
			this->CLASS->FormattingEnabled = true;
			this->CLASS->Location = System::Drawing::Point(171, 330);
			this->CLASS->Name = L"CLASS";
			this->CLASS->Size = System::Drawing::Size(131, 21);
			this->CLASS->TabIndex = 39;
			this->CLASS->SelectedIndexChanged += gcnew System::EventHandler(this, &frmAddStudent::CLASS_SelectedIndexChanged);
			// 
			// clas
			// 
			this->clas->AutoSize = true;
			this->clas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clas->Location = System::Drawing::Point(12, 326);
			this->clas->Name = L"clas";
			this->clas->Size = System::Drawing::Size(66, 25);
			this->clas->TabIndex = 40;
			this->clas->Text = L"Class";
			// 
			// BATCH
			// 
			this->BATCH->FormattingEnabled = true;
			this->BATCH->Location = System::Drawing::Point(534, 101);
			this->BATCH->Name = L"BATCH";
			this->BATCH->Size = System::Drawing::Size(121, 21);
			this->BATCH->TabIndex = 41;
			this->BATCH->SelectedIndexChanged += gcnew System::EventHandler(this, &frmAddStudent::BATCH_SelectedIndexChanged);
			// 
			// DEPARTMENT
			// 
			this->DEPARTMENT->FormattingEnabled = true;
			this->DEPARTMENT->Location = System::Drawing::Point(534, 145);
			this->DEPARTMENT->Name = L"DEPARTMENT";
			this->DEPARTMENT->Size = System::Drawing::Size(121, 21);
			this->DEPARTMENT->TabIndex = 42;
			this->DEPARTMENT->SelectedIndexChanged += gcnew System::EventHandler(this, &frmAddStudent::DEPARTMENT_SelectedIndexChanged);
			// 
			// frmAddStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(683, 463);
			this->Controls->Add(this->DEPARTMENT);
			this->Controls->Add(this->BATCH);
			this->Controls->Add(this->clas);
			this->Controls->Add(this->CLASS);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->ROLLNO);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->GENDER);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PASSWORD);
			this->Controls->Add(this->EMAIL);
			this->Controls->Add(this->ADDRESS);
			this->Controls->Add(this->FNAME);
			this->Controls->Add(this->NAME);
			this->Name = L"frmAddStudent";
			this->Text = L"frmAddStudent";
			this->Load += gcnew System::EventHandler(this, &frmAddStudent::frmAddStudent_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NAME_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: Student^ std = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (std == nullptr) {
			SaveFile();
		}
		else {
			EditFile();
		}
	}

	private: System::Void SaveFile() {
		try {

			Student^ _f = gcnew Student();

			_f->Name = NAME->Text;
			_f->FName = FNAME->Text;
			_f->Address = ADDRESS->Text;
			_f->Email = EMAIL->Text;
			_f->Password = PASSWORD->Text;
			_f->Baatch = gcnew Batch(BATCH->Text);
			_f->RollNo = ROLLNO->Text;
			_f->Depart = gcnew Department(DEPARTMENT->Text);
			_f->Class = gcnew Classes(CLASS->Text);


			if (GENDER->Text->Equals("Male"))
				_f->Gender = "Male";
			else
				_f->Gender = "Female";

			
			StudentManager::manager->Add(_f);
			StudentManager::manager->Save();


			MessageBox::Show("Saved Sucessfully");



			NAME->Text = System::String::Empty;
			FNAME->Text = System::String::Empty;
			ADDRESS->Text = System::String::Empty;
			EMAIL->Text = System::String::Empty;
			PASSWORD->Text = System::String::Empty;
			BATCH->Text = System::String::Empty;
			ROLLNO->Text = System::String::Empty;
			DEPARTMENT->Text = System::String::Empty;
			CLASS->Text = System::String::Empty;
		}
		catch (Exception^) {
			MessageBox::Show("Error Occourd While Saving");
		}
	}

	private: System::Void EditFile() {
		try {
			std->Name = NAME->Text;
			std->FName = FNAME->Text;
			std->Address = ADDRESS->Text;
			std->Email = EMAIL->Text;
			std->Password = PASSWORD->Text;
			std->Baatch->Name = BATCH->Text;
			std->RollNo = ROLLNO->Text;
			std->Depart->Name = DEPARTMENT->Text;
			std->Class->Name = CLASS->Text;

			if (GENDER->Text->Equals("Male"))
				std->Gender = "Male";
			else
				std->Gender = "Female";

			StudentManager::manager->Save();


			MessageBox::Show("Saved Sucessfully");
		}
		catch (Exception^) {
			MessageBox::Show("Error Occourd While Saving");
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void frmAddStudent_Load(System::Object^ sender, System::EventArgs^ e) {

		ClassesManager::manager->Load();
		for each (Classes ^ c in ClassesManager::manager->Data) {

			if (c != nullptr) {
				CLASS->Items->Add(c->Name);
			}

		}
		BatchManager::manager->Load();
		for each (Batch ^ c in BatchManager::manager->Data) {

			if (c != nullptr) {
				BATCH->Items->Add(c->Name);
			}

		}
		DepartmentManager::manager->Load();
		for each (Department ^ c in DepartmentManager::manager->Data) {

			if (c != nullptr) {
				DEPARTMENT->Items->Add(c->Name);
			}

		}


	}
	private: System::Void CLASS_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void BATCH_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DEPARTMENT_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
