#pragma once
#include<vcclr.h>
#include <cstring>
#include < stdio.h >
#include < stdlib.h >
#include < iostream >
#include "std.h"
#include "Student.h"
#include "StudentManager.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;
	using namespace System::Xml::Serialization;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtStdName;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->txtStdName = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtStdName
			// 
			this->txtStdName->Location = System::Drawing::Point(364, 96);
			this->txtStdName->Name = L"txtStdName";
			this->txtStdName->Size = System::Drawing::Size(179, 20);
			this->txtStdName->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(468, 145);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(99, 215);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(915, 380);
			this->dataGridView1->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1150, 703);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtStdName);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

		pin_ptr <const wchar_t> pdest = PtrToStringChars(txtStdName->Text);
		wchar_t* stdname = (wchar_t*)malloc(txtStdName->Text->Length+1 );
		wcscpy_s(stdname, txtStdName->Text->Length+1, pdest);

		//Student^ std = gcnew Student;
		//std->Name = gcnew System::String(stdname);//stdname;
		//std->FName = "asdaswda";
		//std->Gender = "M";
		//std->Class = "1st";
		//std->Address = "askjudgh l;ashkdak jshgdas dglhkj";
		//StudentManager::manager->Add(std);
	
		//StudentManager::manager->Save();

		MessageBox::Show("ok");

		LoadDataToGrid();
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {	
		
		StudentManager::manager->Load();
		LoadDataToGrid();
		
	}

		   void LoadDataToGrid() {
			   dataGridView1->AutoGenerateColumns = true;
			   dataGridView1->DataSource = nullptr;
			   dataGridView1->DataSource = StudentManager::manager->Data;
			   dataGridView1->Refresh();
			   for (int i = 0; i <= dataGridView1->Columns->Count - 1; i++) {
				   dataGridView1->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
			   }
		   }
};

	

}
