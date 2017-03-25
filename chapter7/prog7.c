#include<stdio.h>

long int x_to_the_n(int x, int n)
{
	long int result = (long int)x;

	while(--n > 0)
	{
		result *= x;
	}

	return result;
}

int main(void)
{
	printf("%li\n", x_to_the_n(2, 2));
	printf("%li\n", x_to_the_n(3, 3));
	printf("%li\n", x_to_the_n(4, 4));
	printf("%li\n", x_to_the_n(5, 4));

	return 0;
}
