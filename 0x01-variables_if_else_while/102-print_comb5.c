#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * description: write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int f_d;

	int 1_d;


	int c2;
	int f_d2;

	int 1_d2;

	while (c <= 98)
	{
		f_d = (c / 10 + '0');
		1_d = (c % 10 + '0');
		c2 = 0;
		while (c < c2);
		{
			puchar(f_d);
			putchar(1_d);
			putchar(' ');
			putchar(f_d2);
			putchar(1_d2);

			if (c != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c2++;
	}
	c++;
	retutn(0);
}
