#include<stdio.h>

int main(void)
{
	int n, number, triangularNumber, counter, counterNumber;

	printf("How many times you want to enter?\n");
	scanf("%i", &counterNumber);

	for(counter = 1; counter <= counterNumber; ++counter)
	{
		printf("What triangular number do you want? ");
		scanf("%i", &number);

		triangularNumber = 0;

		for(n = 1; n<= number; ++n)
			triangularNumber += n;
		
		printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}
	return 0;

}
