#pragma once
#include "Student.h"
#include "StudentManager.h"
#include "frmAddStudent.h"
#include "Courses.h"
#include "CourseManager.h"
#include "Attandence.h"
#include "Marks.h"
#include "AddAttandence.h"
#include "frmMarking.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmViewStudent
	/// </summary>
	public ref class frmViewStudent : public System::Windows::Forms::Form
	{
	public:
		frmViewStudent(void)
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
		~frmViewStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 75);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1034, 376);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmViewStudent::dataGridView1_CellContentClick);
			this->dataGridView1->Click += gcnew System::EventHandler(this, &frmViewStudent::dataGridView1_Click);
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &frmViewStudent::dataGridView1_DoubleClick);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(885, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 54);
			this->button1->TabIndex = 24;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmViewStudent::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(567, 15);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 54);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Edit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmViewStudent::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(727, 15);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 54);
			this->button3->TabIndex = 26;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmViewStudent::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(16, 486);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(296, 192);
			this->dataGridView2->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label1->Location = System::Drawing::Point(12, 454);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 29);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Assigned Courses";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label2->Location = System::Drawing::Point(348, 454);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 29);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Attandance";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(353, 486);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(296, 192);
			this->dataGridView3->TabIndex = 30;
			this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmViewStudent::dataGridView3_CellContentClick);
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(684, 486);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(296, 192);
			this->dataGridView4->TabIndex = 32;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label3->Location = System::Drawing::Point(679, 454);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 29);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Marks";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(183, 684);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(129, 32);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Unregister";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmViewStudent::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(17, 684);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(129, 32);
			this->button5->TabIndex = 34;
			this->button5->Text = L"Withdraw";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &frmViewStudent::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(520, 684);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(129, 32);
			this->button6->TabIndex = 35;
			this->button6->Text = L"Edit";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &frmViewStudent::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(851, 684);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(129, 32);
			this->button7->TabIndex = 36;
			this->button7->Text = L"Edit";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &frmViewStudent::button7_Click);
			// 
			// frmViewStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1049, 749);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmViewStudent";
			this->Text = L"frmViewStudent";
			this->Load += gcnew System::EventHandler(this, &frmViewStudent::frmViewStudent_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadData();
	}

	private: System::Void LoadData() {
		
		dataGridView1->AutoGenerateColumns = true;
		dataGridView1->DataSource = nullptr;

		

		if (User::Type->Equals("std"))
		{
			List<Student^>^ finalstd = gcnew List<Student^>();

			for each (Student ^ s in StudentManager::manager->Data) {
				if (s == (Student^)User::_user) {
					finalstd->Add(s);
				}
			}

			dataGridView1->DataSource = finalstd;
		}
		else
			dataGridView1->DataSource = StudentManager::manager->Data;
		dataGridView1->Refresh();
		for (int i = 0; i <= dataGridView1->Columns->Count - 1; i++) {
			dataGridView1->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		}
	}

	private: System::Void Edit() {
		try {
			Student^ std = (Student^)dataGridView1->SelectedRows[0]->DataBoundItem;
			(gcnew frmAddStudent(std))->ShowDialog();
			LoadData();
		}
		catch (Exception^)
		{
			MessageBox::Show("First Select The Student.");
		}
	}
	private: System::Void frmViewStudent_Load(System::Object^ sender, System::EventArgs^ e) {
		if (User::Type->Equals("std"))
			button2->Visible = false;
		
		LoadData();
	}
	private: System::Void dataGridView1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
		//Edit();
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Edit();
	}
	private: System::Void dataGridView1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			Student^ Tstd = (Student^)dataGridView1->SelectedRows[0]->DataBoundItem;
			dataGridView2->AutoGenerateColumns = true;
			dataGridView2->DataSource = nullptr;
			List<Courses^>^ cc = Tstd->AssignedCourse;
			dataGridView2->DataSource = cc;
			dataGridView2->Refresh();


			dataGridView3->AutoGenerateColumns = true;
			dataGridView3->DataSource = nullptr;
			List<Attandence^>^ ccc = Tstd->AttandenceData;
			dataGridView3->DataSource = ccc;
			dataGridView3->Refresh();


			dataGridView4->AutoGenerateColumns = true;
			dataGridView4->DataSource = nullptr;
			List<Marks^>^ cccc = Tstd->MarksData;
			dataGridView4->DataSource = cccc;
			dataGridView4->Refresh();

		}
		catch (Exception^) {}
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView2->SelectedRows->Count == 1) {
			Courses^ Tstd = (Courses^)dataGridView2->SelectedRows[0]->DataBoundItem;
			Tstd->Status = "Unregisted";
			StudentManager::manager->Save();
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView2->SelectedRows->Count == 1) {
			Courses^ Tstd = (Courses^)dataGridView2->SelectedRows[0]->DataBoundItem;
			Tstd->Status = "Withdraw";
			StudentManager::manager->Save();
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView3->SelectedRows->Count == 1) {
			Attandence^ Tstd = (Attandence^)dataGridView3->SelectedRows[0]->DataBoundItem;
			(gcnew AddAttandence(Tstd))->ShowDialog();
		}
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	if (dataGridView3->SelectedRows->Count == 1) {
		Marks^ Tstd = (Marks^)dataGridView3->SelectedRows[0]->DataBoundItem;
		(gcnew frmMarking(Tstd))->ShowDialog();
	}

}
private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
