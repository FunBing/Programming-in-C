#include<stdio.h>

int main(void)
{
    char *message = "Programming in C is fun\n";
    char message2[] = "You said it\n";
    char *format = "x = %i\n";
    int x = 100;

    printf("Programming in C is fun\n");
    printf("%s", "Programming in C is fun\n");
    printf("%s", message);
    printf(message);

    printf("\n\n\n\n");

    printf("You said it\n");
    printf("%s", message2);
    printf(message2);
    printf("%s", &message2[0]);

    printf("\n\n\n\n");

    printf("said it\n");
    printf(message2 + 4);
    printf("%s", message2 + 4);
    printf("%s", &message2[4]);

    printf("\n\n\n\n");

    printf("x = %i\n", x);
    printf(format, x);

    return 0;
}
