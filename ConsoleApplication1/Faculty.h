#pragma once
#include "Person.h"
#include "User.h"

namespace NEON {

	using namespace System;

	[Serializable]
	public ref class Faculty : public Person
	{
	public:
		Faculty() {}
	protected:
		property System::String^ Type { System::String^ get() { return _Type; } void set(System::String^ value) { _Type = value; } }
	private:
		System::String^ _Type;
	};
}

