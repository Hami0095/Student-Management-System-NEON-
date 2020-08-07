#pragma once
#include "Manager.h"
#include "Student.h"

namespace NEON {

	ref class StudentManager :
		public Manager<Student^>
	{
	private:
		static StudentManager^ _manger;
		StudentManager(char* filename);
	public:
		static property StudentManager^ manager {
			StudentManager^ get() {
				if (_manger == nullptr) {
					_manger = gcnew StudentManager("student.xaml");
				}
				return _manger;
			}
		}
	};
}