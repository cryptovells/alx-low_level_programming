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
	char ch = 'a';

	while (ch <= 'z' && ch != 'e' && ch != 'q')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
