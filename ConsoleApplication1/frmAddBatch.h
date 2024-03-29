#pragma once
#include "Batch.h"
#include "BatchManager.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmAddBatch
	/// </summary>
	public ref class frmAddBatch : public System::Windows::Forms::Form
	{
	private:Batch^ std;
	public:
		frmAddBatch(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		frmAddBatch(Batch^ std) : frmAddBatch()
		{
			if (std != nullptr) {
				this->std = std;
				BATCH->Text = std->Name;
				

			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmAddBatch()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ BATCH;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->BATCH = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 25);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Class Batch";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(168, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(66, 44);
			this->button2->TabIndex = 31;
			this->button2->Text = L"Close";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmAddBatch::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(240, 167);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(66, 44);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmAddBatch::button1_Click);
			// 
			// BATCH
			// 
			this->BATCH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BATCH->Location = System::Drawing::Point(16, 107);
			this->BATCH->Name = L"BATCH";
			this->BATCH->Size = System::Drawing::Size(290, 35);
			this->BATCH->TabIndex = 29;
			// 
			// frmAddBatch
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(344, 321);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->BATCH);
			this->Name = L"frmAddBatch";
			this->Text = L"frmAddBatch";
			this->Load += gcnew System::EventHandler(this, &frmAddBatch::frmAddBatch_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (std == nullptr) {
			SaveFile();
		}
		else {
			EditFile();
		}
	}
	private: System::Void SaveFile() {
		try {

			Batch^ _f = gcnew Batch();


			_f->Name = BATCH->Text;




			BatchManager::manager->Load();
			BatchManager::manager->Add(_f);
			BatchManager::manager->Save();


			MessageBox::Show("Saved Sucessfully");

		}


		catch (Exception^) {
			MessageBox::Show("Error Occourd While Saving");
		}

	}
	private: System::Void EditFile() {
		try {
			std->Name = BATCH->Text;


			BatchManager::manager->Save();

			MessageBox::Show("Saved Sucessfully");
		}
		catch (Exception^) {
			MessageBox::Show("Error Occourd While Saving");
		}
	}

	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
private: System::Void frmAddBatch_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
