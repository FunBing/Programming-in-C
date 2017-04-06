#include<stdio.h>
#include<stdlib.h>

struct entry
{
    char word[15];
    char definition[50];
};


//0: s1 = s2
//1: s1 > s2
//-1:s1 < s2
int compareStrings(const char s1[], const char s2[])
{
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;

    if(s1[i] == s2[i])
        return 0;

    if(s1[i] > s2[i])
        return 1;

    if(s1[i] < s2[i])
        return -1;
}

void dictionarySort(struct entry dictionary[], int entries)
{
    int i, j;
    struct entry temp;
    int compareStrings(const char s1[], const char s2[]);

    for(i = 0;i < entries - 1;i++)
    {
        for(j = i + 1;j < entries;j++)
        {
            if(compareStrings(dictionary[i].word,  dictionary[j].word) == 1)
            {
                temp = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp;
            }
        }
    }
}

int lookup(const struct entry dictionary[], const char search[], const int entries)
{
    int low = 0, high = entries - 1, middle;
    int compareStrings(const char s1[], const char s2[]);

    middle = (low + high) / 2;
    while(compareStrings(search, dictionary[middle].word) != 0)
    {
        if(low == high)
            return -1;

        if(compareStrings(search, dictionary[middle].word) == 1)
            low = middle + 1;
        else if(compareStrings(search, dictionary[middle].word) == -1)
            high = middle - 1;

        middle = (low + high) / 2;

    }

    return middle;

}

int main(int argc, char *argv[])
{
    struct entry dictionary[100] =
    {{"addle", "to become confused"},
     {"aardvark", "a burrowing African mammal"},
     {"abyss", "a bottomless pit"},
     {"affix", "to append; attach"},
     {"aerie", "a high nest"},
     {"acumen", "mentally sharp;keen"}
    };

    int entries = 6;
    int entryNumber;
    void dictionarySort(struct entry dictionary[], int entries);
    int lookup(const struct entry dictionary[], const char search[], const int entries);

    if(argc != 2)
    {
        fprintf(stderr, "No word typed on the command line.\n");
        return EXIT_FAILURE;
    }

    dictionarySort(dictionary, entries);

    entryNumber = lookup(dictionary, argv[1], entries);

    if(entryNumber != -1)
        printf("%s\n", dictionary[entryNumber].definition);
    else
        printf("Sorry, %s is not in my dictionary.\n", argv[1]);

    return EXIT_SUCCESS;
}
