#pragma once
#include <iostream>
#include "Manager.h"
#include "Faculty.h"
#include "Teacher.h"
#include "HOD.h"

namespace NEON {
	ref class HodManager :
		public Manager<HOD^>
	{
	private:
		static HodManager^ _manger;
		HodManager(char* filename);
	public:
		HodManager() {
			//_manger = nullptr;

		}
		static property HodManager^ manager {
			HodManager^ get() {
				if (_manger == nullptr) {
					_manger = gcnew HodManager("HOD.xaml");
				}
				return _manger;
			}
		}
	};
}


