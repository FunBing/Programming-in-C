#include<stdio.h>

//type == 0:Up
//type == 1:Down
void sort(int a[], int n, int type)
{
	int i, j, temp;


	for(i = 0;i < n - 1;i++)
	{
		for(j = i + 1;j < n;j++)
		{
			//Up
			if(type == 0)
			{
				if(a[i] > a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
			//Down
			if(type == 1)
			{
				if(a[i] < a[j])
				{
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}	


}

int main(void)
{
	int i;
	int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};

	void sort(int a[], int n, int type);

	printf("The array before the sort:\n");

	for(i = 0;i < 16;++i)
		printf("%i ", array[i]);

	sort(array, 16, 0);

	printf("\n\nThe array after the ascending sort:\n");

	for(i = 0;i < 16;++i)
		printf("%i ", array[i]);

	sort(array, 16, 1);

	printf("\n\nThe array after the descending sort:\n");

	for(i = 0;i < 16;++i)
		printf("%i ", array[i]);

	printf("\n");

	return 0;

}

