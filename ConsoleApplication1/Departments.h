#pragma once
#include "Courses.h"
#include "Student.h"
#include "Teacher.h"

namespace NEON {
	ref class Departments
	{
		System::String^  _name;
		//Courses^ _course;
		////ITmanager ^IT;
		//Teacher^ _teacher;
		//Student^ _student;
	public:

		Departments() {}

		property System::String^ Name { System::String^ get(){ return _name; } void set(System::String^ value) { _name = value; } }
		/*property System::String^ { System::String^ get(){ return ; } void set(System::String^ value) { = value; } }
		property System::String^ { System::String^ get(){ return ; } void set(System::String^ value) { = value; } }
		property System::String^ { System::String^ get(){ return ; } void set(System::String^ value) { = value; } }
		property System::String^ { System::String^ get(){ return ; } void set(System::String^ value) { = value; } }*/

	};

}
