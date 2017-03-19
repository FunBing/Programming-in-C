#include<stdio.h>

int main(void)
{
	int Fibonacci0 = 0, Fibonacci1 = 1, Fibonacci2, i;

	printf("%i\n", Fibonacci0);
	printf("%i\n", Fibonacci1);

	for(i = 2;i < 15;++i)
	{
		Fibonacci2 = Fibonacci0 + Fibonacci1;
		printf("%i\n", Fibonacci2);

		Fibonacci0 = Fibonacci1;
		Fibonacci1 = Fibonacci2;
	}

	return 0;
}
