#pragma once
#include "Depart.h"
#include "Courses.h"
#include "Batch.h"
#include "Classes.h"

namespace NEON {
	using namespace System;

	[Serializable]
	public ref class Attandence
	{

		Department^ _dept;
		System::String^ _semester;
		Batch^ _Batch;
		Classes^ _class;
		Courses^ _Course;
		System::DateTime _date;

	public:
		Attandence() {}

		property Classes^		 Classe {Classes^ get() { return _class; }void set(Classes^ a) { _class = a; }}
		property Courses^		 Course {Courses^ get() { return _Course; }void set(Courses^ a) { _Course = a; }}
		property Batch^ batch {Batch^ get() { return _Batch; }void set(Batch^ a) { _Batch = a; }}
		property Department^     department {Department^ get() { return _dept; }void set(Department^ a) { _dept = a; }}
		property System::DateTime	 Date {System::DateTime get() { return _date; }void set(System::DateTime a) { _date = a; }}
		property System::String^ Semester {System::String^ get() { return _semester; }void set(System::String^ a) { _semester = a; }}

	};
}

