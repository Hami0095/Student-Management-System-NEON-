#pragma once
#pragma once
#include "Depart.h"
#include "Courses.h"
#include "Batch.h"
#include "Classes.h"

namespace NEON {
	using namespace System;

	[Serializable]
	public ref class Marks
	{

		Department^ _dept;
		System::String^ _semester;
		Batch^ _Batch;
		Classes^ _class;
		Courses^ _Course;
		System::Decimal _Total;
		System::Decimal _Obtained;
		System::String^ _Type;

	public:
		Marks() {}

		property Classes^ Classe {Classes^ get() { return _class; }void set(Classes^ a) { _class = a; }}
		property Courses^ Course {Courses^ get() { return _Course; }void set(Courses^ a) { _Course = a; }}
		property Batch^ batch {Batch^ get() { return _Batch; }void set(Batch^ a) { _Batch = a; }}
		property Department^ department {Department^ get() { return _dept; }void set(Department^ a) { _dept = a; }}
		property System::String^ Semester {System::String^ get() { return _semester; }void set(System::String^ a) { _semester = a; }}
		property System::String^ Type {System::String^ get() { return _Type; }void set(System::String^ a) { _Type = a; }}
		property System::Decimal Total {System::Decimal get() { return _Total; }void set(System::Decimal a) { _Total = a; }}
		property System::Decimal Obtained {System::Decimal get() { return _Obtained; }void set(System::Decimal a) { _Obtained = a; }}

	};
}

