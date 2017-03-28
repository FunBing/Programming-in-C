#include<stdio.h>
#include<stdbool.h>

struct date
{
    int month;
    int day;
    int year;
};

void dateUpdate(struct date *today)
{
    int numberOfDays(struct date *d);

    if((*today).day != numberOfDays(today))
		(*today).day += 1;
	else if((*today).month == 12)
		(*today) = (struct date){1, 1, (*today).year + 1};
	else
		(*today) = (struct date){(*today).month + 1, 1, (*today).year};
}

int numberOfDays(struct date *d)
{
	int days;
	bool isLeapYear(struct date *d);
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if(isLeapYear(d) && (*d).month == 2)
		days = 29;
	else
		days = daysPerMonth[(*d).month - 1];

	return days;
}

bool isLeapYear(struct date *d)
{
	bool leapYearFlag;

	if(((*d).year % 4 == 0 && (*d).year % 100 != 0) || (*d).year % 400 == 0)
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}

int main(void)
{
	void dateUpdate(struct date *today);
	struct date thisDay, nextDay;

	printf("Enter today's date (mm dd yyyy): ");
	scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

	dateUpdate(&thisDay);

	printf("Tomorrow's date is %i/%i/%.2i\n", thisDay.month, thisDay.day, thisDay.year % 100);

	return 0;
}
