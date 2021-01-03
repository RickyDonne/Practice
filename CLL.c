#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} link;

void addToEmpty(link **last, int data);
void traverse(link *last);

int main ()
{
    link *last = NULL;

    addToEmpty(&last, 10);


    traverse(last);

    return 0;
}

void traverse(link *last)
{
    link *p;

    if (last == NULL)
    {
        printf("List is empty.");
        return;
    }

    p = last -> next;
    do
    {next
        printf("%d->", p->data);
        p = p -> next;

    }
    while(p != last->next);
    printf("NULL\n");
}

void addToEmpty(link **last, int data)
{
    if (*last != NULL)
      return;

    link *temp =(link*)malloc(sizeof(link));
    temp -> data = data;
    *last = temp;
    (*last)->next = (*last);
}
