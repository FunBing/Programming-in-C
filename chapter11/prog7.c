#include<stdio.h>

unsigned int bitpat_set(unsigned int x, unsigned int start, unsigned int num)
{
    int i;
    unsigned int temp = 0, result = 0;

    x >>= start;
    for(i = 0;i < num;i++)
    {
        temp <<= 1;
        temp += 1;
    }

    result = x & temp;

    return result;
}

int main(void)
{
    unsigned int a = 0xe1f4;

    unsigned int bitpat_set(unsigned int x, unsigned int start, unsigned int num);

    printf("%x\n", bitpat_set(a, 4, 4));

    return 0;
}
