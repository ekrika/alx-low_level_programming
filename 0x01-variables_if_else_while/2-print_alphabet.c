#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns alphabelts
 * Return: returns 0 (successful)
 */
int main(void)
{
	int alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
