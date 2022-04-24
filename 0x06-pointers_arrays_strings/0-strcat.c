#include "main.h"

/**
 *  * _strcat - a function that concatenates two strings.
 *   * @dest: an input string
 *    * @src: an input string
 *     * Return: A pointer to the resulting string
    */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	
	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest)
}
