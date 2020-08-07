#pragma once
#include <iostream>

#include "Manager.h"
#include "Faculty.h"
#include "Teacher.h"
#include "ITManager.h"
#include "Courses.h"
#include "Classes.h"
#include"Batch.h"

namespace NEON {
	ref class BatchManager :
		public Manager<Batch^>
	{
	private:
		static BatchManager^ _manger;
		BatchManager(char* filename);
	public:
		BatchManager() {
			//_manger = nullptr;

		}
		static property BatchManager^ manager {
			BatchManager^ get() {
				if (_manger == nullptr) {
					_manger = gcnew BatchManager("Batch.xaml");
				}
				return _manger;
			}
		}
	};

}






