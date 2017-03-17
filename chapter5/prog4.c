#include<stdio.h>

int main(void)
{
	float num, result;
	char ch;

	scanf("%f %c", &num, &ch);
	while(ch != 'E')
	{
		switch(ch)
		{
			case 'S':
				result = num;
				break;
			case '+':
				result += num;
				break;
			case '-':
				result -= num;
				break;
			case '*':
				result *= num;
				break;
			case '/':
				if(num == 0)
				{
					printf("Wrong input! The divisor can't be zero.\n");
					return 1;
				}
				result /= num;
				break;
			default:
				printf("Meaningless signal!\n");
				return 1;
		}

		printf("=%f\n", result);

		scanf("%f %c", &num, &ch);
	}

	printf("=%f\n", result);
}
