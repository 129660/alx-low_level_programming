#include "main.h"

/**
 * string toupper - changes all lower case letters of a string to uppercase 
 * #str: parameter
 * Return: returns a character
 */

char *string_toupper(char *_str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -=32;
	}

	return (str);
}
