#pragma once
#include "ClassesManager.h"
#include "Classes.h"
namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmAddClass
	/// </summary>
	public ref class frmAddClass : public System::Windows::Forms::Form
	{
	private:Classes^ std;
	public:
		frmAddClass(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmAddClass(Classes^ std) : frmAddClass()
		{
			if (std != nullptr) {
				this->std = std;
				CLASSNAME->Text = std->Name;
			

			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAddClass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ CLASSNAME;
	private: System::Windows::Forms::Label^ label1;




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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->CLASSNAME = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 44);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAddClass::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 44);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAddClass::button1_Click);
			// 
			// CLASSNAME
			// 
			this->CLASSNAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CLASSNAME->Location = System::Drawing::Point(17, 80);
			this->CLASSNAME->Name = L"CLASSNAME";
			this->CLASSNAME->Size = System::Drawing::Size(290, 35);
			this->CLASSNAME->TabIndex = 23;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 25);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Class Name";
			// 
			// frmAddClass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(346, 306);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->CLASSNAME);
			this->Name = L"frmAddClass";
			this->Text = L"frmAddClass";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (std == nullptr) {
			SaveFile();
		}
		else {
			EditFile();
		}

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}

	   private: System::Void SaveFile() {
		   try {

			   Classes^ _f = gcnew Classes();


			   _f->Name = CLASSNAME->Text;




			   ClassesManager::manager->Load();
			   ClassesManager::manager->Add(_f);
			   ClassesManager::manager->Save();


			   MessageBox::Show("Saved Sucessfully");



			   CLASSNAME->Text = System::String::Empty;
			
		   }
		   catch (Exception^) {
			   MessageBox::Show("Error Occourd While Saving");
		   }
	   }


private: System::Void EditFile() {
	try {
		std->Name = CLASSNAME->Text;
	

		ClassesManager::manager->Save();

		MessageBox::Show("Saved Sucessfully");
	}
	catch (Exception^) {
		MessageBox::Show("Error Occourd While Saving");
	}
}

};
}
