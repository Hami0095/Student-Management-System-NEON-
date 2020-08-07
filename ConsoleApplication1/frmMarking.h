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
#include "Marks.h"


namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMarking
	/// </summary>
	public ref class frmMarking : public System::Windows::Forms::Form
	{
	public:
		frmMarking(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Marks^ std;
		frmMarking(Marks^ std) : frmMarking()
		{
			this->std = std;
			textBox1->Text = std->Total.ToString();
			textBox2->Text = std->Obtained.ToString();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMarking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ CLASSE;
	protected:
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ BATCH;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ STUDENT;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ COURSE;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ DEPARTMENT;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ SEMESTER;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

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
			this->CLASSE = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BATCH = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->STUDENT = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->COURSE = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->DEPARTMENT = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SEMESTER = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CLASSE
			// 
			this->CLASSE->FormattingEnabled = true;
			this->CLASSE->Location = System::Drawing::Point(224, 159);
			this->CLASSE->Name = L"CLASSE";
			this->CLASSE->Size = System::Drawing::Size(200, 21);
			this->CLASSE->TabIndex = 90;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(22, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(78, 25);
			this->label6->TabIndex = 89;
			this->label6->Text = L"Classe";
			// 
			// BATCH
			// 
			this->BATCH->FormattingEnabled = true;
			this->BATCH->Location = System::Drawing::Point(224, 119);
			this->BATCH->Name = L"BATCH";
			this->BATCH->Size = System::Drawing::Size(200, 21);
			this->BATCH->TabIndex = 88;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(22, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 25);
			this->label5->TabIndex = 87;
			this->label5->Text = L"Batch";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(331, 408);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 23);
			this->button1->TabIndex = 86;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMarking::button1_Click);
			// 
			// STUDENT
			// 
			this->STUDENT->FormattingEnabled = true;
			this->STUDENT->Location = System::Drawing::Point(224, 201);
			this->STUDENT->Name = L"STUDENT";
			this->STUDENT->Size = System::Drawing::Size(200, 21);
			this->STUDENT->TabIndex = 83;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 82;
			this->label3->Text = L"Student";
			// 
			// COURSE
			// 
			this->COURSE->FormattingEnabled = true;
			this->COURSE->Location = System::Drawing::Point(224, 253);
			this->COURSE->Name = L"COURSE";
			this->COURSE->Size = System::Drawing::Size(200, 21);
			this->COURSE->TabIndex = 81;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 247);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 25);
			this->label2->TabIndex = 80;
			this->label2->Text = L"Course";
			// 
			// DEPARTMENT
			// 
			this->DEPARTMENT->FormattingEnabled = true;
			this->DEPARTMENT->Location = System::Drawing::Point(224, 26);
			this->DEPARTMENT->Name = L"DEPARTMENT";
			this->DEPARTMENT->Size = System::Drawing::Size(200, 21);
			this->DEPARTMENT->TabIndex = 79;
			this->DEPARTMENT->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMarking::DEPARTMENT_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 25);
			this->label1->TabIndex = 78;
			this->label1->Text = L"Department";
			// 
			// SEMESTER
			// 
			this->SEMESTER->FormattingEnabled = true;
			this->SEMESTER->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Semester 1", L"Semester 2", L"Semester 3", L"Semester 4",
					L"Semester 5", L"Semester 6", L"Semester 7", L"Semester 8"
			});
			this->SEMESTER->Location = System::Drawing::Point(224, 75);
			this->SEMESTER->Name = L"SEMESTER";
			this->SEMESTER->Size = System::Drawing::Size(200, 21);
			this->SEMESTER->TabIndex = 77;
			this->SEMESTER->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMarking::SEMESTER_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(22, 71);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 25);
			this->label7->TabIndex = 76;
			this->label7->Text = L"Semester";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(224, 325);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(199, 20);
			this->textBox1->TabIndex = 91;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(225, 363);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(199, 20);
			this->textBox2->TabIndex = 92;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Quiz", L"Test", L"Assignment", L"Mid", L"Final",
					L"Project"
			});
			this->comboBox1->Location = System::Drawing::Point(223, 291);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 21);
			this->comboBox1->TabIndex = 94;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(22, 285);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 25);
			this->label4->TabIndex = 95;
			this->label4->Text = L"Type";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(22, 325);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 25);
			this->label8->TabIndex = 96;
			this->label8->Text = L"Total";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(22, 363);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(105, 25);
			this->label9->TabIndex = 97;
			this->label9->Text = L"Obtained ";
			// 
			// frmMarking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(472, 470);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->CLASSE);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->BATCH);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->STUDENT);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->COURSE);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->DEPARTMENT);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SEMESTER);
			this->Controls->Add(this->label7);
			this->Name = L"frmMarking";
			this->Text = L"frmMarking";
			this->Load += gcnew System::EventHandler(this, &frmMarking::frmMarking_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (std != nullptr) {

			Student^ s = (Student^)STUDENT->SelectedItem;
			Department^ d = (Department^)DEPARTMENT->SelectedItem;
			Batch^ b = (Batch^)BATCH->SelectedItem;
			Classes^ c = (Classes^)CLASSE->SelectedItem;
			Courses^ co = (Courses^)COURSE->SelectedItem;
			System::String^ se = SEMESTER->Text;
			System::String^ ty = comboBox1->Text;
			System::Decimal t = System::Decimal::Parse(textBox1->Text);
			System::Decimal o = System::Decimal::Parse(textBox2->Text);

			std->Classe = c;
			std->batch = b;
			std->Course = co;
			std->department = d;
			std->Semester = se;
			std->Type = ty;
			std->Total = t;
			std->Obtained = o;


			StudentManager::manager->Save();
			MessageBox::Show("Added Successfully. ");
			return;
		}


		Student^ s = (Student^)STUDENT->SelectedItem;
		Department^ d = (Department^)DEPARTMENT->SelectedItem;
		Batch^ b = (Batch^)BATCH->SelectedItem;
		Classes^ c = (Classes^)CLASSE->SelectedItem;
		Courses^ co = (Courses^)COURSE->SelectedItem;
		System::String^ se = SEMESTER->Text;
		System::String^ ty = comboBox1->Text;
		System::Decimal t = System::Decimal::Parse(textBox1->Text);
		System::Decimal o = System::Decimal::Parse(textBox2->Text);

		Marks^ a = gcnew Marks();
		a->Classe = c;
		a->batch = b;
		a->Course = co;
		a->department = d;
		a->Semester = se;
		a->Type = ty;
		a->Total = t;
		a->Obtained = o;

		s->AddMarks(a);

		StudentManager::manager->Save();

	}
private: System::Void DEPARTMENT_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
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
					if (c->Baatch->Name->Equals(BATCH->Text))
						if (c->Class->Name->Equals(CLASSE->Text))
							STUDENT->Items->Add(c);
			}

		}
	}
	catch (Exception^ r) {

	}
}
private: System::Void frmMarking_Load(System::Object^ sender, System::EventArgs^ e) {
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
