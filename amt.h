#ifndef __ACSYS_AMT__
#define __ACSYS_AMT__

#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <gmp.h>

/*
 * This header file defines functions that deal with amounts.
 * Amounts being a very common type to be accessed across the system,
 * we will define an API which will be used across the accounts system.
 *
 * Each amount has a value (non-negative), and a currency.
 * A currency is also defined in this header file.
 */

typedef struct {
	wchar_t* name;
	wchar_t* code;
	wchar_t* symbol;
} currency_t;

typedef struct {
	currency_t* currency;
	mpq_t val;
} amt_t;

currency_t* make_currency(const wchar_t* name, const wchar_t* code, \
		const wchar_t* symbol);

amt_t* make_amount_c(const char* num, currency_t* ccy);
amt_t* make_amount_i(const int x, currency_t* ccy);

wchar_t* amount_str(amt_t* x);

#endif
