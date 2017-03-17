#include<stdio.h>
#include<math.h>

int main(void)
{
	int num, process, position;
	
	scanf("%i", &num);

	if(num < 0)
	{
		printf("Wrong input!We will calculate the abs of input!\n");
	}
	
	position = 0; 
	process = 1;
	while(process <= num)
	{
		position++;
		process = pow(10, position);
	}

	position--;
	do
	{
		process = num / (pow(10, position));

		switch(process)
		{
			case 0:
				printf("zero ");
				break;
			case 1:
				printf("one ");
				break;
			case 2:
				printf("two ");
				break;
			case 3:
				printf("three ");
				break;
			case 4:
				printf("four ");
				break;
			case 5:
				printf("five ");
				break;
			case 6:
				printf("six ");
				break;
			case 7:
				printf("seven ");
				break;
			case 8:
				printf("eight ");
				break;
			case 9:
				printf("nine ");
				break;
			defualt:
				break;
		}
		num -= process * (pow(10, position));
		position--;

	}while(num != 0);
	
	printf("\n");

	return 0;
}
