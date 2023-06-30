#include "main.h"

/**
 * format_s - Function to handle the s specifier
 * @list: Argument list
 * @info: Specifier info
 * Return: Void
 */
int format_s(va_list list, format_info info)
{
	char *v;
	int len = 0;
	int checker = 0;

	v = va_arg(list, char *);

	if (!v)
		return (_puts("(null)"));

	while (v[len])
		len++;

	if (info.width_specifier)
	{
		if (len < info.width_specifier)
		{
			len = info.width_specifier - len;
			checker = checker + len;
			space_printer(len);
		}
	}
	checker = checker + _puts(v);

	return (checker);
}
