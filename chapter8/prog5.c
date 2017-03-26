#include<stdio.h>
#include<stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};
struct time
{
	int hour;
	int minutes;
	int seconds;
};
struct dateAndTime
{
	struct date sdate;
	struct time stime;
};

struct dateAndTime dateUpdate(struct dateAndTime now)
{
	int numberOfDays(struct dateAndTime d);

	if(now.sdate.day != numberOfDays(now))
		now.sdate.day++;
	else if(now.sdate.month == 12)
	{
		now.sdate.day = 1;
		now.sdate.month = 1;
		now.sdate.year++;
	}
	else
	{
		now.sdate.day = 1;
		now.sdate.month++;
	}

	return now;
}

int numberOfDays(struct dateAndTime d)
{
	int days;
	bool isLeapYear(struct dateAndTime d);
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if(isLeapYear(d) && d.sdate.month == 2)
		days = 29;
	else
		days = daysPerMonth[d.sdate.month - 1];

	return days;
}

bool isLeapYear(struct dateAndTime d)
{
	bool leapYearFlag;

	if((d.sdate.year % 4 == 0 && d.sdate.year % 100 != 0) || d.sdate.year % 400 == 0)
		leapYearFlag = true;
	else
		leapYearFlag = false;

	return leapYearFlag;
}

struct dateAndTime timeUpdate(struct dateAndTime now)
{
	++now.stime.seconds;

	if(now.stime.seconds == 60)
	{
		now.stime.seconds = 0;
		++now.stime.minutes;

		if(now.stime.minutes == 60)
		{
			now.stime.minutes = 0;
			++now.stime.hour;
			
			if(now.stime.hour == 24)
			{
				now.stime.hour = 0;
				now = dateUpdate(now);
			}
		}
	}

	return now;
}






struct dateAndTime clockKeeper(struct dateAndTime now)
{
	struct dateAndTime later;
	later = timeUpdate(now);

	return later;
}

int main(void)
{
	struct dateAndTime now;

	printf("Enter time(y m d hh:mm:ss): ");
	scanf("%i %i %i %i:%i:%i", &now.sdate.year, &now.sdate.month, &now.sdate.day, &now.stime.hour, &now.stime.minutes, &now.stime.seconds);

	now = clockKeeper(now);

	printf("Time is %i %i %i %.2i:%.2i:%.2i\n", now.sdate.year, now.sdate.month, now.sdate.day, now.stime.hour, now.stime.minutes, now.stime.seconds);

}
