#include <stdlib.h>
#include <stdio.h>
#include <time.h>


/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - entry
 *
 * Return: Always 0 (Success)
 */



int main(void)



{

		char ch = 'a';

		char c = 'A';

			while (ch <= 'z')
			{
				putchar(ch);
				ch++;
			}
			while (c <= 'Z')
			{
				putchar(c);
				c++;
			}
			putchar('\n');

			return (0);

}
