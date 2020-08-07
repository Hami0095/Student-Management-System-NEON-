#pragma once
#include "Faculty.h"
#include "Teacher.h"
#include "ITManager.h"
#include "Hod.h"
#include "TeacherManager.h"
#include "HodManager.h"
#include "ITManagerManager.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmAddFacultyMember
	/// </summary>
	public ref class frmAddFacultyMember : public System::Windows::Forms::Form
	{
	private:Teacher^ Tstd;
		   HOD^ Hstd;
		   ITManager^ Istd;

	public:
		frmAddFacultyMember(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmAddFacultyMember(Teacher^ std) : frmAddFacultyMember()
		{
			if (std != nullptr) {
				this->Tstd = std;
				NAME->Text = std->Name;
				FNAME->Text = std->FName;
				ADDRESS->Text = std->Address;
				EMAIL->Text = std->Email;
				PASSWORD->Text = std->Password;



				GENDER->Text = std->Gender;
			}

		}
		frmAddFacultyMember(HOD^ std) : frmAddFacultyMember()
		{
			if (std != nullptr) {
				this->Hstd = std;
				NAME->Text = std->Name;
				FNAME->Text = std->FName;
				ADDRESS->Text = std->Address;
				EMAIL->Text = std->Email;
				PASSWORD->Text = std->Password;



				GENDER->Text = std->Gender;
			}

		}
		frmAddFacultyMember(ITManager^ std) : frmAddFacultyMember()
		{
			if (std != nullptr) {
				this->Istd = std;
				NAME->Text = std->Name;
				FNAME->Text = std->FName;
				ADDRESS->Text = std->Address;
				EMAIL->Text = std->Email;
				PASSWORD->Text = std->Password;



				GENDER->Text = std->Gender;
			}

		}

		protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAddFacultyMember()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::TextBox^ NAME;
		private: System::Windows::Forms::TextBox^ FNAME;
		private: System::Windows::Forms::TextBox^ ADDRESS;
		private: System::Windows::Forms::TextBox^ EMAIL;
		private: System::Windows::Forms::TextBox^ PASSWORD;
		protected:

		protected:






		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label6;

		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::ComboBox^ GENDER;

		private: System::Windows::Forms::ComboBox^ txtFacultyType;

		private: System::Windows::Forms::Button^ button2;

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
			this->NAME = (gcnew System::Windows::Forms::TextBox());
			this->FNAME = (gcnew System::Windows::Forms::TextBox());
			this->ADDRESS = (gcnew System::Windows::Forms::TextBox());
			this->EMAIL = (gcnew System::Windows::Forms::TextBox());
			this->PASSWORD = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->GENDER = (gcnew System::Windows::Forms::ComboBox());
			this->txtFacultyType = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NAME
			// 
			this->NAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NAME->Location = System::Drawing::Point(32, 56);
			this->NAME->Name = L"NAME";
			this->NAME->Size = System::Drawing::Size(290, 35);
			this->NAME->TabIndex = 0;
			this->NAME->TextChanged += gcnew System::EventHandler(this, &frmAddFacultyMember::NAME_TextChanged);
			// 
			// FNAME
			// 
			this->FNAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FNAME->Location = System::Drawing::Point(32, 122);
			this->FNAME->Name = L"FNAME";
			this->FNAME->Size = System::Drawing::Size(290, 35);
			this->FNAME->TabIndex = 1;
			// 
			// ADDRESS
			// 
			this->ADDRESS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ADDRESS->Location = System::Drawing::Point(32, 252);
			this->ADDRESS->Multiline = true;
			this->ADDRESS->Name = L"ADDRESS";
			this->ADDRESS->Size = System::Drawing::Size(290, 86);
			this->ADDRESS->TabIndex = 3;
			this->ADDRESS->TextChanged += gcnew System::EventHandler(this, &frmAddFacultyMember::ADDRESS_TextChanged);
			// 
			// EMAIL
			// 
			this->EMAIL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EMAIL->Location = System::Drawing::Point(35, 433);
			this->EMAIL->Name = L"EMAIL";
			this->EMAIL->Size = System::Drawing::Size(290, 35);
			this->EMAIL->TabIndex = 4;
			this->EMAIL->TextChanged += gcnew System::EventHandler(this, &frmAddFacultyMember::textBox5_TextChanged);
			// 
			// PASSWORD
			// 
			this->PASSWORD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PASSWORD->Location = System::Drawing::Point(32, 499);
			this->PASSWORD->Name = L"PASSWORD";
			this->PASSWORD->Size = System::Drawing::Size(290, 35);
			this->PASSWORD->TabIndex = 5;
			this->PASSWORD->UseSystemPasswordChar = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(241, 540);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 37);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAddFacultyMember::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(27, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(27, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Father Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(27, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Gender";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(27, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 25);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Address";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(30, 405);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 25);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Email";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(30, 471);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 25);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(27, 341);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(136, 25);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Faculty Type";
			// 
			// GENDER
			// 
			this->GENDER->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->GENDER->FormattingEnabled = true;
			this->GENDER->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->GENDER->Location = System::Drawing::Point(32, 188);
			this->GENDER->Name = L"GENDER";
			this->GENDER->Size = System::Drawing::Size(290, 33);
			this->GENDER->TabIndex = 14;
			this->GENDER->Text = L"Male";
			// 
			// txtFacultyType
			// 
			this->txtFacultyType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFacultyType->FormattingEnabled = true;
			this->txtFacultyType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"IT Manager", L"Teacher", L"HOD" });
			this->txtFacultyType->Location = System::Drawing::Point(32, 369);
			this->txtFacultyType->Name = L"txtFacultyType";
			this->txtFacultyType->Size = System::Drawing::Size(290, 33);
			this->txtFacultyType->TabIndex = 16;
			this->txtFacultyType->Text = L"Teacher";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(148, 540);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAddFacultyMember::button2_Click);
			// 
			// frmAddFacultyMember
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(535, 626);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->txtFacultyType);
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
			this->Name = L"frmAddFacultyMember";
			this->Text = L"frmAddFacultyMember";
			this->Load += gcnew System::EventHandler(this, &frmAddFacultyMember::frmAddFacultyMember_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

			if (Tstd != nullptr) {
				Tstd->Name = NAME->Text;
				Tstd->FName = FNAME->Text;
				Tstd->Address = ADDRESS->Text;
				Tstd->Email = EMAIL->Text;
				Tstd->Password = PASSWORD->Text;


				if (GENDER->Text->Equals("Male"))
					Tstd->Gender = "Male";
				else
					Tstd->Gender = "Female";
				TeacherManager::manager->Save();
				MessageBox::Show("Saved Sucessfully");
				return;
			}
			else if (Hstd != nullptr) {
				Hstd->Name = NAME->Text;
				Hstd->FName = FNAME->Text;
				Hstd->Address = ADDRESS->Text;
				Hstd->Email = EMAIL->Text;
				Hstd->Password = PASSWORD->Text;


				if (GENDER->Text->Equals("Male"))
					Hstd->Gender = "Male";
				else
					Hstd->Gender = "Female";
				HodManager::manager->Save();
				MessageBox::Show("Saved Sucessfully");
				return;
			}
			else if (Istd != nullptr) 
				{
				Istd->Name = NAME->Text;
				Istd->FName = FNAME->Text;
				Istd->Address = ADDRESS->Text;
				Istd->Email = EMAIL->Text;
				Istd->Password = PASSWORD->Text;


				if (GENDER->Text->Equals("Male"))
					Istd->Gender = "Male";
				else
					Istd->Gender = "Female";

				ITManagerManager::manager->Save();
				MessageBox::Show("Saved Sucessfully");
				return;
			}

			
			if (txtFacultyType->Text->Equals("Teacher")) {
				TeacherSaveFile();
			}
			else if ((txtFacultyType->Text->Equals("HOD"))) {
				HODSaveFile();
			}
			else {
				ITSaveFile();

			}
		}

		private: System::Void HODSaveFile() {
		try {
			HOD^ _f = gcnew HOD();

			_f->Name = NAME->Text;
			_f->FName = FNAME->Text;
			_f->Address = ADDRESS->Text;
			_f->Email = EMAIL->Text;
			_f->Password = PASSWORD->Text;


			if (txtFacultyType->Text->Equals("Male"))
				_f->Gender = "Male";
			else
				_f->Gender = "Female";

			
			HodManager::manager->Add(_f);
			HodManager::manager->Save();
			MessageBox::Show("Saved Sucessfully");
		}
		catch (Exception^) {
			MessageBox::Show("Error Occourd While Saving");
		}
	}
		private: System::Void TeacherSaveFile() {
		try {
			Teacher^ _f = gcnew Teacher();
			_f->Name = NAME->Text;
			_f->FName = FNAME->Text;
			_f->Address = ADDRESS->Text;
			_f->Email = EMAIL->Text;
			_f->Password = PASSWORD->Text;


			if (GENDER->Text->Equals("Male"))
				_f->Gender = "Male";
			else
				_f->Gender = "Female";

			
			TeacherManager::manager->Add(_f);
			TeacherManager::manager->Save();

			MessageBox::Show("Saved Sucessfully");
		}
		catch (Exception^) {
			MessageBox::Show("Error Occourd While Saving");
		}
	}
		private: System::Void ITSaveFile() {
		try {
			ITManager^ _f = gcnew ITManager();
			_f->Name = NAME->Text;
			_f->FName = FNAME->Text;
			_f->Address = ADDRESS->Text;
			_f->Email = EMAIL->Text;
			_f->Password = PASSWORD->Text;


			if (GENDER->Text->Equals("Male"))
				_f->Gender = "Male";
			else
				_f->Gender = "Female";

			
			ITManagerManager::manager->Add(_f);
			ITManagerManager::manager->Save();

			MessageBox::Show("Saved Sucessfully");
		}
		catch (Exception^) {
			MessageBox::Show("Error Occourd While Saving");
		}


	}



private: System::Void NAME_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void ADDRESS_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void frmAddFacultyMember_Load(System::Object^ sender, System::EventArgs^ e) {}
};
}

