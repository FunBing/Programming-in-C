#define ABSOLUTE_VALUE(x) (x)>0?(x):-(x)

#include<stdio.h>

int main(void)
{
    printf("%i\n", ABSOLUTE_VALUE(12));
    printf("%i\n", ABSOLUTE_VALUE(-12));
    printf("%i\n", ABSOLUTE_VALUE(0));
    printf("%i\n", ABSOLUTE_VALUE(12-14));

    return 0;
}
