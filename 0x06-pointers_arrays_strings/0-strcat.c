#include "main.h"
#include <stdioh>

/**
 * strcat - function that concatenates two strings
 * @dest:poiner to destination input
 * @src: pointer to source input
 *
 * Return: pointer to reasulting string @dest
 */

char *_strcat(char *dest, char *src)
{
int c, c2;
/* find the size of thr dest array*/
while (dest[c])
c++
/* iterate through each src aray value without the null byte */
for ( c2 = 0; src [c2] ;c2++)
/* append src[c2] to dest [c] while overwriting the null byte is dest */
dest [c++] = src[c2];
return (dest);
}
