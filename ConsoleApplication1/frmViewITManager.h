#pragma once
#include"ITManager.h"
#include "frmViewITManager.h"
#include"ITManagerManager.h"
#include "frmAddFacultyMember.h"
namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmViewITManager
	/// </summary>
	public ref class frmViewITManager : public System::Windows::Forms::Form
	{
	public:
		frmViewITManager(void)
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
		~frmViewITManager()
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(485, 34);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 54);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Refresh";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmViewITManager::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(643, 34);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 54);
			this->button2->TabIndex = 36;
			this->button2->Text = L"Edit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmViewITManager::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(801, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 54);
			this->button1->TabIndex = 35;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmViewITManager::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 109);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(978, 410);
			this->dataGridView1->TabIndex = 34;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(327, 34);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(152, 54);
			this->button4->TabIndex = 39;
			this->button4->Text = L"Delete";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmViewITManager::button4_Click);
			// 
			// frmViewITManager
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 519);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"frmViewITManager";
			this->Text = L"frmViewITManager";
			this->Load += gcnew System::EventHandler(this, &frmViewITManager::frmViewITManager_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		LoadData();
	}
			private: System::Void LoadData() {
				
				dataGridView1->AutoGenerateColumns = true;
				dataGridView1->DataSource = nullptr;
				dataGridView1->DataSource = ITManagerManager::manager->Data;
				dataGridView1->Refresh();
				for (int i = 0; i <= dataGridView1->Columns->Count - 1; i++) {
					dataGridView1->Columns[i]->AutoSizeMode = DataGridViewAutoSizeColumnMode::Fill;
				}
			}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();

}
 
private: System::Void IEdit() {
	try {
		ITManager^ Tstd = (ITManager^)dataGridView1->SelectedRows[0]->DataBoundItem;
		(gcnew frmAddFacultyMember(Tstd))->ShowDialog();
		LoadData();
	}
	catch (Exception^)
	{
		MessageBox::Show("First Select The Student.");
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		IEdit();
}
private: System::Void frmViewITManager_Load(System::Object^ sender, System::EventArgs^ e) {
	LoadData();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		ITManager^ std = (ITManager^)dataGridView1->SelectedRows[0]->DataBoundItem;
		ITManagerManager::manager->manager->Remove(std);
		ITManagerManager::manager->Save();
	}
	catch (Exception^)
	{
		MessageBox::Show("First Select The IT Manager.");
	}
}
};
}
