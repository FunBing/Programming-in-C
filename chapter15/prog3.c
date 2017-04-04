#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *infile, *outfile;
    char *context;
    int c;

    if((infile = fopen("prog3A.txt", "r")) == NULL)
    {
        fprintf(stderr, "Can't open prog3A.txt");
        exit(EXIT_FAILURE);
    }

    if((outfile = fopen("prog3B.txt", "w")) == NULL)
    {
        fprintf(stderr, "Can't open prog3B.txt");
        exit(EXIT_FAILURE);
    }

//    while(fgets(context, 100, infile) != NULL)
//    {
//        printf(context);
//        fputs(context, outfile);
//    }


    while((c = getc(infile)) != EOF)
    {
        if(c >= 'a' && c <= 'z')
            putc(c - 'a' + 'A', outfile);
        else
            putc(c, outfile);
    }

    fclose(infile);
    fclose(outfile);

    return 0;
}
