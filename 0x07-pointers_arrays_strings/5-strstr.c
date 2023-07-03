#include "main.h"

/**
 * _strstr - Locates a substring
 *
 * @haystack: Pointer to the input string
 * @needle: Pointer to the substring to be located
 *
 * Return: Pointer to the first occurrence of the substring in the haystack,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (NULL);
}
