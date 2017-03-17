#include<stdio.h>

int main(void)
{
	int num1, num2;
	scanf("%i %i", &num1, &num2);
	if((num1 % num2) == 0)
	{
		printf("Num1 can be divided exactly by num2.\n");
	}
	else
	{
		printf("Num1 cannot be divided exactly by num2.\n");
	}

	return 0;
}

