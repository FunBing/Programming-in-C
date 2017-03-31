#define MAX3(a,b,c) (a)>(b)?((a)>(c)?(a):(c)):(((b)>(c)?(b):(c)))

#include<stdio.h>

int main(void)
{
    printf("%i\n", MAX3(1,1+3,3));

    return 0;
}
