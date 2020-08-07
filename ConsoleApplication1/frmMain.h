#pragma once
#include "frmAddStudent.h"
#include "frmAddFacultyMember.h"
#include"frmAddCourse.h"
#include"frmAddClass.h"
#include "frmAddBatch.h"
#include "frmAddDepartment.h"
#include "frmViewStudent.h"
#include "frmViewCourses.h"
#include "frmViewTeacher.h"
#include "frmViewHod.h"
#include"frmViewITManager.h"
#include "frmViewClasses.h"
#include "frmViewBatch.h"
#include "frmViewDepartment.h"
#include "frmAssignCourseToTeacher.h"
#include "frmRegisterCourse.h"
#include "AddAttandence.h"
#include "frmMarking.h"
//#include "frmLogIn.h"
#include "frmChangePassword.h"

namespace NEON {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ facultyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addFacultyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ coursesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addCourseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ classesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addClassToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ batchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addBatchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ departmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addDepartmentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewStudentToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewCoursesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewFacultyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewHODsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewITManagersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewClassesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewBatchesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewBatchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ assignCourseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ teacherToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ studentToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ attandanceToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ markingToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->facultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addFacultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewFacultyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewHODsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewITManagersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewStudentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->attandanceToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->markingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->coursesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addCourseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewCoursesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->assignCourseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->teacherToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->studentToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->classesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addClassToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewClassesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->batchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addBatchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewBatchesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->departmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addDepartmentToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewBatchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->facultyToolStripMenuItem,
					this->studentToolStripMenuItem, this->coursesToolStripMenuItem, this->classesToolStripMenuItem, this->batchToolStripMenuItem,
					this->departmentToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1018, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// facultyToolStripMenuItem
			// 
			this->facultyToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->addFacultyToolStripMenuItem,
					this->viewFacultyToolStripMenuItem, this->viewHODsToolStripMenuItem, this->viewITManagersToolStripMenuItem
			});
			this->facultyToolStripMenuItem->Name = L"facultyToolStripMenuItem";
			this->facultyToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->facultyToolStripMenuItem->Text = L"Faculty";
			// 
			// addFacultyToolStripMenuItem
			// 
			this->addFacultyToolStripMenuItem->Name = L"addFacultyToolStripMenuItem";
			this->addFacultyToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->addFacultyToolStripMenuItem->Text = L"Add Faculty";
			this->addFacultyToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::addFacultyToolStripMenuItem_Click);
			// 
			// viewFacultyToolStripMenuItem
			// 
			this->viewFacultyToolStripMenuItem->Name = L"viewFacultyToolStripMenuItem";
			this->viewFacultyToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->viewFacultyToolStripMenuItem->Text = L"View Teachers";
			this->viewFacultyToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::viewFacultyToolStripMenuItem_Click);
			// 
			// viewHODsToolStripMenuItem
			// 
			this->viewHODsToolStripMenuItem->Name = L"viewHODsToolStripMenuItem";
			this->viewHODsToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->viewHODsToolStripMenuItem->Text = L"View HODs";
			this->viewHODsToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::viewHODsToolStripMenuItem_Click);
			// 
			// viewITManagersToolStripMenuItem
			// 
			this->viewITManagersToolStripMenuItem->Name = L"viewITManagersToolStripMenuItem";
			this->viewITManagersToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->viewITManagersToolStripMenuItem->Text = L"View IT Managers";
			this->viewITManagersToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::viewITManagersToolStripMenuItem_Click);
			// 
			// studentToolStripMenuItem
			// 
			this->studentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->addStudentToolStripMenuItem,
					this->viewStudentToolStripMenuItem, this->attandanceToolStripMenuItem, this->markingToolStripMenuItem
			});
			this->studentToolStripMenuItem->Name = L"studentToolStripMenuItem";
			this->studentToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->studentToolStripMenuItem->Text = L"Students";
			this->studentToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::studentToolStripMenuItem_Click);
			// 
			// addStudentToolStripMenuItem
			// 
			this->addStudentToolStripMenuItem->Name = L"addStudentToolStripMenuItem";
			this->addStudentToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->addStudentToolStripMenuItem->Text = L"Add Student";
			this->addStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::addStudentToolStripMenuItem_Click);
			// 
			// viewStudentToolStripMenuItem
			// 
			this->viewStudentToolStripMenuItem->Name = L"viewStudentToolStripMenuItem";
			this->viewStudentToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->viewStudentToolStripMenuItem->Text = L"View Student";
			this->viewStudentToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::viewStudentToolStripMenuItem_Click);
			// 
			// attandanceToolStripMenuItem
			// 
			this->attandanceToolStripMenuItem->Name = L"attandanceToolStripMenuItem";
			this->attandanceToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->attandanceToolStripMenuItem->Text = L"Attandance";
			this->attandanceToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::attandanceToolStripMenuItem_Click);
			// 
			// markingToolStripMenuItem
			// 
			this->markingToolStripMenuItem->Name = L"markingToolStripMenuItem";
			this->markingToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->markingToolStripMenuItem->Text = L"Marking";
			this->markingToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::markingToolStripMenuItem_Click);
			// 
			// coursesToolStripMenuItem
			// 
			this->coursesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->addCourseToolStripMenuItem,
					this->viewCoursesToolStripMenuItem, this->assignCourseToolStripMenuItem
			});
			this->coursesToolStripMenuItem->Name = L"coursesToolStripMenuItem";
			this->coursesToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->coursesToolStripMenuItem->Text = L"Courses";
			// 
			// addCourseToolStripMenuItem
			// 
			this->addCourseToolStripMenuItem->Name = L"addCourseToolStripMenuItem";
			this->addCourseToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->addCourseToolStripMenuItem->Text = L"Add Course";
			this->addCourseToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::addCourseToolStripMenuItem_Click);
			// 
			// viewCoursesToolStripMenuItem
			// 
			this->viewCoursesToolStripMenuItem->Name = L"viewCoursesToolStripMenuItem";
			this->viewCoursesToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->viewCoursesToolStripMenuItem->Text = L"View Courses";
			this->viewCoursesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::viewCoursesToolStripMenuItem_Click);
			// 
			// assignCourseToolStripMenuItem
			// 
			this->assignCourseToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->teacherToolStripMenuItem,
					this->studentToolStripMenuItem1
			});
			this->assignCourseToolStripMenuItem->Name = L"assignCourseToolStripMenuItem";
			this->assignCourseToolStripMenuItem->Size = System::Drawing::Size(149, 22);
			this->assignCourseToolStripMenuItem->Text = L"Assign Course";
			// 
			// teacherToolStripMenuItem
			// 
			this->teacherToolStripMenuItem->Name = L"teacherToolStripMenuItem";
			this->teacherToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->teacherToolStripMenuItem->Text = L"Teacher/HOD";
			this->teacherToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::teacherToolStripMenuItem_Click);
			// 
			// studentToolStripMenuItem1
			// 
			this->studentToolStripMenuItem1->Name = L"studentToolStripMenuItem1";
			this->studentToolStripMenuItem1->Size = System::Drawing::Size(145, 22);
			this->studentToolStripMenuItem1->Text = L"Student";
			this->studentToolStripMenuItem1->Click += gcnew System::EventHandler(this, &frmMain::studentToolStripMenuItem1_Click);
			// 
			// classesToolStripMenuItem
			// 
			this->classesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addClassToolStripMenuItem,
					this->viewClassesToolStripMenuItem
			});
			this->classesToolStripMenuItem->Name = L"classesToolStripMenuItem";
			this->classesToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->classesToolStripMenuItem->Text = L"Classes";
			// 
			// addClassToolStripMenuItem
			// 
			this->addClassToolStripMenuItem->Name = L"addClassToolStripMenuItem";
			this->addClassToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->addClassToolStripMenuItem->Text = L"Add Class";
			this->addClassToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::addClassToolStripMenuItem_Click);
			// 
			// viewClassesToolStripMenuItem
			// 
			this->viewClassesToolStripMenuItem->Name = L"viewClassesToolStripMenuItem";
			this->viewClassesToolStripMenuItem->Size = System::Drawing::Size(140, 22);
			this->viewClassesToolStripMenuItem->Text = L"View Classes";
			this->viewClassesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::viewClassesToolStripMenuItem_Click);
			// 
			// batchToolStripMenuItem
			// 
			this->batchToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addBatchToolStripMenuItem,
					this->viewBatchesToolStripMenuItem
			});
			this->batchToolStripMenuItem->Name = L"batchToolStripMenuItem";
			this->batchToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->batchToolStripMenuItem->Text = L"Batch";
			// 
			// addBatchToolStripMenuItem
			// 
			this->addBatchToolStripMenuItem->Name = L"addBatchToolStripMenuItem";
			this->addBatchToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->addBatchToolStripMenuItem->Text = L"Add Batch";
			this->addBatchToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::addBatchToolStripMenuItem_Click);
			// 
			// viewBatchesToolStripMenuItem
			// 
			this->viewBatchesToolStripMenuItem->Name = L"viewBatchesToolStripMenuItem";
			this->viewBatchesToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->viewBatchesToolStripMenuItem->Text = L"View Batches";
			this->viewBatchesToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::viewBatchesToolStripMenuItem_Click);
			// 
			// departmentToolStripMenuItem
			// 
			this->departmentToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->addDepartmentToolStripMenuItem,
					this->viewBatchToolStripMenuItem
			});
			this->departmentToolStripMenuItem->Name = L"departmentToolStripMenuItem";
			this->departmentToolStripMenuItem->Size = System::Drawing::Size(82, 20);
			this->departmentToolStripMenuItem->Text = L"Department";
			// 
			// addDepartmentToolStripMenuItem
			// 
			this->addDepartmentToolStripMenuItem->Name = L"addDepartmentToolStripMenuItem";
			this->addDepartmentToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->addDepartmentToolStripMenuItem->Text = L"Add Department";
			this->addDepartmentToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::addDepartmentToolStripMenuItem_Click);
			// 
			// viewBatchToolStripMenuItem
			// 
			this->viewBatchToolStripMenuItem->Name = L"viewBatchToolStripMenuItem";
			this->viewBatchToolStripMenuItem->Size = System::Drawing::Size(165, 22);
			this->viewBatchToolStripMenuItem->Text = L"View Department";
			this->viewBatchToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmMain::viewBatchToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(145, 419);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(654, 39);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Painfully Developed By Lawliet With ❤❤";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(943, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Log Out";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMain::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(835, 27);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 23);
			this->button2->TabIndex = 3;
			this->button2->Tag = L"";
			this->button2->Text = L"Change Password";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMain::button2_Click);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1018, 467);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmMain";
			this->Text = L"Master Page";
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addFacultyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmAddFacultyMember())->Show();
	}
	private: System::Void studentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void addStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmAddStudent())->Show();


	}
	private: System::Void addCourseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmAddCourse())->Show();

	}
	private: System::Void addClassToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmAddClass())->Show();

	}
	private: System::Void addBatchToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmAddBatch())->Show();
	}
	private: System::Void addDepartmentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmAddDepartment())->Show();
	}
	private: System::Void viewStudentToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmViewStudent())->Show();
	}
	private: System::Void viewCoursesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmViewCourses())->Show();

	}
	private: System::Void viewFacultyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmViewTeacher())->Show();
	}
	private: System::Void viewHODsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmViewHod())->Show();
	}
	private: System::Void viewITManagersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmViewITManager())->Show();
	}
	private: System::Void viewClassesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmViewClasses())->Show();
	}
	private: System::Void viewBatchesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmViewBatch())->Show();
	}
	private: System::Void viewBatchToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmViewDepartment())->Show();
	}
	private: System::Void teacherToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmAssignCourseToTeacher())->Show();

	}
	private: System::Void studentToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmRegisterCourse())->Show();
	}
	private: System::Void attandanceToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew AddAttandence())->Show();
	}
	private: System::Void markingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew frmMarking())->Show();
	}
	private: System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ map = gcnew Bitmap("BackgroundImage.jpg");
		BackgroundImage = map;

		if (User::Type->Equals("std")) {
		
			departmentToolStripMenuItem->Visible = false;
				batchToolStripMenuItem->Visible = false;
				classesToolStripMenuItem->Visible = false;
				viewCoursesToolStripMenuItem->Visible = false;
				addCourseToolStripMenuItem->Visible = false;
				teacherToolStripMenuItem->Visible = false;
				addStudentToolStripMenuItem->Visible = false;
				attandanceToolStripMenuItem->Visible = false;
				markingToolStripMenuItem->Visible = false;
				facultyToolStripMenuItem->Visible = false;
	
		
		
		
		}

		if (User::Type->Equals("Tec")) {
			/*facultyToolStripMenuItem->Visible = false;
			addCourseToolStripMenuItem->Visible = false;
			viewCoursesToolStripMenuItem->Visible = false;
			teacherToolStripMenuItem->Visible = false;
			classesToolStripMenuItem->Visible = false;*/
			departmentToolStripMenuItem->Visible = false;
			batchToolStripMenuItem->Visible = false;
			classesToolStripMenuItem->Visible = false;
			viewITManagersToolStripMenuItem->Visible = false;
				viewHODsToolStripMenuItem->Visible = false;
				addFacultyToolStripMenuItem->Visible = false;
				addStudentToolStripMenuItem->Visible = false;
		}


		if (User::Type->Equals("Hod")) {
			facultyToolStripMenuItem->Visible = false;
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		User::frm->Show();
		this->Close();
	/*	(gcnew frmLogIn())->Show();
		Close();*/
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	(gcnew frmChangePassword())->Show();

}

};
}