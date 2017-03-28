#include<stdio.h>

struct entry
{
    int value;
    struct entry *last;
    struct entry *next;
};

void insertEntry(struct entry *addEntry, struct entry *positionEntry)
{
    addEntry->last = positionEntry;
    addEntry->next = positionEntry->next;

    positionEntry->next = addEntry;
    (addEntry->next)->last = addEntry;

    return;
}

void removeEntry(struct entry *removeOne)
{
    (removeOne->last)->next = removeOne->next;
    (removeOne->next)->last = removeOne->last;

    return;
}

int main(void)
{
    struct entry n1, n2, n3, n4, *startEntry;

    void insertEntry(struct entry *addEntry, struct entry *positionEntry);
    void removeEntry(struct entry *removeOne);

    n1.last = 0;
    n2.last = &n1;
    //n3.last = &n2;
    n4.last = &n2;

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;

    n1.next = &n2;
    n2.next = &n4;
    //n3.next = &n4;
    n4.next = 0;

    startEntry = &n1;
    while(startEntry != 0)
    {
        printf("%i\n", startEntry->value);
        startEntry = startEntry->next;
    }

    printf("\n\n");

    startEntry = &n4;
    while(startEntry != 0)
    {
        printf("%i\n", startEntry->value);
        startEntry = startEntry->last;
    }


    printf("\n\n");

    insertEntry(&n3, &n2);

    startEntry = &n1;
    while(startEntry != 0)
    {
        printf("%i\n", startEntry->value);
        startEntry = startEntry->next;
    }

    printf("\n\n");

    startEntry = &n4;
    while(startEntry != 0)
    {
        printf("%i\n", startEntry->value);
        startEntry = startEntry->last;
    }

    printf("\n\n");

    removeEntry(&n3);

    startEntry = &n1;
    while(startEntry != 0)
    {
        printf("%i\n", startEntry->value);
        startEntry = startEntry->next;
    }

    printf("\n\n");

    startEntry = &n4;
    while(startEntry != 0)
    {
        printf("%i\n", startEntry->value);
        startEntry = startEntry->last;
    }


    return 0;
}
