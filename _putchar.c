#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	static char buf[1024];
	static int pos;

	if (c == -1 || pos >= 1024)
	{
		write(1, buf, pos);
		pos = 0;
	}
	if (c != -1)
	{
		buf[pos++] = c;
	}
	return (1);
}
