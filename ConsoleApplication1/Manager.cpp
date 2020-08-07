#include "pch.h"
#include "Manager.h"
namespace NEON {

	generic<class T> void Manager<T>::Save() {
		Serializer::WriteToFile(m_FileName, data);
	}
	generic<class T> void Manager<T>::Load() {
		data = Serializer::ReadFromFile<cli::array<T>^>(m_FileName, data->GetType());
	}

	generic<class T> void Manager<T>::Add(T type) {
		if (data == nullptr) {
			data = gcnew  cli::array<T>(2);
		}
		int index = FindEmptyIndex();
		if (TotalCount >= data->Length) {
			cli::array<T>^ data2 = gcnew  cli::array<T>(data->Length + 10);
			data->CopyTo(data2, 0);
			index = TotalCount + 1;
			data = data2;
		}
		data[index] = type;
	}

	generic<class T> int Manager<T>::FindEmptyIndex() {
		for (int i = 0;i < data->Length;i++)
			if (data[i] == nullptr)
				return i;
			else
				TotalCount++;
		return -1;
	}

	generic<class T> void Manager<T>::Remove(T type) {		
		List<T>^ tt = Data;
		tt->Remove(type);
		data = tt->ToArray();
	}

}