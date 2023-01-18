#include <stdio.h>

#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: string containing the name
 * @f: pointer to function
 */

void print_name(char *Name, void (*f)(char *))

{

	if (f != NULL)
	{
		(f) (Name);
	}
}
