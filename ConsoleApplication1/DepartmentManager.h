#pragma once
#include <iostream>
#include "Manager.h"
#include "Faculty.h"
#include "Teacher.h"
#include "ITManager.h"
#include "Courses.h"
#include "Depart.h"

namespace NEON {
	ref class DepartmentManager :
		public Manager<Department^>
	{
	private:
		static DepartmentManager^ _manger;
		DepartmentManager(char* filename);
	public:
		DepartmentManager() {
			//_manger = nullptr;

		}
		static property DepartmentManager^ manager {
			DepartmentManager^ get() {
				if (_manger == nullptr) {
					_manger = gcnew DepartmentManager("Department.xaml");
				}
				return _manger;
			}
		}
	};
}






