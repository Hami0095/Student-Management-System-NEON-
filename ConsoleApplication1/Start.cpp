#include "pch.h"
#include<iostream>
#include "MyForm.h"
#include "frmMain.h"
#include "frmLogIn.h"
//namespace NEON {

    using namespace System;
    using namespace System::Windows::Forms;

    [STAThreadAttribute]
    int main(array<System::String^>^ args)
    {

        Application::EnableVisualStyles();
        Application::SetCompatibleTextRenderingDefault(false);
        NEON::frmLogIn fm;
        Application::Run(% fm);

        //wchar_t t = L'a';
       // cli::array<wchar_t>^ bt = gcnew cli::array<wchar_t>(30);
       //// bt = L"dsfsdfsd";
       // __wchar_t* h;
       // int r = 50;
       // h = new __wchar_t[r];
       // std::wcin.getline(h,r);
       // std::wcout << h<<std::endl;
       // __wchar_t *g = L"fdssdfsdfsdf";
       // std::wcout << g;
       /* Console::WriteLine("ksdjfgkjs adhg fkjashgd rfkjhas gdfkjj asdf");
        Console::Read();*/
        return 0;

    }
//}