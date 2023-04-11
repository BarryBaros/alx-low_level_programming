#include <stdio.h>
#include "main.h"

/**
  * binary_to_uint - Converts a binary number to an unsigned int
  * @binary: The binary string to converts
  *
  * Return: The positive number converted from a binary
  */
unsigned int binary_to_uint(const char *binary)
{
int k;
unsigned int decimal_value = 0;

	if (binary == NULL)
		return (0);

	for (k = 0; binary[k]; k++)
	{
		if (binary[k] < '0' || binary[k] > '1')
			return (0);
		decimal_value = 2 * decimal_value + (binary[k] - '0');
	}

	return (decimal_value);
}
