
#include <stdio.h>
/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */

void lowercaseAlphabets()
{
	
	for (int c = 97; c <= 122; ++c)
		printf("%c ", c);
	printf("\n");
}


int main()
{
	printf("Lowercase Alphabets\n");
	lowercaseAlphabets();

	return 0;
}