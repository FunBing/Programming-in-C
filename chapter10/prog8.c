#include<stdio.h>

int *sort3(int i1, int i2, int i3)
{
    int *array, *ai, *aj, temp;

    *(array++) = i1;
    *(array++) = i2;
    *array = i3;

    for(ai = array - 2; ai < array; ai++)
    {
        for(aj = ai; aj < array + 1; aj++)
        {
            if(*ai > *aj)
            {
                temp = *ai;
                *ai = *aj;
                *aj = temp;
            }
        }
    }

    return array - 2;
}

int main(void)
{
    int *array, i;
    int *sort3(int i1, int i2, int i3);

    array = sort3(2,16,3);

    for(i = 0; i < 3; i++)
    {
        printf("%i ", *(array++));
    }

    return 0;
}
