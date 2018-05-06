#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <gmp.h>

#include "amt.h"
#include "acsys_utils.h"

currency_t* make_currency(const wchar_t* name, const wchar_t* code, \
		const wchar_t* symbol)
{

}

amt_t* make_amount_c(const char* num, currency_t* ccy);
amt_t* make_amount_i(const int x, currency_t* ccy);
