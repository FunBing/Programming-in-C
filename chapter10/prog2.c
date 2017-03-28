#include<stdio.h>

struct entry
{
    int    value;
    struct entry *next;
};

void insertEntry(struct entry *newEntry, struct entry *positionEntry)
{
    newEntry->next = positionEntry->next;
    positionEntry->next = newEntry;

    return;
}

int main()
{
    struct entry n1, n2, n3, *startEntry;
    int i;

    void insertEntry(struct entry *newEntry, struct entry *positionEntry);

    n1.value = 10;
    n2.value = 20;
    n3.value = 30;

    n1.next = &n3;
    n3.next = 0;

    startEntry = &n1;
    while(startEntry != 0)
    {
        printf("%i\n", startEntry->value);
        startEntry = startEntry->next;
    }


    insertEntry(&n2, &n1);

    startEntry = &n1;
    while(startEntry != 0)
    {
        printf("%i\n", startEntry->value);
        startEntry = startEntry->next;
    }

    return 0;
}
