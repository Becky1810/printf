#include "main.h"

/**
 *_printf - Print a formatted string
 *@format: format string
 *Return: number of characters printed
 */

int _printf(const char *format, ...)
{
    int count = 0;
    va_list list;
    char *pointer, *start;
    param_func flags = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    va_start(list, format);

    if (!format || (format[0] == '%' && !format[1]))
      return (-1);
    if (format[0] == '%' && format[1] == ' ' && !format[2])
      return (-1);
}
