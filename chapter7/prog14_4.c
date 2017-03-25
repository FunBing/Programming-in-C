#include<stdio.h>

int gArray[16] = { 34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
int gN = 16, gType;

//type == 0:Up
//type == 1:Down
void sort()
{
	int i, j, temp;


	for(i = 0;i < gN - 1;i++)
	{
		for(j = i + 1;j < gN;j++)
		{
			//Up
			if(gType == 0)
			{
				if(gArray[i] > gArray[j])
				{
					temp = gArray[i];
					gArray[i] = gArray[j];
					gArray[j] = temp;
				}
			}
			//Down
			if(gType == 1)
			{
				if(gArray[i] < gArray[j])
				{
					temp = gArray[i];
					gArray[i] = gArray[j];
					gArray[j] = temp;
				}
			}
		}
	}	


}

int main(void)
{
	int i;

	void sort();

	printf("The array before the sort:\n");

	for(i = 0;i < 16;++i)
		printf("%i ", gArray[i]);

	gType = 0;
	sort();

	printf("\n\nThe array after the ascending sort:\n");

	for(i = 0;i < 16;++i)
		printf("%i ", gArray[i]);

	gType = 1;
	sort();

	printf("\n\nThe array after the descending sort:\n");

	for(i = 0;i < 16;++i)
		printf("%i ", gArray[i]);

	printf("\n");

	return 0;
}

