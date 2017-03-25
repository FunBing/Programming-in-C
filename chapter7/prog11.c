#include<stdio.h>

int arraySum(int array[], int n)
{
	int sum = 0, i;
	for(i = 0;i < n;i++)
	{
		sum += array[i];
	}
	return sum;
}

int main(void)
{
	int x[5] = {1,2,3,4,5};

	printf("%i\n", arraySum(x, 5));

}
