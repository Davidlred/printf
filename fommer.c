#include "main.h"
/**
 * format_info - Sets value for specifier
 * @format: The string included in format
 * @list: Arguments in va_list
 * Return: The expected specifier
 */
format_info fetch_info(const char *format, va_list list)
{
	int i = 1;
	format_info info;

	initialize_info(&info);

	while (format[i])
	{
		if (flag_check(format[i]))
		{
			information(&info, format[i]);
			i++;
		}
		else if (length_checker(format[i]))
		{
			info.length_specifier = format[i];
			i++;
		}
		else if (is_digit(format[i]) || format[i] == '*')
		{
			if (format[i] == '*')
			{
				info.width_specifier = va_arg(list, int);
				i++;
				continue;
			}
			i = i + width_flag(&info, format, i);
		}
		else if (modifier_check(format[i]))
		{
			info.modifier = format[i];
			break;
		}
		else
		{
			i++;
		}
	}
	info.output = i;
	return (info);
}

/**
 * format_handler - main format function
 * @format: String to pass through
 * @list: va_list contents
 * @info: Specifier info
 * Return: characters printed
 */
int format_handler(const char *format, va_list list, format_info info)
{
	int (*action)(va_list list, format_info info);
	int length = 0;

	action = check_specifier(info.modifier);

	if (action)
	{
		length = length + action(list, info);
	}
	else
	{
		length = length + _putchar(*(--format));
	}
	return (length);
}

