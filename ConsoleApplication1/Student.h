#pragma once
#include "Person.h"
#include "User.h"
#include "Classes.h"
#include "Batch.h"
#include"Depart.h"
#include "Courses.h"
#include "Attandence.h"
#include "Marks.h"

namespace NEON {

	using namespace System;
	using namespace System::Collections::Generic;
	using namespace System::Xml::Serialization;

	[Serializable]
	public ref class Student : Person {




	public:
		Student() {}
		property Classes^ Class {Classes^ get() { return _class; }void set(Classes^ value) { _class = value; } }

		property Batch^ Baatch { Batch^ get() { return _Batch; } void set(Batch^ value) { _Batch = value; } }
		property Department^ Depart { Department^ get() { return _Dept; } void set(Department^ value) { _Dept = value; } }
		property System::String^ RollNo { System::String^ get() { return _RollNo; } void set(System::String^ value) { _RollNo = value; } }

		virtual System::String^ ToString() override {
			return RollNo +" | " +  Name + " | " + FName + " | ";
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

		int FindEmptyIndex2() {
			for (int i = 0; i < _Attandence->Length; i++)
				if (_Attandence[i] == nullptr)
					return i;
				else
					TotalCount++;
			return -1;
		}

		int FindEmptyIndex3() {
			for (int i = 0; i < _Marks->Length; i++)
				if (_Marks[i] == nullptr)
					return i;
				else
					TotalCount++;
			return -1;
		}

		[XmlIgnoreAttribute]
		property List<Attandence^>^ AttandenceData {
			List<Attandence^>^ get() {
				List<Attandence^>^ toReturn = gcnew List<Attandence^>();
				if (_Attandence == nullptr) return toReturn;
				for (int i = 0; i < _Attandence->Length; i++) {
					if (_Attandence[i] != nullptr) {
						toReturn->Add(_Attandence[i]);
					}
				}
				return toReturn;
			}
		}

		property cli::array<Attandence^>^ _AttandenceData {
			cli::array<Attandence^>^ get() {
				return _Attandence;
			}

			void set(cli::array<Attandence^>^ value) {
				_Attandence = value;
			}
		}


		void AddAttandence(Attandence^ type) {
			if (_Attandence == nullptr) {
				_Attandence = gcnew  cli::array<Attandence^>(2);
			}
			int index = FindEmptyIndex2();
			if (TotalCount >= _Attandence->Length) {
				cli::array<Attandence^>^ data2 = gcnew  cli::array<Attandence^>(_Attandence->Length + 10);
				_Attandence->CopyTo(data2, 0);
				index = TotalCount + 1;
				_Attandence = data2;
			}
			_Attandence[index] = type;
		}


		[XmlIgnoreAttribute]
		property List<Marks^>^ MarksData {
			List<Marks^>^ get() {
				List<Marks^>^ toReturn = gcnew List<Marks^>();
				if (_Marks == nullptr) return toReturn;
				for (int i = 0; i < _Marks->Length; i++) {
					if (_Marks[i] != nullptr) {
						toReturn->Add(_Marks[i]);
					}
				}
				return toReturn;
			}
		}

		property cli::array<Marks^>^ _MarksData {
			cli::array<Marks^>^ get() {
				return _Marks;
			}

			void set(cli::array<Marks^>^ value) {
				_Marks = value;
			}
		}


		void AddMarks(Marks^ type) {
			if (_Marks == nullptr) {
				_Marks = gcnew  cli::array<Marks^>(2);
			}
			int index = FindEmptyIndex2();
			if (TotalCount >= _Marks->Length) {
				cli::array<Marks^>^ data2 = gcnew  cli::array<Marks^>(_Marks->Length + 10);
				_Marks->CopyTo(data2, 0);
				index = TotalCount + 1;
				_Marks = data2;
			}
			_Marks[index] = type;
		}
		
	private:
		Classes^ _class;
		System::String^ _RollNo;
		Batch^ _Batch;
		System::String^ m; 
		Department^ _Dept;
		cli::array<Courses^>^ _assigned = gcnew	 cli::array<Courses^>(2);
		cli::array<Attandence^>^ _Attandence = gcnew cli::array<Attandence^>(2);
		cli::array<Marks^>^ _Marks = gcnew	 cli::array<Marks^>(2);
		int TotalCount = 0;
	};
}

