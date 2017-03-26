#include<stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct time elapsed_time(struct time time1, struct time time2)
{
	struct time result = {0, 0, 0};
	if(time2.seconds < time1.seconds)
	{
		time2.minutes--;
		time2.seconds += 60;
	}
	result.seconds = time2.seconds - time1.seconds;

	if(time2.minutes < time1.minutes)
	{
		time2.hour--;
		time2.minutes += 60;
	}
	result.minutes = time2.minutes - time1.minutes;

	if(time2.hour < time1.hour)
		time2.hour += 24;
	result.hour = time2.hour - time1.hour;

	return result;
}


int main(void)
{
	struct time time1, time2, result;

	printf("Enter time1(hh:mm:ss):");
	scanf("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);
	
	printf("Enter time2(hh:mm:ss):");
	scanf("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);

	result = elapsed_time(time1, time2);
	printf("%i:%i:%i\n", result.hour, result.minutes, result.seconds);
}
