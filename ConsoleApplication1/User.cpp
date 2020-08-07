#include "pch.h"
#include "User.h"
#include<vcclr.h>
#include <cstring>
#include < stdio.h >
#include < stdlib.h >
#include "HelperClass.h"

namespace NEON {
    bool User::PasswordVarify(wchar_t* password)
    {

        pin_ptr <const wchar_t> pdest = PtrToStringChars(_Password);
        wchar_t* charPassword = (wchar_t*)malloc(_Password->Length + 1);
        wcscpy_s(charPassword, _Password->Length + 1, pdest);
        if (HelperClass::CharCompare(password, charPassword)) {
            return true;
        }
        return false;
    }
}