#include<stdio.h>

int main(void)
{
    int result1, result2, result3;
    
    result1 = 365 + 7 - 365 % 7;
    result2 = 12258 + 23 - 12258 % 23;
    result3 = 996 + 4 - 996 % 4;

    printf("%i\n%i\n%i\n", result1, result2, result3);
}
