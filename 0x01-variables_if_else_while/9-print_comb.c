#include <stdio.h>
/**
 *  *  *  *  *  *  *  *  * main - Entry point
 *   *   *   *   *   *   *   *   *
 *    *    *    *    *    *    *    *    * Return: Always 0 (Success)
     */
int main(void)
{
int x;

for (x = 0; x <= 10; x++)
{
	putchar(x);
	if (x =! '9')
	{
		putchar(0x2C);
		putchar(0x20);
	}
}
return (0);
}
