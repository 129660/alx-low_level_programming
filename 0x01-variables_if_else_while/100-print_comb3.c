#include <stdio.h>

/**
 *  main - Prints all possible combinations of two different digits,
 *  in ascending order, separated by a comma followed by a space.
 * 
 *  Return: Always 0
 */
int main(void)

{

	int i, j

	for (i = 0; i < 9; i++)

	{

		for (j = 1; j < 9; i++)

		{
			if (j > i)

			{

				putchar(i + '0');
				putchar(j + '0');

				if (i != 8)

				{

					putchar(',');

					putchar(' ');

				}

			}

		}

	}

	putchar('\n');

	Return (0);

}


