#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void)
{
    FILE *infile;
    char content[50];
    int num = 0, i;
    char c;

    if((infile = fopen("prog6.txt", "r")) == NULL)
    {
        fprintf(stderr, "can't open prog6.txt");
        exit(EXIT_FAILURE);
    }

    while(fgets(content, 50, infile) != NULL)
    {
        printf("%s", content);
        num++;
        if(num == 20)
        {

            scanf("%c", &c);
            if(c == 10)
                scanf("%c", &c);
            if(c == 'q')
            {
                fclose(infile);
                return 1;
            }
            else
                num = 0;
        }
    }

    fclose(infile);

    return 0;
}
