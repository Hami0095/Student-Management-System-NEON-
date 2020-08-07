#pragma once
#include "TeacherManager.h"
#include "Teacher.h"
#include "HodManager.h"
#include "Hod.h"
#include "CourseManager.h"
#include "Courses.h"
#include "DepartmentManager.h"
#include "Depart.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmAssignCourseToTeacher
	/// </summary>
	public ref class frmAssignCourseToTeacher : public System::Windows::Forms::Form
	{
	public:
		frmAssignCourseToTeacher(void)
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
		~frmAssignCourseToTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ TEACHER;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ DEPARTMENT;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ COURSE;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ SEMESTER;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->TEACHER = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->DEPARTMENT = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->COURSE = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SEMESTER = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(235, 251);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAssignCourseToTeacher::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(316, 251);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(81, 37);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAssignCourseToTeacher::button1_Click);
			// 
			// TEACHER
			// 
			this->TEACHER->FormattingEnabled = true;
			this->TEACHER->Location = System::Drawing::Point(247, 41);
			this->TEACHER->Name = L"TEACHER";
			this->TEACHER->Size = System::Drawing::Size(121, 21);
			this->TEACHER->TabIndex = 44;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(45, 37);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 25);
			this->label7->TabIndex = 43;
			this->label7->Text = L"Teacher";
			// 
			// DEPARTMENT
			// 
			this->DEPARTMENT->FormattingEnabled = true;
			this->DEPARTMENT->Location = System::Drawing::Point(247, 99);
			this->DEPARTMENT->Name = L"DEPARTMENT";
			this->DEPARTMENT->Size = System::Drawing::Size(121, 21);
			this->DEPARTMENT->TabIndex = 46;
			this->DEPARTMENT->SelectedIndexChanged += gcnew System::EventHandler(this, &frmAssignCourseToTeacher::DEPARTMENT_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(45, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 25);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Department";
			// 
			// COURSE
			// 
			this->COURSE->FormattingEnabled = true;
			this->COURSE->Location = System::Drawing::Point(247, 201);
			this->COURSE->Name = L"COURSE";
			this->COURSE->Size = System::Drawing::Size(121, 21);
			this->COURSE->TabIndex = 48;
			this->COURSE->SelectedIndexChanged += gcnew System::EventHandler(this, &frmAssignCourseToTeacher::COURSE_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 25);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Course";
			this->label2->Click += gcnew System::EventHandler(this, &frmAssignCourseToTeacher::label2_Click);
			// 
			// SEMESTER
			// 
			this->SEMESTER->FormattingEnabled = true;
			this->SEMESTER->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Semester 1", L"Semester 2", L"Semester 3", L"Semester 4",
					L"Semester 5", L"Semester 6", L"Semester 7", L"Semester 8"
			});
			this->SEMESTER->Location = System::Drawing::Point(247, 150);
			this->SEMESTER->Name = L"SEMESTER";
			this->SEMESTER->Size = System::Drawing::Size(121, 21);
			this->SEMESTER->TabIndex = 50;
			this->SEMESTER->SelectedIndexChanged += gcnew System::EventHandler(this, &frmAssignCourseToTeacher::SEMESTER_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 25);
			this->label3->TabIndex = 49;
			this->label3->Text = L"Semester";
			// 
			// frmAssignCourseToTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 329);
			this->Controls->Add(this->SEMESTER);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->COURSE);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->DEPARTMENT);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TEACHER);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"frmAssignCourseToTeacher";
			this->Text = L"frmAssignCourseToTeacher";
			this->Load += gcnew System::EventHandler(this, &frmAssignCourseToTeacher::frmAssignCourseToTeacher_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmAssignCourseToTeacher_Load(System::Object^ sender, System::EventArgs^ e) {

		
		for each (Teacher ^ c in TeacherManager::manager->Data) {

			if (c != nullptr) {
				TEACHER->Items->Add(c);
			}
		}
		
		for each (HOD ^ c in HodManager::manager->Data) {

			if (c != nullptr) {
				TEACHER->Items->Add(c);
			}
		}
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
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void DEPARTMENT_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		COURSE->Items->Clear();
		CourseManager::manager->Load();
		for each (Courses ^ c in CourseManager::manager->Data) {

			if (c != nullptr) {

				if (c->department->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
					if (c->Semester->Equals(SEMESTER->Text))
						COURSE->Items->Add(c);
			}

		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (TEACHER->SelectedItem->ToString()->Contains("HOD")) {

			HOD^ _t = (HOD^)TEACHER->SelectedItem;
			Courses^ c = (Courses^)COURSE->SelectedItem;
			_t->AddCourse(c);
			HodManager::manager->Save();
			return;
		}
		Teacher^ t = (Teacher^)TEACHER->SelectedItem;
		Courses^ c = (Courses^)COURSE->SelectedItem;
		t->AddCourse(c);
		TeacherManager::manager->Save();

		MessageBox::Show("Saved Succesfully. ");
	}
	private: System::Void COURSE_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SEMESTER_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		COURSE->Items->Clear();
		CourseManager::manager->Load();
		for each (Courses ^ c in CourseManager::manager->Data) {

			if (c != nullptr) {

				if (c->department->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
					if (c->Semester->Equals(SEMESTER->Text))
						COURSE->Items->Add(c);
			}

		}

	}
};
}
