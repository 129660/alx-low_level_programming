#include "main.h"
#include <stdio.h>

/**
 * main - checks the code for alx School students
 * 
 * Return: always zero
 */

int main(void)
{
char s1 [98] = "Hell";
char s2 [] = "World\n";
char *ptr;

printf("%s\n", s1);
printf("%s", s2);
ptr = _strcat(s1, s2);
printf("%s", s1);
printf("%s", s2);
printf("%s",ptr);
return (0);
}
