#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * @str: parameter
 *
 */

void puts_half(char *str)

{
	int n, i, len;

	len = 0;
	while (str[len] != '\0')
	{
	n++;
	}
	if (len % 2 == 0)
	{
	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	}
	else
	{
	for (n = (len - 1) / 2; n < len  - 1; n++)
	{
		_putchar(str[n + 1]);
	}
	}
		_putchar('\n');
}
