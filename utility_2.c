#include "main.h"
/**
 *flag_check - Checks if is a flag
 * @c: the char
 * Return: success
 */
int flag_check(char c)
{
	return (c == ' ' || c == '#' || c == '+' || c == '-' || c == '0');
}

/**
 * length_checker - Checks for char
 * @c: Char to check
 * Return: sucess
 */
int length_checker(char c)
{
	return (c == 'l' || c == 'h');
}

/**
 * modifier_check -  a char is a modifier
 * @c: char storage
 * Return: 1 if true else 0
 */
int modifier_check(char c)
{
	int (*action)(va_list list, format_info info) = check_specifier(c);

	if (!action)
		return (0);
	return (1);
}

/**
 * space_printer - Peints the space char c times
 * @c: Number of times to print
 * Return: Void
 */
void space_printer(int c)
{
	int i;

	for (i = 0; i < c; i++)
		_putchar(' ');
}

/**
 * power - Returns the power of a number
 * @x: Base of digit
 * @y: Index of digit
 * Return: the indeces of a valur
 */
int power(int x, int y)
{
	int result = 1;
	int i;

	for (i = 0; i < y; i++)
	{
		result = result *  x;
	}
	return (result);
}
