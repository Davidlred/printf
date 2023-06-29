#include <unistd.h>
/**
 * _putchar - prints character to standard output
 * @c: The parameter to print
 * Return: On success 1 and -1 for error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
