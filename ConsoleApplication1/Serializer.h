#pragma once

namespace NEON {

	using namespace System;
	using namespace System::IO;
	using namespace System::Xml;
	using namespace System::Xml::Serialization;
	using namespace System::Windows::Forms;

	public ref class Serializer {
	public:
		generic<class T> static void WriteToFile(char* FileName, T toSerialize);
		generic<class T> static T ReadFromFile(char* FileName, System::Type^ type);
	};
}