#include "main.h"

/**
 * _memcpy - A function that copies memory area
 *
 * @dest: Memory where the data is copied
 * @src: Memory where the data is stored
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
