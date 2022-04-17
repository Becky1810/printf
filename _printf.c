#include "main.h"

/**
 *_printf - Print a formatted string
 *@format: format string
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
    int count = -1;

	if (format != NULL)
	{
		int i;
		va_list ar_list;
		int (*o)(va_list);

		va_start(ar_list, format);

		if (format[0] == '%' && format[1] == '\0')
			return (-1);

		count = 0;
    }
}
