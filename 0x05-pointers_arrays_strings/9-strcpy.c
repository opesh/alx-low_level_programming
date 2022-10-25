#include "main.h"

/**
 * _strcpy - this code copies the string pointed to by src to dest
 * including the terminating null byte (\0)
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int num, p;

	num = 0;

	while (src[num] != '\0')
	{
		num++;
	}
	for (p = 0; p < num; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';
	return (dest);
}
