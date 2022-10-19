#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main fuction generate a random number
 * Return: return 0(successful)
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
