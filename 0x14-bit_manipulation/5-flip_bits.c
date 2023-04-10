#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @t: first number
 * @k: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int t, unsigned long int k)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = t ^ k;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
