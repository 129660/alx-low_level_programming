#include <stdio.h>
/**
 * main possible combination of two digit
 * numbers
 *
 * Return: return to zero at the ednd
 */
int main(void)
{

	int i , p;

	for (i = 0; i < 100; i++)
	{

		for (p = 0; p < 100; p++)
		{

			if (p > i)
			{

				putchar ((i / 10) + '0');
				putchar ((i % 10) + '0');
				putchar (' ');
				putchar ((p / 10) + '0');
				if (i != 98)

				{

					putchar(',');
					putchar(' '); 
				}
			}
		}
	}
	putchar('\n')
	return (0);

}
