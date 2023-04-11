#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @num: number to print in binary
*/
void print_binary(unsigned long int num)
{
	int k, count = 0;
	unsigned long int current_bit;

	for (k = 63; k >= 0; k--)
	{
		current_bit = num >> k;

		if (current_bit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}

	if (!count)
		_putchar('0');
}
