#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif
