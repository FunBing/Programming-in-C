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

void produceWeekDays(int day)
{
	switch(day)
	{
		case 1:
			printf("Monday\n");
			break;	
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 0:
			printf("Sunday\n");
			break;
	}
	return;
}

int main(void)
{
	int year, month, day, N;

	int calN(int year, int month, int day);
    void produceWeekDays(int day);
	
	while(year != 0)
	{
		printf("day:\n");
		scanf("%i %i %i", &year, &month, &day);
		N = calN(year, month, day);
        produceWeekDays((N - 621049) % 7);
	}
}
