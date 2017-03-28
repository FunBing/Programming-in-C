#include<stdio.h>

void sort(int *a, int n)
{
    int *ai, *aj, temp;

    for(ai = a; ai < a + n - 1; ++ai)
    {
        for(aj = ai + 1; aj < a + n; ++aj)
        {
            if(*ai > *aj)
            {
                temp = *ai;
                *ai = *aj;
                *aj = temp;
            }
        }
    }
}

int main(void)
{
    int i;
    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 44, -3, -9, 12, 17, 22, 6, 11};
    void sort(int *a, int n);

    printf("The array before the sort:\n");

    for(i = 0;i < 16;++i)
        printf("%i ", array[i]);

    sort(array, 16);

    printf("\n\nThe array after the sort:\n");

    for(i = 0;i < 16;++i)
        printf("%i ", array[i]);

    printf("\n");
}
