#pragma once

namespace NEON {

	public ref class Department
	{
		System::String^ _name;

	public:
		Department() {
			_name = "";
		}
		Department(System::String^ value) {
			_name = value;
		}
		property System::String^ Name {System::String^ get() { return _name; }void set(System::String^ value) { _name = value; } }

		virtual System::String^ ToString()override {
			return _name;
		}
	
	};
}
