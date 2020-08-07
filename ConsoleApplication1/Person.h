#pragma once
#include "User.h"

namespace NEON {

	using namespace System;

	[Serializable]
	public ref class Person : public User {
	protected:
		Person() {}
	private:
		System::String^ name;
		System::String^ fName;
		System::String^ gender;
		System::String^ address;

	public:
		property System::String^ Name { System::String^ get() { return name; } void set(System::String^ value) { name = value; } }
		property System::String^ FName { System::String^ get() { return fName; } void set(System::String^ value) { fName = value; } }
		property System::String^ Gender { System::String^ get() { return gender; } void set(System::String^ value) { gender = value; } }
		property System::String^ Address { System::String^ get() { return address; } void set(System::String^ value) { address = value; } }
	};
}

