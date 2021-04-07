/* 
 * str2int.h - a utility function to safely read one line of input
 * Safely read a line of input into `buf` (with room for `len` chars).
 *
 * David Kotz, April 2016, 2017, 2019, 2021
 */

#ifndef __STR2INT_H__
#define __STR2INT_H__

#include <stdbool.h>

/* str2int - read a command line input and parse as an integer.
 *
 * 
 * after reading the input if there are no other characters remaining then  * the input is a valid integer. 
 * If there are any other characters, as held by the nextchar variable, then the input is invalid. 
 * 
 *
 * sscanf handles the reading of the input 
 */

extern bool str2int(const char string[], int * number);

#endif // STR2INT


