#pragma once
#include <iostream>
#include "Manager.h"
#include "Faculty.h"
#include "Teacher.h"
#include "ITManager.h"

namespace NEON {
	ref class ITManagerManager :
			public Manager<ITManager^>
	{
		private:
			static ITManagerManager^ _manger;
			ITManagerManager(char* filename);
		public:
			ITManagerManager() {
				//_manger = nullptr;

			}
			static property ITManagerManager^ manager {
				ITManagerManager^ get() {
					if (_manger == nullptr) {
						_manger = gcnew ITManagerManager("ITManager.xaml");
					}
					return _manger;
				}
			}
	};

}






