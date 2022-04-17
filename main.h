#ifndef PRINT_F
#define PRINT_F

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define FLAG_UNSIGNED  2
#define FLAG_LOWERCASE 1


/**
 * struct param_flags - struct containing flags to get
 * when a flag specifier is passed to _printf()
 * @plus_flag: flag for the '+' character
 * @space_flag: flag for the ' ' character
 * @hash_flag: flag for the '#' character
 * @zero_flag: flag for the '0' character
 * @minus_flag: flag for the '-' character
 * @unsign: flag for the unsigned values
 * @width: width of the value
 * @precision: precision of the value
 * @l_mod: length modifier
 * @h_mod: short length modifier
 */
typedef struct param_flags
{
	unsigned int plus_flag		: 1;
	unsigned int space_flag		: 1;
	unsigned int hash_flag		: 1;
	unsigned int h_mod		: 1;
	unsigned int l_mod		: 1;
	unsigned int zero_flag		: 1;
	unsigned int minus_flag		: 1;
	unsigned int unsign		: 1;

	unsigned int width;
	unsigned int precision;

} param_func;

/**
* struct func_convert - gets structure for the symbols and functions
*@type: operator symbols
*@func: the associated function
*/
