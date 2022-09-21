#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i;

	i = 0;

	if (i <= 10)
	{

		putchar(i + '0');
		putchar(',');
		putchar(' ');
		i++;

	}
	else
	{
	putchar('\n');
	}

	return (0);
}
