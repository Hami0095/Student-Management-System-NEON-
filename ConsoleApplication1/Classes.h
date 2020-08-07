#pragma once
namespace NEON {

	using namespace System;

	[Serializable]
	public ref class Classes
	{
		System::String^ _name;

	public:
		Classes() {
			_name = nullptr;
		}
		Classes(System::String^ value) {
			_name = value;
		}
		property System::String^ Name {System::String^ get() { return _name; }void set(System::String^ value) { _name = value; } }
		
		virtual System::String^ ToString()override {
			return _name;
		}


	};
}