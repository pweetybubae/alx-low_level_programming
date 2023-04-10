#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks if the endianess, whether big or little
 * Return: big return (0), Little return (1).
 */
int get_endianness(void)
{
	unsigned int h = 1;
	char *c = (char *) &h;

	return (*c);
}
