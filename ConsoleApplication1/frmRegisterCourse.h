#pragma once
#include"Depart.h"
#include"DepartmentManager.h"
#include "Courses.h"
#include "CourseManager.h"
#include "Batch.h"
#include"BatchManager.h"
#include "Student.h"
#include "StudentManager.h"
namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmRegisterCourse
	/// </summary>
	public ref class frmRegisterCourse : public System::Windows::Forms::Form
	{
	public:
		frmRegisterCourse(void)
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
		~frmRegisterCourse()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::ComboBox^ COURSE;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ DEPARTMENT;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ SEMESTER;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ STUDENT;



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
			this->COURSE = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DEPARTMENT = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SEMESTER = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->STUDENT = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// COURSE
			// 
			this->COURSE->FormattingEnabled = true;
			this->COURSE->Location = System::Drawing::Point(232, 164);
			this->COURSE->Name = L"COURSE";
			this->COURSE->Size = System::Drawing::Size(121, 21);
			this->COURSE->TabIndex = 58;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 25);
			this->label2->TabIndex = 57;
			this->label2->Text = L"Course";
			// 
			// DEPARTMENT
			// 
			this->DEPARTMENT->FormattingEnabled = true;
			this->DEPARTMENT->Location = System::Drawing::Point(232, 12);
			this->DEPARTMENT->Name = L"DEPARTMENT";
			this->DEPARTMENT->Size = System::Drawing::Size(121, 21);
			this->DEPARTMENT->TabIndex = 56;
			this->DEPARTMENT->SelectedIndexChanged += gcnew System::EventHandler(this, &frmRegisterCourse::DEPARTMENT_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 25);
			this->label1->TabIndex = 55;
			this->label1->Text = L"Department";
			// 
			// SEMESTER
			// 
			this->SEMESTER->FormattingEnabled = true;
			this->SEMESTER->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Semester 1", L"Semester 2", L"Semester 3", L"Semester 4",
					L"Semester 5", L"Semester 6", L"Semester 7", L"Semester 8"
			});
			this->SEMESTER->Location = System::Drawing::Point(232, 61);
			this->SEMESTER->Name = L"SEMESTER";
			this->SEMESTER->Size = System::Drawing::Size(121, 21);
			this->SEMESTER->TabIndex = 54;
			this->SEMESTER->SelectedIndexChanged += gcnew System::EventHandler(this, &frmRegisterCourse::SEMESTER_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(30, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 25);
			this->label7->TabIndex = 53;
			this->label7->Text = L"Semester";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(191, 222);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 52;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmRegisterCourse::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(272, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 37);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmRegisterCourse::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(30, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 59;
			this->label3->Text = L"Student";
			// 
			// STUDENT
			// 
			this->STUDENT->FormattingEnabled = true;
			this->STUDENT->Location = System::Drawing::Point(232, 112);
			this->STUDENT->Name = L"STUDENT";
			this->STUDENT->Size = System::Drawing::Size(121, 21);
			this->STUDENT->TabIndex = 60;
			// 
			// frmRegisterCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(389, 320);
			this->Controls->Add(this->STUDENT);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->COURSE);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->DEPARTMENT);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SEMESTER);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmRegisterCourse";
			this->Text = L"frmRegisterCourse";
			this->Load += gcnew System::EventHandler(this, &frmRegisterCourse::frmRegisterCourse_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmRegisterCourse_Load(System::Object^ sender, System::EventArgs^ e) {
		DepartmentManager::manager->Load();
		for each (Department ^ c in DepartmentManager::manager->Data) {

			if (c != nullptr) {
				DEPARTMENT->Items->Add(c);
			}

		}

		if (DEPARTMENT->Items->Count > 0)
			DEPARTMENT->SelectedIndex = 0;
		if (SEMESTER->Items->Count > 0)
			SEMESTER->SelectedIndex = 0;
	

		/*CourseManager::manager->Load();
		for each (Courses ^ c in CourseManager::manager->Data) {

			if (c != nullptr) {
				COURSE->Items->Add(c->Name);
			}

		}*/


	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
}
private: System::Void SEMESTER_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		STUDENT->Items->Clear();
		COURSE->Items->Clear();
		CourseManager::manager->Load();
		for each (Courses ^ c in CourseManager::manager->Data) {

			if (c != nullptr) {

				if (c->department->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
					if (c->Semester->Equals(SEMESTER->Text))
						COURSE->Items->Add(c);
			}

		}
		
		for each (Student ^ c in StudentManager::manager->Data) {

			if (c != nullptr) {
				if (c->Depart->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
					STUDENT->Items->Add(c);
			}

		}
	} 
	catch(Exception^ r){
	
	}

}
private: System::Void DEPARTMENT_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		COURSE->Items->Clear();
		STUDENT->Items->Clear();
		CourseManager::manager->Load();
		for each (Courses ^ c in CourseManager::manager->Data) {

			if (c != nullptr) {

				if (c->department->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
					if (c->Semester->Equals(SEMESTER->Text))
						COURSE->Items->Add(c);
			}

		}
		
		for each (Student ^ c in StudentManager::manager->Data) {

			if (c != nullptr) {

				if (c->Depart->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
					STUDENT->Items->Add(c);
			}

		}
	}
	catch(Exception^ ){
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	Student^ t = (Student^)STUDENT->SelectedItem;
	Courses^ c = (Courses^)COURSE->SelectedItem;
	t->AddCourse(c);
	StudentManager::manager->Save();

	MessageBox::Show("Save hogya baai. ");
		
}
};
}
