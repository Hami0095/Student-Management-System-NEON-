#pragma once

#include "Courses.h"
#include"CourseManager.h"
#include"Depart.h"
#include "DepartmentManager.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmAddCourse
	/// </summary>
	public ref class frmAddCourse : public System::Windows::Forms::Form
	{
	private:Courses^ std;
	public:
		frmAddCourse(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		frmAddCourse(Courses^ std) : frmAddCourse()
		{
			if (std != nullptr) {
				this->std = std;
				CODE->Text = std->Code;
				CREDITHOURS->Text = std->Hours.ToString();
				SUBJECT->Text = std->Name;

			}

		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAddCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ CREDITHOURS;

	private: System::Windows::Forms::TextBox^ CODE;
	private: System::Windows::Forms::TextBox^ SUBJECT;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ DEPARTMENT;

	private: System::Windows::Forms::Label^ Dept;
	private: System::Windows::Forms::ComboBox^ SEMESTER;
	private: System::Windows::Forms::Label^ label4;



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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CREDITHOURS = (gcnew System::Windows::Forms::TextBox());
			this->CODE = (gcnew System::Windows::Forms::TextBox());
			this->SUBJECT = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->DEPARTMENT = (gcnew System::Windows::Forms::ComboBox());
			this->Dept = (gcnew System::Windows::Forms::Label());
			this->SEMESTER = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 25);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Subject Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(132, 25);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Credit Hours";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 25);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Code";
			this->label1->Click += gcnew System::EventHandler(this, &frmAddCourse::label1_Click);
			// 
			// CREDITHOURS
			// 
			this->CREDITHOURS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CREDITHOURS->Location = System::Drawing::Point(17, 103);
			this->CREDITHOURS->Name = L"CREDITHOURS";
			this->CREDITHOURS->Size = System::Drawing::Size(290, 35);
			this->CREDITHOURS->TabIndex = 16;
			// 
			// CODE
			// 
			this->CODE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CODE->Location = System::Drawing::Point(17, 37);
			this->CODE->Name = L"CODE";
			this->CODE->Size = System::Drawing::Size(290, 35);
			this->CODE->TabIndex = 15;
			// 
			// SUBJECT
			// 
			this->SUBJECT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SUBJECT->Location = System::Drawing::Point(17, 169);
			this->SUBJECT->Name = L"SUBJECT";
			this->SUBJECT->Size = System::Drawing::Size(290, 35);
			this->SUBJECT->TabIndex = 20;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(280, 299);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 44);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAddCourse::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(208, 299);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 44);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAddCourse::button2_Click_1);
			// 
			// DEPARTMENT
			// 
			this->DEPARTMENT->FormattingEnabled = true;
			this->DEPARTMENT->Location = System::Drawing::Point(186, 224);
			this->DEPARTMENT->Name = L"DEPARTMENT";
			this->DEPARTMENT->Size = System::Drawing::Size(121, 21);
			this->DEPARTMENT->TabIndex = 23;
			this->DEPARTMENT->SelectedIndexChanged += gcnew System::EventHandler(this, &frmAddCourse::DEPARTMENT_SelectedIndexChanged);
			// 
			// Dept
			// 
			this->Dept->AutoSize = true;
			this->Dept->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dept->Location = System::Drawing::Point(12, 224);
			this->Dept->Name = L"Dept";
			this->Dept->Size = System::Drawing::Size(123, 25);
			this->Dept->TabIndex = 24;
			this->Dept->Text = L"Department";
			// 
			// SEMESTER
			// 
			this->SEMESTER->FormattingEnabled = true;
			this->SEMESTER->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Semester 1", L"Semester 2", L"Semester 3", L"Semester 4",
					L"Semester 5", L"Semester 6", L"Semester 7", L"Semester 8"
			});
			this->SEMESTER->Location = System::Drawing::Point(186, 263);
			this->SEMESTER->Name = L"SEMESTER";
			this->SEMESTER->Size = System::Drawing::Size(121, 21);
			this->SEMESTER->TabIndex = 25;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 263);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 25);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Semester";
			// 
			// frmAddCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(388, 356);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->SEMESTER);
			this->Controls->Add(this->Dept);
			this->Controls->Add(this->DEPARTMENT);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->SUBJECT);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->CREDITHOURS);
			this->Controls->Add(this->CODE);
			this->Name = L"frmAddCourse";
			this->Text = L"frmAddCourse";
			this->Load += gcnew System::EventHandler(this, &frmAddCourse::frmAddCourse_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (std == nullptr) {
			SaveFile();
		}
		else {
			EditFile();
		}
	}

	private: System::Void SaveFile() {
		try {

			Courses^ _f = gcnew Courses();

			_f->Code = CODE->Text;

			_f->Hours = System::Decimal::Parse(CREDITHOURS->Text);

			_f->Name = SUBJECT->Text;
			_f->department = gcnew Department(DEPARTMENT->Text);
			_f->Semester = SEMESTER->Text;

			CourseManager::manager->Load();
			CourseManager::manager->Add(_f);
			CourseManager::manager->Save();


			MessageBox::Show("Saved Sucessfully");



			CODE->Text = System::String::Empty;
			SUBJECT->Text = System::String::Empty;
			CREDITHOURS->Text = System::String::Empty;
		}
		catch (Exception^) {
			MessageBox::Show("Error Occourd While Saving");
		}
	}


private: System::Void EditFile() {
	try {
		std->Code = CODE->Text;
		std->Hours = System::Decimal::Parse(CREDITHOURS->Text);
		std->Name =  SUBJECT->Text;
		std->department->Name = DEPARTMENT->Text;

	
		CourseManager::manager->Save();

		MessageBox::Show("Saved Sucessfully");
	}
	catch (Exception^) {
		MessageBox::Show("Error Occourd While Saving");
	}
}
	

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}





private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void frmAddCourse_Load(System::Object^ sender, System::EventArgs^ e) {
	DepartmentManager::manager->Load();
	for each (Department ^ c in DepartmentManager::manager->Data) {

		if (c != nullptr) {
			DEPARTMENT->Items->Add(c->Name);
		}

	}
}
private: System::Void DEPARTMENT_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};

}

