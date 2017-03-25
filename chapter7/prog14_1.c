#include<stdio.h>

int gX;

int prime()
{
	int i, isPrime;

	if(gX == 2)
		return 1;
	else if(gX == 0 || gX == 1)
		return 0;

	for(i = 2;i < gX;i++)
	{
		isPrime = 1;
		if(gX % i == 0)
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
		gX = i;
		printf("%i: %i\n", gX, prime());
	}
}
