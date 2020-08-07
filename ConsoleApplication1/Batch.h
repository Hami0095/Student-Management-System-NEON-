#pragma once
namespace NEON {
	public ref class Batch
	{
	private:
		System::String^ _name;

	public:
		Batch() {
			_name = nullptr;
		}
		Batch(System::String^ a) {
			_name = a;
		}

		property System::String^ Name {System::String^ get() { return _name; }void set(System::String^ value) { _name = value; } }


		virtual System::String^ ToString()override {
			return _name;
		}

	};

}