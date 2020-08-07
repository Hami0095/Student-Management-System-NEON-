#pragma once

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
	/// Summary for frmAddDepartment
	/// </summary>
	public ref class frmAddDepartment : public System::Windows::Forms::Form
	{
	private:Department^ std;
	public:
		frmAddDepartment(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmAddDepartment(Department^ std) : frmAddDepartment()
		{
			if (std != nullptr) {
				this->std = std;
				DEPARTMENT->Text = std->Name;


			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAddDepartment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ DEPARTMENT;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->DEPARTMENT = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 25);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Department";
			this->label1->Click += gcnew System::EventHandler(this, &frmAddDepartment::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(181, 160);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 44);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAddDepartment::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(253, 160);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 44);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAddDepartment::button1_Click);
			// 
			// DEPARTMENT
			// 
			this->DEPARTMENT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DEPARTMENT->Location = System::Drawing::Point(29, 100);
			this->DEPARTMENT->Name = L"DEPARTMENT";
			this->DEPARTMENT->Size = System::Drawing::Size(290, 35);
			this->DEPARTMENT->TabIndex = 33;
			// 
			// frmAddDepartment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 313);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->DEPARTMENT);
			this->Name = L"frmAddDepartment";
			this->Text = L"frmAddDepartment";
			this->Load += gcnew System::EventHandler(this, &frmAddDepartment::frmAddDepartment_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
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

			Department^ _f = gcnew Department();


			_f->Name = DEPARTMENT->Text;




			DepartmentManager::manager->Load();
			DepartmentManager::manager->Add(_f);
			DepartmentManager::manager->Save();


			MessageBox::Show("Saved Sucessfully");

		}


		catch (Exception^) {
			MessageBox::Show("Error Occourd While Saving");
		}
	}
		   private: System::Void EditFile() {
			   try {
				   std->Name = DEPARTMENT->Text;


				   DepartmentManager::manager->Save();

				   MessageBox::Show("Saved Sucessfully");
			   }
			   catch (Exception^) {
				   MessageBox::Show("Error Occourd While Saving");
			   }
		   }

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void frmAddDepartment_Load(System::Object^ sender, System::EventArgs^ e) {

}
};
}
