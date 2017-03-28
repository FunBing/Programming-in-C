#include<stdio.h>

void readLine(char *buffer)
{
    char character;

    do
    {
        character = getchar();
        *(buffer) = character;
        buffer++;
    }
    while(character != '\n');

    *(--buffer) = '\0';
}



int main(void)
{
    char buffer[80];
    int i;
    void readLine(char *buffer);

    readLine(buffer);

    for(i =  0; buffer[i] != '\0'; ++i)
        printf("%c", buffer[i]);

}
