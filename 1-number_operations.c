#include "main.h"

/**
* print_d - Print decimal (Base 10) digits (%d)
* @ar_list: Store the value of arguments
* Return: Counter print numbers
*/

int print_d(va_list ar_list)
{
	unsigned int num_Absolute, aux_Num, count_Zero, count;
	int numbers;

	count = 0;

	numbers = va_arg(ar_list, int);

	if (numbers < 0)
	{
		num_Absolute = (numbers * -1);
		count += _putchar(45);
	}
}

/**
* print_i - Print the integers (%i)
* @ar_list: Store list numbers
* Return: Number print
*/
int print_i(va_list ar_list)
{
	return (print_d(ar_list));
}
