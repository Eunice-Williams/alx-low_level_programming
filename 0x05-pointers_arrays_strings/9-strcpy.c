#include "main.h"
/**
 * _strcpy - A function that copies the string pointed to by src
 * @dest: - char type string
 * @src: - char tpye string
 * Description: copy string pointed to 'src' to the buffer pointed to 'dest'
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];
	} while (src[x] != '\0');

	return (dest);
}
