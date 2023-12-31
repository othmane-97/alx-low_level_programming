#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @dest: Memory where the data will be stored
 * @src: Memory to be copied
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int r = 0;
unsigned int i = n;
for (; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}
