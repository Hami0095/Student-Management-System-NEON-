#pragma once
#include "frmViewTeacher.h"
#include"TeacherManager.h"
#include"Teacher.h"
#include "HodManager.h"
#include "Hod.h"
#include"ITManager.h"
#include "ITManagerManager.h"
#include"frmAddFacultyMember.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmViewTeacher
	/// </summary>
	public ref class frmViewTeacher : public System::Windows::Forms::Form
	{
	public:
		frmViewTeacher(void)
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
		~frmViewTeacher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(426, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 54);
			this->button3->TabIndex = 33;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmViewTeacher::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(584, 10);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 54);
			this->button2->TabIndex = 32;
			this->button2->Text = L"Edit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmViewTeacher::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(742, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 54);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmViewTeacher::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 70);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(921, 410);
			this->dataGridView1->TabIndex = 30;
			this->dataGridView1->Click += gcnew System::EventHandler(this, &frmViewTeacher::dataGridView1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(929, 70);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(433, 410);
			this->dataGridView2->TabIndex = 34;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmViewTeacher::dataGridView2_CellContentClick);
			this->dataGridView2->Click += gcnew System::EventHandler(this, &frmViewTeacher::dataGridView2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
			this->label1->Location = System::Drawing::Point(922, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(191, 29);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Assign Courses";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(268, 10);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(152, 54);
			this->button4->TabIndex = 39;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmViewTeacher::button4_Click);
			// 
			// frmViewTeacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1369, 480);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmViewTeacher";
			this->Text = L"frmViewTeacher";
			this->Load += gcnew System::EventHandler(this, &frmViewTeacher::frmViewTeacher_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void frmViewTeacher_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadData();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	LoadData();
}

	   private: System::Void LoadData() {
		   
		   dataGridView1->AutoGenerateColumns = true;
		   dataGridView1->DataSource = nullptr;
		   dataGridView1->DataSource = TeacherManager::manager->Data;
		   dataGridView1->Refresh();
		   for (int i = 0; i <= dataGridView1->Columns->Count - 1; i++) {
			   dataGridView1->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		   }
	   }

			  private: System::Void TEdit() {
				  try {
					  Teacher^ Tstd = (Teacher^)dataGridView1->SelectedRows[0]->DataBoundItem;
					  (gcnew frmAddFacultyMember(Tstd))->ShowDialog();
					  LoadData();
				  }
				  catch (Exception^)
				  {
					  MessageBox::Show("First Select Teacher.");
				  }
			  }	 
				 
						


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	TEdit();

}
private: System::Void dataGridView1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		Teacher^ Tstd = (Teacher^)dataGridView1->SelectedRows[0]->DataBoundItem;
		dataGridView2->AutoGenerateColumns = true;
		dataGridView2->DataSource = nullptr;
		List<Courses^>^ cc = Tstd->AssignedCourse;
		dataGridView2->DataSource = cc;
		dataGridView2->Refresh();
		for (int i = 0; i <= dataGridView1->Columns->Count - 1; i++) {
			dataGridView2->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		}
	}
	catch (Exception^)
	{

	}

}
private: System::Void dataGridView2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		Teacher^ std = (Teacher^)dataGridView1->SelectedRows[0]->DataBoundItem;
	TeacherManager::manager->manager->Remove(std);
	TeacherManager::manager->Save();
	}
	catch (Exception^)
	{
		MessageBox::Show("First Select The Teacher.");
    }
}
};
}
