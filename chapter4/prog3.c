#include<stdio.h>

int main(void)
{
    int n, triangleNumber;
    
    printf("TABLE OF TRIANGLE NUMBERS\n\n");
    printf(" n              Sum from 1 to n\n");
    printf("---             ---------------\n");
    for(n = 5;n < 51; n += 5)
    {
        triangleNumber = (float)n * (n + 1) / 2;
        printf("%2i                    %i\n", n, triangleNumber);
    }
    return 0;
}
