// C program to print alphabets
#include <stdio.h>

// Function to print the alphabet
// in lower case
void lowercaseAlphabets()
{
	// for lowercase
	for (int c = 97; c <= 122; ++c)
		printf("%c ", c);
	printf("\n");
}

// Driver program
int main()
{
	printf("Lowercase Alphabets\n");
	lowercaseAlphabets();

	return 0;
}