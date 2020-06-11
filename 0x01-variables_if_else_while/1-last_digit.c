#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main function
* Return: 0 on success
*/
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (n > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, digit);
	else if (n < 6)
		printf("last digit of %d is %d and is less than 6\n", n, digit);
	else
		printf("last digit of %d is %d and is 0\n", n, digit);
	return (0);
}
