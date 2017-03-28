#include<stdio.h>

int compareStrings(char *s1, char *s2)
{
    int i = 0, answer;

    while(*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
    {
        s1++;
        s2++;
    }

    if(*s1 < *s2)
        answer = -1;
    else if(*s1 == *s2)
        answer = 0;
    else
        answer = 1;

    return answer;
}

int main(void)
{
    char s1[80], s2[80];
    int flag = 1;

    int compareStrings(char *s1, char *s2);

    while(flag)
    {
        printf("Enter s1:");
        scanf("%s", s1);

        printf("Enter s2:");
        scanf("%s", s2);

        printf("%i\n", compareStrings(s1, s2));

        printf("Still continue?(0 to stop, 1 to continue)");
        scanf("%i", &flag);
    }
}
