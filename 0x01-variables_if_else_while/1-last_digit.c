#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - main function
* Return: 0 on success
*/
int main(void)
{
	int n, dt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	dt = n % 10;
	if (digit > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, abs(dt));
	else if (digit < 6)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, abs(dt));
	else if (digit == 0)
		printf("last digit of %d is %d and is 0\n", n, dt);
	return (0);
}
