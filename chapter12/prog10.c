#include<stdio.h>
#include<ctype.h>

int main(void)
{
    printf("%i\n", isupper('X'));
    printf("%i\n", isupper('x'));
    printf("%i\n", isalpha('X'));
    printf("%i\n", isalpha('x'));
    printf("%i\n", isalpha('1'));
    printf("%i\n", isdigit('1'));
    printf("%i\n", isdigit('x'));

    return 0;
}
