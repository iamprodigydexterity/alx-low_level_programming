#include <stdio.h>
#include "main.h"

/**
 * main - fizz buzz
 * Return: 0
 */

int main(void)
{
	int num;
{
	for (num = 1; num < 100; num = num + 1)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("Buzz\n");

	return (0);
}
