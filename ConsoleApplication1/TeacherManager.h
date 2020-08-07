#pragma once
#include <iostream>
#include "Manager.h"
#include "Faculty.h"
#include "Teacher.h"

namespace NEON {
    ref class TeacherManager :
        public Manager<Teacher^>
    {
	private:
		static TeacherManager^ _manger;
		TeacherManager(char* filename);
	public:
		TeacherManager() {
			//_manger = nullptr;

		}
		static property TeacherManager^ manager {
			TeacherManager^ get() {
				if (_manger == nullptr) {
					_manger = gcnew TeacherManager("Teacher.xaml");
				}
				return _manger;
			}
		}
    };
}

