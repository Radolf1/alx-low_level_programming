#include "main.h"
/**
 * _strncpy - copies at most an input #
 * of bytes
 * @dest: the contain storing the string
 * @src: the source string
 * @n: the max number of bytes to copied from src
 * Return: true
 */
char *_strncat(char *dest, char *src, int n)
{
	int index =0, src_len = 0;
	while (src[index++])
		src_len++;
	for  (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (0);
}
