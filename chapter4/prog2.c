#include<stdio.h>

int main(void)
{
    int i, n;
    
    
    
    printf("TABLE OF N AND N^2\n");
    printf(" n            n^2\n");
    printf("---          -----\n");
    for(i = 1; i < 11; i++)
    {
        printf("%2i            %i\n", i, i * i);
    }
}
