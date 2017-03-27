#include<stdio.h>

void uppercase(char text[])
{
    int i;

    for(i = 0;text[i] != '\0';i++)
    {
        if(text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i] - 'a' + 'A';
        }
    }
}

int main(void)
{
    char text[] = "abDEFff";
    void uppercase(char text[]);

    uppercase(text);
    printf("%s\n", text);

    return 0;
}
