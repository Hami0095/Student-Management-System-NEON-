#include "pch.h"
#include "Serializer.h"

namespace NEON {

	using namespace System;

	generic<class T>  void Serializer::WriteToFile(char* FileName, T toSerialize) {

		XmlWriter^ writer;
		try {
			System::IO::File::Delete(gcnew System::String(FileName));

			XmlWriterSettings^ settings = gcnew XmlWriterSettings();
			settings->Indent = true;
			writer = XmlWriter::Create(gcnew System::String(FileName), settings);
			XmlSerializer^ serializer = gcnew XmlSerializer(toSerialize->GetType());
			serializer->Serialize(writer, toSerialize);
		}
		catch (Exception^ e) {
			MessageBox::Show("Error Occourd While Serializing");
		}
		finally
		{
			if(writer != nullptr)
			writer->Close();
		}
	}


	generic<class T> T Serializer::ReadFromFile(char* FileName, System::Type^ type) {
		T t;

		if (!System::IO::File::Exists(gcnew System::String(FileName))) {
			return t;
		}
		TextReader^ reader;
		try {
			XmlSerializer^ ser = gcnew XmlSerializer(type);
			reader = gcnew StreamReader(gcnew System::String(FileName));
			t = (T)ser->Deserialize(reader);
			
		}
		catch (Exception^ r) {
			MessageBox::Show("Error Occourd While DeSerializing");
		}
		finally {
			if (reader != nullptr)
				reader->Close();
		}
		return t;
	}
}