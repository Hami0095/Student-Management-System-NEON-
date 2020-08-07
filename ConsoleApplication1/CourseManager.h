#pragma once
#include <iostream>
#include "Manager.h"
#include "Faculty.h"
#include "Teacher.h"
#include "ITManager.h"
#include "Courses.h"

namespace NEON {
	ref class CourseManager :
		public Manager<Courses^>
	{
	private:
		static CourseManager^ _manger;
		CourseManager(char* filename);
	public:
		CourseManager() {
			//_manger = nullptr;

		}
		static property CourseManager^ manager {
			CourseManager^ get() {
				if (_manger == nullptr) {
					_manger = gcnew CourseManager("Courses.xaml");
				}
				return _manger;
			}
		}
	};

}






