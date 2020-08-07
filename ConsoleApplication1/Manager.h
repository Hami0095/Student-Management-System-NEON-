#pragma once

#include "Serializer.h"


namespace NEON {

	using namespace System::Collections::Generic;


	generic<class T> ref class Manager
	{
	public:

		void Save();
		void Load();

		void Add(T type);
		void Remove(T type);

		property List<T>^ Data {
			List<T>^ get() {
				List<T>^ toReturn = gcnew List<T>();
				if (data == nullptr) return toReturn;
				for (int i = 0;i < data->Length;i++) {
					if (data[i] != nullptr) {
						toReturn->Add(data[i]);
					}
				}
				return toReturn;
			}
		}

	protected:
		property char* FileName {
			void set(char* value) {
				m_FileName = value;
			}
		}


	private:
		char* m_FileName;
		cli::array<T>^ data = gcnew  cli::array<T>(2);
		int TotalCount = 0;

		int FindEmptyIndex();
	};
}