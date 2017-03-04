#include<stdio.h>

int main(void)
{
	int number, result = 0;

	printf("What is your number? ");
	scanf("%i", &number);

	while(number != 0)
	{
		result += number % 10;

		number /= 10;
	}

	printf("The result is %i\n", result);

	return 0;
}
