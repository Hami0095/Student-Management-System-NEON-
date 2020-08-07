#pragma once
#include <cstring>

using namespace System;
#include "Depart.h"
namespace NEON {
	[Serializable]
public ref class Courses
{
	System::String^ _code;
	System::Decimal _CRHrs;
	System::String^ _name;
	Department^ _dept;
	System::String^ _semesters;
	System::String^ _Status;
public:
	Courses() {
		_CRHrs = 0;
		_name = nullptr;
		_code = nullptr;
	}
	
	virtual System::String^ ToString() override {
		return Name;
	}
	property System::String^ Semester {System::String^ get() { return _semesters; }void set(System::String^ a) { _semesters = a; }}


	property System::Decimal Hours {System::Decimal get() {return _CRHrs;} void set(System::Decimal a) {_CRHrs = a;}}
	property System::String^ Name{System::String^ get() {return _name;}void set(System::String^ a) {_name = a;}}
	property System::String^ Code {System::String^ get() {return _code;}void set(System::String^ a) {_code = a;}}
	property Department^ department {Department^ get() { return _dept; }void set(Department^ a) { _dept = a; }}
	property System::String^ Status {System::String^ get() { return _Status; }void set(System::String^ a) { _Status = a; }}



};


}

