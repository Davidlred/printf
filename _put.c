#include "main.h"
/**
 * _puts - returns a string of parameter
 * @s: The string value to print
 * Return: The number of characters.
 */
int _puts(char *s)
{
	int n = 0;

	while (s[n])
		_putchar(s[n++]);

	return (n);
}

