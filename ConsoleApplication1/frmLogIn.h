#pragma once
#include "StudentManager.h"
#include "HodManager.h"
#include "ITManagerManager.h"
#include "Student.h"
#include "Hod.h"
#include "ITManager.h"
#include "User.h"
#include "frmMain.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmLogIn
	/// </summary>
	public ref class frmLogIn : public System::Windows::Forms::Form
	{
	public:
		frmLogIn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmLogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ BATCH;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BATCH = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 25);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Email ID";
			this->label1->Click += gcnew System::EventHandler(this, &frmLogIn::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button1->Location = System::Drawing::Point(302, 270);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 44);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Log in";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmLogIn::button1_Click);
			// 
			// BATCH
			// 
			this->BATCH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BATCH->Location = System::Drawing::Point(78, 142);
			this->BATCH->Name = L"BATCH";
			this->BATCH->Size = System::Drawing::Size(290, 35);
			this->BATCH->TabIndex = 33;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 25);
			this->label2->TabIndex = 38;
			this->label2->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(78, 208);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(290, 35);
			this->textBox1->TabIndex = 37;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(130, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 47);
			this->label3->TabIndex = 39;
			this->label3->Text = L"Log In";
			// 
			// frmLogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(422, 402);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->BATCH);
			this->Name = L"frmLogIn";
			this->Text = L"frmLogIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		bool login = false;

		StudentManager::manager->Load();
		List<Student^>^ s = StudentManager::manager->Data;
		for each (Student ^ u in s) {
			if (u != nullptr) {
				if (u->Email->Equals(BATCH->Text) && u->Password->Equals(textBox1->Text))
				{
					User::_user = u;
					User::Type = L"std";
					login = true;
					break;
				}
			}
		}

		if (!login)
		{
			TeacherManager::manager->Load();
			List<Teacher^>^ ss = TeacherManager::manager->Data;
			for each (Teacher ^ u in ss) {
				if (u != nullptr) {
					if (u->Email->Equals(BATCH->Text) && u->Password->Equals(textBox1->Text))
					{
						User::_user = u;
							User::Type = L"Tec";
						login = true;
						break;
					}
				}
			}
		}

		if (!login)
		{
			ITManagerManager::manager->Load();
			List<ITManager^>^ ss = ITManagerManager::manager->Data;
			for each (ITManager ^ u in ss) {
				if (u != nullptr) {
					if (u->Email->Equals(BATCH->Text) && u->Password->Equals(textBox1->Text))
					{
						User::_user = u;
						User::Type = L"It";
						login = true;
						break;
					}
				}
			}
		}

		if (!login)
		{
			HodManager::manager->Load();
			List<HOD^>^ ss = HodManager::manager->Data;
			for each (HOD ^ u in ss) {
				if (u != nullptr) {
					if (u->Email->Equals(BATCH->Text) && u->Password->Equals(textBox1->Text))
					{
						User::_user = u;
						User::Type = L"Hod";
						login = true;
						break;
					}
				}
			}
		}
		if (login) {
			this->Hide();
			User::frm = this;
			frmMain^ a = gcnew frmMain();
			a->ShowDialog();
		}
		else {
			MessageBox::Show("Invalid Email and password!");
		}
	}
	};
}
