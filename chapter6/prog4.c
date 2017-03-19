#include<stdio.h>

int main(void)
{
	int i;
	float num[10];

	printf("Enter your number: \n");
	for(i = 0;i < 10;i++)
	{
		scanf("%f", &num[i]);
	}

	for(i = 1;i < 10;i++)
	{
		num[0] += num[i];
	}

	printf("%g\n", num[0] / 10);

	return 0;
}
