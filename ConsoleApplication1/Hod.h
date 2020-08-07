#pragma once
#include "Faculty.h"
#include "Courses.h"

namespace NEON {

	using namespace System::Collections::Generic;
	using namespace System::Xml::Serialization;

	[Serializable]
	public ref class HOD : public Faculty {

	private: 
		cli::array<Courses^>^ _assigned = gcnew	 cli::array<Courses^>(2);
		int TotalCount = 0;
	public:
		HOD() {
			Type = "HOD";
		}

		virtual System::String^ ToString() override {
			return Name + " | " + FName + " | " + Type;
		}

		[XmlIgnoreAttribute]
		property List<Courses^>^ AssignedCourse {
			List<Courses^>^ get() {
				List<Courses^>^ toReturn = gcnew List<Courses^>();
				if (_assigned == nullptr) return toReturn;
				for (int i = 0; i < _assigned->Length; i++) {
					if (_assigned[i] != nullptr) {
						toReturn->Add(_assigned[i]);
					}
				}
				return toReturn;
			}
		}

		property cli::array<Courses^>^ _AssignedCourse {
			cli::array<Courses^>^ get() {
				return _assigned;
			}

			void set(cli::array<Courses^>^ value) {
				_assigned = value;
			}
		}

		void AddCourse(Courses^ type) {
			if (_assigned == nullptr) {
				_assigned = gcnew  cli::array<Courses^>(2);
			}
			int index = FindEmptyIndex();
			if (TotalCount >= _assigned->Length) {
				cli::array<Courses^>^ data2 = gcnew  cli::array<Courses^>(_assigned->Length + 10);
				_assigned->CopyTo(data2, 0);
				index = TotalCount + 1;
				_assigned = data2;
			}
			_assigned[index] = type;
		}

		int FindEmptyIndex() {
			for (int i = 0; i < _assigned->Length; i++)
				if (_assigned[i] == nullptr)
					return i;
				else
					TotalCount++;
			return -1;
		}
	};
}


