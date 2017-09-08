/*********************************************************************
* Filename:   sha256.h
* Author:     Samuel Bachmann
* Copyright:
* Disclaimer: This code is presented "as is" without any guarantees.
* Details:    Defines the memset function e.g. for embedded platforms.
*********************************************************************/

#ifndef MEMSET_H
#define MEMSET_H

/*************************** HEADER FILES ***************************/
#include <string.h>

/*********************** FUNCTION DEFINITIONS ***********************/
void *memset(void *dst, int c, size_t n)
{
	if (n) {
		char *d = dst;

		do {
			*d++ = c;
		} while (--n);
	}
	return dst;
}

#endif //MEMSET_H
