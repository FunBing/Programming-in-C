#include<stdio.h>

enum month {January, February, March, April, May, June, July, August, September, October, November, December};

char *monthName(enum month aMonth)
{
    switch(aMonth)
    {
    case January:
        return "January";
        break;
    case February:
        return "February";
        break;
    case March:
        return "March";
        break;
    case April:
        return "April";
        break;
    case May:
        return "May";
        break;
    case June:
        return "June";
        break;
    case July:
        return "July";
        break;
    case August:
        return "August";
        break;
    case September:
        return "September";
        break;
    case October:
        return "October";
        break;
    case November:
        return "November";
        break;
    case December:
        return "December";
        break;
    default:
        return "Fuck it and it's wrong!";
    }

}

int main(void)
{
    char *monthName(enum month aMonth);

    printf("%s\n", monthName(January));

    return 0;
}
