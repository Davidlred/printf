#include <stdlib.h>
#include "main.h"
/**
 * _printf - function to print argument
 * @format: Strings included in format
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int output = 0;
	format_info info;

	if (!format)
		return (-1);

	va_start(list, format);

	while (*format)
	{
		if (*format == '%')
		{
			info = fetch_info(format, list);
			output = output + format_handler(format, list, info);
			format = format + info.output;
		}
		else
		{
			output = output +  _putchar(*format);
		}

		format++;
	}

	va_end(list);
	return (output);
}
