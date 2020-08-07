#pragma once
#include "Depart.h"
#include "DepartmentManager.h"
#include "Courses.h"
#include "CourseManager.h"
#include "Batch.h"
#include "BatchManager.h"
#include "Student.h"
#include "StudentManager.h"
#include "Classes.h"
#include "ClassesManager.h"
#include "Attandence.h"


namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddAttandence
	/// </summary>
	public ref class AddAttandence : public System::Windows::Forms::Form
	{
	public:
		AddAttandence(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Attandence^ std;
		AddAttandence(Attandence^ std) : AddAttandence()
		{
			/*DEPARTMENT->SelectedItem = std->department;
			BATCH->SelectedItem = std->batch;
			CLASSE->SelectedItem = std->Classe;
			COURSE->SelectedItem = std->Course;
			SEMESTER->SelectedItem = std->Semester;
			dateTimePicker1->Value = std->Date ;*/
			this->std = std;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddAttandence()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ STUDENT;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ COURSE;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ DEPARTMENT;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ SEMESTER;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ BATCH;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ CLASSE;

	private: System::Windows::Forms::Label^ label6;

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
			this->STUDENT = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->COURSE = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DEPARTMENT = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SEMESTER = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BATCH = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->CLASSE = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// STUDENT
			// 
			this->STUDENT->FormattingEnabled = true;
			this->STUDENT->Location = System::Drawing::Point(217, 196);
			this->STUDENT->Name = L"STUDENT";
			this->STUDENT->Size = System::Drawing::Size(200, 21);
			this->STUDENT->TabIndex = 68;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 67;
			this->label3->Text = L"Student";
			// 
			// COURSE
			// 
			this->COURSE->FormattingEnabled = true;
			this->COURSE->Location = System::Drawing::Point(217, 248);
			this->COURSE->Name = L"COURSE";
			this->COURSE->Size = System::Drawing::Size(200, 21);
			this->COURSE->TabIndex = 66;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 242);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 25);
			this->label2->TabIndex = 65;
			this->label2->Text = L"Course";
			// 
			// DEPARTMENT
			// 
			this->DEPARTMENT->FormattingEnabled = true;
			this->DEPARTMENT->Location = System::Drawing::Point(217, 21);
			this->DEPARTMENT->Name = L"DEPARTMENT";
			this->DEPARTMENT->Size = System::Drawing::Size(200, 21);
			this->DEPARTMENT->TabIndex = 64;
			this->DEPARTMENT->SelectedIndexChanged += gcnew System::EventHandler(this, &AddAttandence::DEPARTMENT_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 25);
			this->label1->TabIndex = 63;
			this->label1->Text = L"Department";
			// 
			// SEMESTER
			// 
			this->SEMESTER->FormattingEnabled = true;
			this->SEMESTER->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Semester 1", L"Semester 2", L"Semester 3", L"Semester 4",
					L"Semester 5", L"Semester 6", L"Semester 7", L"Semester 8"
			});
			this->SEMESTER->Location = System::Drawing::Point(217, 70);
			this->SEMESTER->Name = L"SEMESTER";
			this->SEMESTER->Size = System::Drawing::Size(200, 21);
			this->SEMESTER->TabIndex = 62;
			this->SEMESTER->SelectedIndexChanged += gcnew System::EventHandler(this, &AddAttandence::SEMESTER_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(15, 66);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 25);
			this->label7->TabIndex = 61;
			this->label7->Text = L"Semester";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(15, 296);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 25);
			this->label4->TabIndex = 69;
			this->label4->Text = L"Date";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(217, 299);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 70;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(325, 335);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 23);
			this->button1->TabIndex = 71;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddAttandence::button1_Click);
			// 
			// BATCH
			// 
			this->BATCH->FormattingEnabled = true;
			this->BATCH->Location = System::Drawing::Point(217, 114);
			this->BATCH->Name = L"BATCH";
			this->BATCH->Size = System::Drawing::Size(200, 21);
			this->BATCH->TabIndex = 73;
			this->BATCH->SelectedIndexChanged += gcnew System::EventHandler(this, &AddAttandence::BATCH_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(15, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 25);
			this->label5->TabIndex = 72;
			this->label5->Text = L"Batch";
			// 
			// CLASSE
			// 
			this->CLASSE->FormattingEnabled = true;
			this->CLASSE->Location = System::Drawing::Point(217, 154);
			this->CLASSE->Name = L"CLASSE";
			this->CLASSE->Size = System::Drawing::Size(200, 21);
			this->CLASSE->TabIndex = 75;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(15, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 25);
			this->label6->TabIndex = 74;
			this->label6->Text = L"Classe";
			// 
			// AddAttandence
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 438);
			this->Controls->Add(this->CLASSE);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->BATCH);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->STUDENT);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->COURSE);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->DEPARTMENT);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SEMESTER);
			this->Controls->Add(this->label7);
			this->Name = L"AddAttandence";
			this->Text = L"AddAttandence";
			this->Load += gcnew System::EventHandler(this, &AddAttandence::AddAttandence_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (std != nullptr) {

			std->department = (Department^)DEPARTMENT->SelectedItem;
			std->batch = (Batch^)BATCH->SelectedItem;
			std->Classe = (Classes^)CLASSE->SelectedItem;
			std->Course = (Courses^)COURSE->SelectedItem;
			std->Semester = SEMESTER->Text;
			std->Date = dateTimePicker1->Value;
			
			StudentManager::manager->Save();
			
			MessageBox::Show("Added Successfully. ");
			//sucess wala
			return;
		}



		Student^ s = (Student^)STUDENT->SelectedItem;
		Department^ d = (Department^)DEPARTMENT->SelectedItem;
		Batch^ b = (Batch^)BATCH->SelectedItem;
		Classes^ c = (Classes^)CLASSE->SelectedItem;
		Courses^ co = (Courses^)COURSE->SelectedItem;
		System::String^ se = SEMESTER->Text;
		System::DateTime date = dateTimePicker1->Value;

		Attandence^ a = gcnew Attandence();
		a->Classe = c;
		a->batch = b;
		a->Course = co;
		a->Date = date;
		a->department = d;
		a->Semester = se;
		s->AddAttandence(a);
		StudentManager::manager->Save();
		//sucess wala

	}
	private: System::Void AddAttandence_Load(System::Object^ sender, System::EventArgs^ e) {
		DepartmentManager::manager->Load();
		for each (Department ^ c in DepartmentManager::manager->Data) {

			if (c != nullptr) {
				DEPARTMENT->Items->Add(c);
			}

		}

		BatchManager::manager->Load();
		for each (Batch ^ c in BatchManager::manager->Data) {
			if (c != nullptr) {
				BATCH->Items->Add(c);
			}
		}

		ClassesManager::manager->Load();
		for each (Classes ^ c in ClassesManager::manager->Data) {
			if (c != nullptr) {
				CLASSE->Items->Add(c);
			}
		}

		if (DEPARTMENT->Items->Count > 0)
			DEPARTMENT->SelectedIndex = 0;
		if (SEMESTER->Items->Count > 0)
			SEMESTER->SelectedIndex = 0;
		if (CLASSE->Items->Count > 0)
			CLASSE->SelectedIndex = 0;
		if (BATCH->Items->Count > 0)
			BATCH->SelectedIndex = 0;
		dateTimePicker1->Value = System::DateTime::Now;
	}
	private: System::Void DEPARTMENT_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			STUDENT->Items->Clear();
			COURSE->Items->Clear();
			CourseManager::manager->Load();
			for each (Courses^ c in CourseManager::manager->Data) {

				if (c != nullptr) {

					if (c->department->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
						if (c->Semester->Equals(SEMESTER->Text))
							COURSE->Items->Add(c);
				}

			}
			
			for each (Student^ c in StudentManager::manager->Data) {

				if (c != nullptr) {
					if (c->Depart->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
						if (c->Baatch->Name->Equals(BATCH->Text))
							if (c->Class->Name->Equals(CLASSE->Text))
								STUDENT->Items->Add(c);
				}

			}
		}
		catch (Exception^ r) {

		}
	}
	private: System::Void SEMESTER_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			STUDENT->Items->Clear();
			COURSE->Items->Clear();
			CourseManager::manager->Load();
			for each (Courses^ c in CourseManager::manager->Data) {

				if (c != nullptr) {

					if (c->department->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
						if (c->Semester->Equals(SEMESTER->Text))
							COURSE->Items->Add(c);
				}

			}
			
			for each (Student^ c in StudentManager::manager->Data) {

				if (c != nullptr) {
					if (c->Depart->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
						if (c->Baatch->Name->Equals(BATCH->Text))
							if (c->Class->Name->Equals(CLASSE->Text))
								STUDENT->Items->Add(c);
				}

			}
		}
		catch (Exception^ r) {

		}
	}
	private: System::Void BATCH_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		try {
			STUDENT->Items->Clear();
			COURSE->Items->Clear();
			CourseManager::manager->Load();
			for each (Courses^ c in CourseManager::manager->Data) {

				if (c != nullptr) {

					if (c->department->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
						if (c->Semester->Equals(SEMESTER->Text))
							COURSE->Items->Add(c);
				}

			}
			
			for each (Student^ c in StudentManager::manager->Data) {

				if (c != nullptr) {
					if (c->Depart->Name->Equals(((Department^)DEPARTMENT->SelectedItem)->Name))
						if (c->Baatch->Name->Equals(BATCH->Text))
							if (c->Class->Name->Equals(CLASSE->Text))
								STUDENT->Items->Add(c);
				}

			}
		}
		catch (Exception^ r) {

		}
	}
	};
}
