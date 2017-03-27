#include<stdio.h>

struct entry
{
    char word[15];
    char definition[50];
};

int compareStrings(const char s1[], const char s2[])
{
    int i = 0, answer;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;

    if(s1[i] < s2[i])
        return -1;
    else if(s1[i] == s2[i])
        return 0;
    else
        return 1;
}

void dictionarySort(struct entry dictionary[], int num)
{
    int i, j;
    struct entry temp;

    for(i = 0;i < num - 1;i++)
    {
        for(j = i+1;j < num;j++)
        {
            if(compareStrings(dictionary[i].word, dictionary[j].word) == 1)
            {
                temp = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp;
            }
        }

    }
}

int main(void)
{
    int i;
    struct entry dictionary[100] =
    {{"addle", "to become confused"},
     {"aardvark", "a burrowing African mammal"},
     {"abyss", "a bottomless pit"},
     {"affix", "to append; attach"},
     {"aerie", "a high nest"},
     {"acumen", "mentally sharp;keen"}};

    void dictionarySort(struct entry dictionary[], int num);

    dictionarySort(dictionary, 6);

    for(i = 0;i < 6;i++)
    {
        printf("%s\t%s\n", dictionary[i].word, dictionary[i].definition);
    }

    return 0;
}
