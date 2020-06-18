#include "holberton.h"
/**
 * more_numbers - print numbers from 0 to 14
 */
void more_numbers(void)
{
	int number, counter, closer;

	for (counter = 0; counter <= 10; counter++)
	{
		for (closer = 0, number = 0; closer <= 14; number++, closer++)
		{
			if (closer >= 9)
			{
				_putchar('1');
				if (closer == 10)
					number = 0;
			}
			_putchar(number + '0');
		}
		_putchar(10);
	}
}
