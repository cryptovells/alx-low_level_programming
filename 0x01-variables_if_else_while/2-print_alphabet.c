#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* more headers goes there */



/* betty style doc for function main goes there */
/**
 * main - entry
 *
 *  Return: Always 0 (Success)
 *
 */

int main(void)

{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
			ch++;
	}
	putchar('\n');

	return (0);
}
