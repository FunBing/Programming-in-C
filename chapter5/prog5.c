#include<stdio.h>

int main(void)
{
	int num;

	scanf("%i", &num);
	
	if(num > 0)
	{
		while(num != 0)
		{
			printf("%i", num % 10);
			num /= 10;
		}
	}
	else
	{
		num = -num;
		while(num != 0)
		{
			printf("%i", num % 10);
			num /= 10;
		}
		printf("-");
	}
	printf("\n");

	return 0;
}
