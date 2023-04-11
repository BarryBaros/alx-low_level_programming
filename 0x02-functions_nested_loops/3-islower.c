#include "main.h"

/**
 * _islower - Writes the character c to stdout
 * @c: The character to print
 * Retrun: 1 for lowercase, otherwise, return 0
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
		return (0);
}
