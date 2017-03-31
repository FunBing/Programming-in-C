#define IS_UPPER_CASE(x) ((x) >= 'A') && ((x) <= 'Z')

#include<stdio.h>

int main(void)
{
    printf("%i\n", IS_UPPER_CASE('A'));
    printf("%i\n", IS_UPPER_CASE('a'));

    return 0;
}
