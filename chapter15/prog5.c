#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *infile;
    char content[50];
    int m, n, i;

    if((infile = fopen("prog5.txt", "r")) == NULL)
    {
        fprintf(stderr, "Can't open prog5.txt");
        exit(EXIT_FAILURE);
    }

    printf("print m, n: ");
    scanf("%i %i", &m, &n);
    while(fgets(content, 50, infile) != NULL)
    {
        for(i = m;i < n;i++)
        {
            printf("%c ", content[i]);
        }
        printf("\n");
    }

    fclose(infile);

    return 0;
}
