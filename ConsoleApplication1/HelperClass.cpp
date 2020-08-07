#include "pch.h"
#include "HelperClass.h"

namespace NEON {
    bool HelperClass::CharCompare(wchar_t* a, wchar_t* b) {
        for (int i = 0;a[i] != '\0';i++) {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }
}