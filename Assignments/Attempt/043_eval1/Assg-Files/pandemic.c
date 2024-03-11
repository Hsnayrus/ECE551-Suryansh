#include "pandemic.h"

#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Step 1. */
country_t parseLine(char * line) {}

/* Step 2. */
void calcRunningAvg(unsigned * data, size_t n_days, double * avg) {}

/* Step 3. */
void calcCumulative(unsigned * data, size_t n_days, uint64_t pop,
                    double * cum) {}

/* Step 4. */
void printCountryWithMax(country_t * countries, size_t n_countries,
                         unsigned ** data, size_t n_days) {}