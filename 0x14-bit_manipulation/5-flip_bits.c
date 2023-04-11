#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @k: first number
 * @l: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int k, unsigned long int l)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = k ^ l;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
