#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *infile1, *infile2;
    char content1[50], content2[50], *status1, *status2;

    if((infile1 = fopen("prog4A.txt", "r")) == NULL)
    {
        fprintf(stderr, "Can't open prog3A.txt");
        exit(EXIT_FAILURE);
    }

    if((infile2 = fopen("prog4B.txt", "r")) == NULL)
    {
        fprintf(stderr, "Can't open prog3B.txt");
        exit(EXIT_FAILURE);
    }



    while(((status1 = fgets(content1, 50, infile1)) != NULL) && ((status2 = fgets(content2, 50, infile2)) != NULL))
    {
        fprintf(stdout, content1);
        fprintf(stdout, content2);
    }




    if(status1 == NULL)
    {
        while(fgets(content2, 100, infile2) != NULL)
            fprintf(stdout, content2);
    }
    else if(status2 == NULL)
    {
        while(fgets(content1, 100, infile1) != NULL)
            fprintf(stdout, content2);
    }



    fclose(infile2);

    return 0;
}
