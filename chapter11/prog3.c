#include<stdio.h>

int int_size()
{
    int a = ~0, size = 0;

    while(a != 0)
    {
        size++;
        a <<= 1;
    }
    return size;
}

int main(void)
{
    printf("%i", int_size());

    return 0;
}
