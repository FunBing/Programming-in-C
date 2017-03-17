#include<stdio.h>

int main(void)
{
	int num1, num2;
	scanf("%i %i", &num1, &num2);
	if(num2 == 0)
	{
		printf("Wrong input! The divisor can't be zero!\n");
		return 1;
	}

	printf("The result is: %.3f\n", (float)num1 / num2);

	return 0;
}
