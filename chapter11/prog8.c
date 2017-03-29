#include<stdio.h>

void bitpat_set(unsigned int *value, unsigned int setValue, int start, int num)
{
    unsigned int temp = 0;
    int i;

    for(i = 0;i < num;i++)
    {
        temp <<= 1;
        temp += 1;
    }

    *value &= ~(temp << start);

    *value |= (num << start);
}

int main(void)
{
    unsigned int a = 0xffffffff;
    void bitpat_set(unsigned int *value, unsigned int setValue, int start, int num);

    bitpat_set(&a, 4, 8, 4);

    printf("%x\n", a);

    return 0;
}
