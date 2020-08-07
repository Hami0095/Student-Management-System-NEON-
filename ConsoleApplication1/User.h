#pragma once

namespace NEON {
	using namespace System;

	[Serializable]
	public ref class User
	{
		public:
			User() {}
			property System::String^ Email { System::String^ get() { return _Email; } void set(System::String^ value) { _Email = value; } }
			property System::String^ Password { void set(System::String^ value) { _Password = value; }  System::String^ get() { return _Password; } }

			bool PasswordVarify(wchar_t* password);
	public: static System::String^ Type;
	public: static System::Windows::Forms::Form^ frm;
	public: static User^ _user;

			
		private:
			System::String^ _Email;
			System::String^ _Password;
	};
}

