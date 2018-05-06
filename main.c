#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>
#include <wchar.h>

#include "amt.h"

int main(int argc, char** argv)
{
    wprintf(L"Running some amount tests...\n");

    currency_t* inr = make_currency(L"Indian Rupees", L"INR", L"Rs");
    amt_t* x = make_amount_i(100, inr);
    amt_t* y = make_amount_c("2.2@1", inr);
    wprintf(L"\n %ls \n", amount_str(x));
    wprintf(L"\n %ls \n", amount_str(y));
}