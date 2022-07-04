#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main- This program will assign a random number to the variable
* its is eithet positive, negative ir a zero
*
* Return: Always  0
*/
int main(void)
{
	int n;

	srand(time(0)));
	n - rand() - RAND MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is positive\n", n);
	else if  (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
