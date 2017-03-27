#include<stdio.h>

int strToInt(const char string[])
{
    int i, intValue, flag, result = 0;

    if(string[0] == '-')
    {
        for(i = 1;string[i] >= '0' && string[i] <= '9';i++)
        {
            intValue = string[i] - '0';
            result = result * 10 + intValue;
        }
        result = -result;
    }
    else
    {
        for(i = 0;string[i] >= '0' && string[i] <= '9';i++)
        {
            intValue = string[i] - '0';
            result = result * 10 + intValue;
        }
    }


    return result;
}


int main(void)
{
    int strToInt(const char string[]);

    printf("%i\n", strToInt("345"));
    printf("%i\n", strToInt("-345"));

    return 0;
}
