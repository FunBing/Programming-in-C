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

int bitpat_search(int source, int pattern, int n)
{
    unsigned int temp = 0, size = 0;
    int i, realPattern, position = 0, int_size();

    size = int_size();
    for(i = 0;i < n;i++)
    {
        temp <<= 1;
        temp += 1;
    }

    realPattern = pattern & temp;


    while((position + n) <= size)
    {
        if((source & temp) == realPattern)
            return position;

        position++;
        source >>= 1;
    }

    return -1;
}

int main(void)
{
    int a = 0xe1f4;
    int bitpat_search(int source, int pattern, int n);

    printf("%i\n", bitpat_search(a, 0x5, 3));

    return 0;
}
