#define IS_LOWER_CASE(x) ((x) >= 'a') && ((x) <= 'z')
#define IS_UPPER_CASE(x) ((x) >= 'A') && ((x) <= 'Z')
#define IS_ALPHABETIC(x) IS_LOWER_CASE(x) || IS_UPPER_CASE(x)
#define IS_DIGIT(x) ((x) >= '0') && ((x) <= '9')
#define IS_SPECIAL(x) !(IS_ALPHABETIC(x) || IS_DIGIT(x))

#include<stdio.h>

int main(void)
{
    printf("%i\n", IS_DIGIT('1'));
    printf("%i\n", IS_DIGIT('0'));
    printf("%i\n", IS_DIGIT('9'));
    printf("%i\n", IS_DIGIT('z'));
    printf("%i\n", IS_SPECIAL('1'));
    printf("%i\n", IS_SPECIAL('!'));
    printf("%i\n", IS_SPECIAL('z'));

    return 0;
}
