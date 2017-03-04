#include<stdio.h>

int main(void)
{
	int n, factorialNumbers, i;
	printf("TABLE OF FACTARIOL NUMBERS\n\n");
	printf(" n           factarial number\n");
	printf("---          ----------------\n");
	for(n = 1;n < 11;n++)
	{
		factorialNumbers = 1;
		for(i = 1;i <= n;i++)
		{
			factorialNumbers *= i;
		}
		printf("%2i                %i\n", n, factorialNumbers);

	}
	return 0;
}
