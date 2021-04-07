/*
 *
 * str2int - a function that converts an inputted argument into an integer.
 *
 *
 *David F Kotz, April 2021
 */


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "str2int.h"

bool str2int(const char string[], int * number)
{
  // The following is one of my favorite tricks.
  // We use sscanf() to parse a number, expecting there to be no following
  // character ... but if there is, the input is invalid.
  // For example, 1234x will be invalid, as would 12.34 or just x.
  char nextchar;
  return (sscanf(string, "%d%c", number, &nextchar) == 1);
}
