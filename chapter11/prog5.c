#include<stdio.h>

unsigned int bit_test(unsigned int value, unsigned int n)
{
    if(value & (1 << n))
        return 1;
    else
        return 0;
}

unsigned int bit_set(unsigned int value, unsigned int n)
{
    value |= (1 << n);

    return value;
}

int main(void)
{
    unsigned int a = 0x01001010;
    unsigned int bit_test(unsigned int value, unsigned int n);
    unsigned int bit_set(unsigned int value, unsigned int n);

    printf("%x\n", bit_test(a, 5));
    printf("%x\n", bit_set(a, 5));

    return 0;
}
