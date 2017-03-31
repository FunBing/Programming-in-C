#define IS_LOWER_CASE(x) ((x) >= 'a') && ((x) <= 'z')
#define IS_UPPER_CASE(x) ((x) >= 'A') && ((x) <= 'Z')
#define IS_ALPHABETIC(x) IS_LOWER_CASE(x) || IS_UPPER_CASE(x)

#include<stdio.h>

int main(void)
{
    printf("%i\n", IS_ALPHABETIC('X'));
    printf("%i\n", IS_ALPHABETIC('x'));
    printf("%i\n", IS_ALPHABETIC('1'));
    printf("%i\n", IS_ALPHABETIC('\t'));

    return 0;
}
