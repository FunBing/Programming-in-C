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

unsigned int rotate(unsigned int value, int n)
{
    unsigned int result, bits, size;
    int int_size();

    size = int_size();

    if(n > 0)
        n = n % 32;
    else
        n = -(-n % 32);

    if(n == 0)
        result = value;
    else if(n > 0)
    {
        bits = value >> (size - n);
        result = value << n | bits;
    }
    else
    {
        n = -n;
        bits = value << (size - n);
        result = value >> n | bits;
    }

    return result;
}

int main(void)
{
    unsigned int w1 = 0xabcdef00u;
    unsigned int rotate(unsigned int value, int n);

    printf("%x\n", rotate(w1, 8));

    return 0;
}
