#pragma once
#include "CourseManager.h"
#include "Courses.h"
#include "frmAddCourse.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmViewCourses
	/// </summary>
	public ref class frmViewCourses : public System::Windows::Forms::Form
	{
	public:
		frmViewCourses(void)
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
		~frmViewCourses()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 104);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1091, 410);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmViewCourses::dataGridView1_CellContentClick);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(601, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 54);
			this->button3->TabIndex = 29;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmViewCourses::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(759, 32);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 54);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Edit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmViewCourses::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(917, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 54);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmViewCourses::button1_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(443, 32);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(152, 54);
			this->button4->TabIndex = 39;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmViewCourses::button4_Click);
			// 
			// frmViewCourses
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 514);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmViewCourses";
			this->Text = L"frmViewCourses";
			this->Load += gcnew System::EventHandler(this, &frmViewCourses::frmViewCourses_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadData();
	}


	   private: System::Void LoadData() {
		   CourseManager::manager->Load();
		   dataGridView1->AutoGenerateColumns = true;
		   dataGridView1->DataSource = nullptr;
		   dataGridView1->DataSource = CourseManager::manager->Data;
		   dataGridView1->Refresh();
		   for (int i = 0; i <= dataGridView1->Columns->Count - 1; i++) {
			   dataGridView1->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
		   }
	   }

			  private: System::Void Edit() {
				  try {
					  Courses^ std = (Courses^)dataGridView1->SelectedRows[0]->DataBoundItem;
					  (gcnew frmAddCourse(std))->ShowDialog();
					  LoadData();
				  }
				  catch (Exception^)
				  {
					  MessageBox::Show("Oye Pagala Course tay Select kr laa!!" );
				  }
			  }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Edit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void frmViewCourses_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadData();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		Courses^ std = (Courses^)dataGridView1->SelectedRows[0]->DataBoundItem;
		CourseManager::manager->manager->Remove(std);
		CourseManager::manager->Save();
	}
	catch (Exception^)
	{
		MessageBox::Show("First Select The Course.");
	}
}
};
}
