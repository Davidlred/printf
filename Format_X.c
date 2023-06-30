#include "main.h"
/**
 * format_X - handles the X specifier
 * @list: list of argu
 * @info: value of info
 * Return: Void
 */
int format_X(va_list list, format_info info)
{
	int counter = 0;
	unsigned long int k;
	int length = 0;

	if (info.length_specifier && info.length_specifier == 'l')
		k = va_arg(list, unsigned long int);
	else
		k = va_arg(list, unsigned int);

	if (info.alt && k > 0)
		length = length + 2;
	if (info.width_specifier)
	{
		length = length + _strlen(k, 16);
		if (length < info.width_specifier)
		{
			length = info.width_specifier - length;
			counter = counter + length;
			space_printer(length);
		}
	}

	if (info.alt && k > 0)
		counter = counter + _puts("0X");
	convert_hex(k, 0, &counter);
	return (counter);
}
