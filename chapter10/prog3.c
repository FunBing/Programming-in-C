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
    struct entry start, n1, n2, n3, *startEntry;
    int i;

    void insertEntry(struct entry *newEntry, struct entry *positionEntry);

    start.value = 0;
    n1.value = 10;
    n2.value = 20;
    n3.value = 30;

    start.next = &n1;
    n1.next = &n3;
    n3.next = 0;

    startEntry = start.next;
    while(startEntry != 0)
    {
        printf("%i\n", startEntry->value);
        startEntry = startEntry->next;
    }

    printf("\n\n");

    insertEntry(&n2, &start);

    startEntry = start.next;
    while(startEntry != 0)
    {
        printf("%i\n", startEntry->value);
        startEntry = startEntry->next;
    }

    return 0;
}
