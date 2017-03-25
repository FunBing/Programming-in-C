#include<stdio.h>

int prime(int x)
{
	int i, isPrime;

	if(x == 2)
		return 1;
	else if(x == 0 || x == 1)
		return 0;

	for(i = 2;i < x;i++)
	{
		isPrime = 1;
		if(x % i == 0)
		{
			isPrime = 0;
			break;
		}
	}

	return isPrime;
}

int main(void)
{
	int i;
	for(i = 1;i < 10;i++)
	{
		printf("%i: %i\n", i, prime(i));
	}
}
