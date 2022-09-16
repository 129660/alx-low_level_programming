#include "main.h"

/** 
 * _isdigit - checks whether a charactaer is a digit or not
 * @c: tested character
 * Return: 1 if it is, 0 otherwise
 */

int_isdigit(it c)
{
	if ((c >= 48) && (c <= 57))
	{
		return(1);
	}

	return (0);
}

