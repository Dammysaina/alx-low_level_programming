#include "main.h"

/**
 *  * _isdigit - A function that checks for a digit (0 through 9).
 *   * @c: An input integer
 *    * Return: 1 if c is a digit or 0 otherwise 
 */
int _isdigit(int n)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		if (n == i)
		{
			return (1);
		}
	}
	return (0);
}
