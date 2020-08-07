#pragma once
#include "User.h"
#include "BatchManager.h"
#include "ClassesManager.h"
#include "CourseManager.h"
#include "DepartmentManager.h"
#include "HodManager.h"
#include "ITManagerManager.h"
#include "StudentManager.h"
#include "TeacherManager.h"


namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmChangePassword
	/// </summary>
	public ref class frmChangePassword : public System::Windows::Forms::Form
	{
	public:
		frmChangePassword(void)
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
		~frmChangePassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ CNPASS;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ OPASS;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ NPASS;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CNPASS = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->OPASS = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NPASS = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(107, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(321, 47);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Change Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(122, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(213, 25);
			this->label2->TabIndex = 44;
			this->label2->Text = L"ReConfirm Password";
			// 
			// CNPASS
			// 
			this->CNPASS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CNPASS->Location = System::Drawing::Point(127, 268);
			this->CNPASS->Name = L"CNPASS";
			this->CNPASS->Size = System::Drawing::Size(290, 35);
			this->CNPASS->TabIndex = 43;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(122, 108);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 25);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Old Password";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->button1->Location = System::Drawing::Point(351, 322);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 44);
			this->button1->TabIndex = 41;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmChangePassword::button1_Click);
			// 
			// OPASS
			// 
			this->OPASS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OPASS->Location = System::Drawing::Point(127, 136);
			this->OPASS->Name = L"OPASS";
			this->OPASS->Size = System::Drawing::Size(290, 35);
			this->OPASS->TabIndex = 40;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(122, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 25);
			this->label4->TabIndex = 47;
			this->label4->Text = L"New Password";
			// 
			// NPASS
			// 
			this->NPASS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NPASS->Location = System::Drawing::Point(127, 202);
			this->NPASS->Name = L"NPASS";
			this->NPASS->Size = System::Drawing::Size(290, 35);
			this->NPASS->TabIndex = 46;
			// 
			// frmChangePassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(538, 469);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->NPASS);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CNPASS);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->OPASS);
			this->Name = L"frmChangePassword";
			this->Text = L"frmChangePassword";
			this->Load += gcnew System::EventHandler(this, &frmChangePassword::frmChangePassword_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmChangePassword_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (NPASS->Text->Equals(CNPASS->Text)){
		if (User::_user->Password->Equals(OPASS->Text) ){
			User::_user->Password = NPASS->Text;
			TeacherManager::manager->Save();
			StudentManager::manager->Save();
			ITManagerManager::manager->Save();
			HodManager::manager->Save();
			
			MessageBox::Show("Hogya Save Mazay kr ab bhai!!!.");

		}
		else {
			MessageBox::Show("Gamgeen Lamhaat Password Puranay WAla Nahi Hay Bai!!!.");

		}
	}

	else {
		MessageBox::Show("Gamgeen Lamhaat Password Match Nahi Kr Rha Bai!!!.");
	}

}
};
}
