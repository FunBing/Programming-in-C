#include<stdio.h>
#include<stdbool.h>

void intToStr(const int num, char string[])
{
    int num2, i = 0, j = 0;
    char string2[80];

    num2 = num;
    bool flag;
    if(num2 >= 0)
        flag = true;
    else
    {
        flag = false;
        num2 = -num2;
    }

    while(num2)
    {
        string2[i] = num2 % 10 + '0';
        num2 /= 10;
        i++;
    }

    if(flag)
    {
        i--;
        for(j = 0;j <= i;j++)
        {
            string[j] = string2[i - j];
        }
        string[j] = '\0';
    }
    else
    {
        string[0] = '-';
        i--;
        for(j = 1;j - 1<= i;j++)
        {
            string[j] = string2[i - (j - 1)];
        }
        string[j] = '\0';

    }
}

int main(void)
{
    char text[80];

    void intToStr(const int num, char string[]);

    intToStr(1202, text);
    printf("%s\n", text);

    intToStr(-1140, text);
    printf("%s\n", text);

    return 0;
}
