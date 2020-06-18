#include <stdio.h>
/**
 * main - number from 1 to 100 fizzbuzz
 */
int main(void)
{
	int number;

	for (number = 1; number < 101; number++)
	{
		if (number % 3 == 0)
			printf("Fizz ");
		else if (number % 5 == 0)
			printf("Buzz ");
		else if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", number);
	}
	printf("\n");
	return (0);
}
