#pragma once
#include <iostream>

#include "Manager.h"
#include "Faculty.h"
#include "Teacher.h"
#include "ITManager.h"
#include "Courses.h"
#include "Classes.h"

namespace NEON {
	ref class ClassesManager :
		public Manager<Classes^>
	{
	private:
		static ClassesManager^ _manger;
		ClassesManager(char* filename);
	public:
		ClassesManager() {
			//_manger = nullptr;

		}
		static property ClassesManager^ manager {
			ClassesManager^ get() {
				if (_manger == nullptr) {
					_manger = gcnew ClassesManager("Classes.xaml");
				}
				return _manger;
			}
		}
	};

}






