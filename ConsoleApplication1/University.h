#pragma once
namespace NEON {
	ref class University
	{
		System::String^ _name, ^_address;
		//Departments* _DEPT;

	public:
		University() {}

		property System::String^ Name    { System::String^ get() { return _name;    } void set(System::String^ a) { _name = a;    }}
		property System::String^ Address { System::String^ get() { return _address; } void set(System::String^ a) { _address = a; }}

	};
}

