#include<stdio.h>
#include<math.h>

float strToFloat(const char string[])
{
    int i, j = 0;
    float result = 0, floatValue;

    if(string[0] == '-')
    {
        for(i = 1;string[i] >= '0' && string[i] <= '9';i++)
        {
            floatValue = string[i] - '0';
            result = result * 10 + floatValue;
        }
        if(string[i] == '.')
        {

            for(++i;string[i] >= '0' && string[i] <= '9';i++)
            {
                j++;
                floatValue = string[i] - '0';
                result += floatValue / (pow(10, j));
            }
        }
        result = -result;
    }
    else
    {
        for(i = 0;string[i] >= '0' && string[i] <= '9';i++)
        {
            floatValue = string[i] - '0';
            result = result * 10 + floatValue;
        }
        if(string[i] == '.')
        {
            for(++i;string[i] >= '0' && string[i] <= '9';i++)
            {
                j++;
                floatValue = string[i] - '0';
                result += floatValue / (pow(10, j));
            }
        }

    }

    return result;
}

int main(void)
{
    float strToFloat(const char string[]);

    printf("%f\n", strToFloat("876.692"));
    printf("%f\n", strToFloat("-876.691"));

    return 0;
}
