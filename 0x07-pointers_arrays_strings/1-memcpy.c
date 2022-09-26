#include "main.h"

/**
 * _memcpy - fumction that copies a memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to the copied memory block
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
