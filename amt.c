#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <gmp.h>

#include "amt.h"
#include "acsys_utils.h"

currency_t *make_currency(const wchar_t *name, const wchar_t *code,
						  const wchar_t *symbol)
{
	wchar_t *nm = wcs_defcpy(name);
	wchar_t *cd = wcs_defcpy(code);
	wchar_t *sym = wcs_defcpy(symbol);

	currency_t *ccy = (currency_t *)malloc(sizeof(currency_t));
	ccy->code = cd;
	ccy->name = nm;
	ccy->symbol = sym;
	return ccy;
}

amt_t *make_amount_c(const char *num, currency_t *ccy)
{
	amt_t *amt = (amt_t *)malloc(sizeof(amt_t));
	amt->currency = ccy;
	mpq_init(amt->val);

	mpf_t y;
	mpf_init2(y, 1024);

	mpf_set_str(y, num, 10);
	mpq_set_f(amt->val, y);

	mpf_clear(y);
	return amt;
}

amt_t *make_amount_i(const int x, currency_t *ccy)
{
	amt_t *amt = (amt_t *)malloc(sizeof(amt_t));
	amt->currency = ccy;
	mpq_init(amt->val);

	mpq_set_si(amt->val, x, 1);
	return amt;
}
