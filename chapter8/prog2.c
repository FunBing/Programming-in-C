#include<stdio.h>

int f(int year, int month)
{
	if(month <= 2)
		return (year - 1);
	else
		return year;
}

int g(int month)
{
	if(month <= 2)
		return (month + 13);
	else
		return (month + 1);
}

int calN(int year, int month, int day)
{
	int result;
	int f(int year, int month);
	int g(int month);

	result = 1461 * f(year, month) / 4 + 153 * g(month) / 5 + day;

	if(year == 1800 && month >= 3 || year == 1900 && month <= 2 || year >1800 && year < 1900)
	{
		result += 1;
	}
	else if(year == 1700 && month >= 3 || year == 1800 && month <= 2 || year > 1700 && year < 1800)
	{
		result += 2;
	}
	
	return result;
}

int main(void)
{
	int year, month, day, N1, N2;

	int calN(int year, int month, int day);

	while(year != 0)
	{
		printf("day1:\n");
		scanf("%i %i %i", &year, &month, &day);
		N1 = calN(year, month, day);
		
		printf("day2:\n");
		scanf("%i %i %i", &year, &month, &day);
		N2 = calN(year, month, day);		

		printf("days are %i\n", N2 - N1);
	}
}
