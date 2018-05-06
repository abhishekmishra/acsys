#include <stdlib.h>
#include <wchar.h>
#include "acsys_utils.h"

/**
 * Util method for defensive copy of wchar string
 */
wchar_t* wcs_defcpy(const wchar_t* src) {
    wchar_t* dest = (wchar_t*) malloc(sizeof(wchar_t) * (wcslen(src) + 1));
    wcscpy(dest, src);
    return dest;
}