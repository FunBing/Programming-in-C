#include<stdio.h>

int gArray[5] = {1, 2, 3, 4, 5};
int gN = 5;

int arraySum()
{
	int sum = 0, i;
	for(i = 0;i < gN;i++)
	{
		sum += gArray[i];
	}
	return sum;
}

int main(void)
{
	printf("%i\n", arraySum());
	
	return 0;
}
