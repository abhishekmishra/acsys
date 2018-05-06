#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

#include "amt.h"

int main(int argc, char** argv)
{
    printf("Running some amount tests...");

    currency_t* inr = make_currency(L"Indian Rupees", L"INR", L"Rs");
    amt_t* x = make_amount_i(100, inr);
    mpq_out_str(stdout, 10, x->val);
}