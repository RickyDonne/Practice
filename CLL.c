#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} link;

void print_list (link *last);
void addtoempty (link **last, int data);
void addafter (link **last, int data, int key);
void addBegin (link **last, int data);
void addend (link **last, int data);

int main()
{
    link *last = NULL;

    addtoempty(&last, 10);
    addBegin(&last, 5);
    addend(&last, 20);
    addafter(&last, 15, 10);
    print_list(last);

    return 0;
}

void addafter(link **last, int data, int key)
{
    if (*last == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    link *temp, *p;
    p = (*last)->next;
    do
    {
        if (p->data == key)
        {
            temp = (link*)malloc(sizeof(link));
            temp->data = data;
            temp->next = p->next;
            p->next = temp;

            if (p == *last)
                *last = temp;
        }
        p = p->next;
    }
    while (p != (*last)->next);
    printf("Not present in the list!\n");
}

void addend(link **last, int data)
{
    if (last == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    link *new_node = (link*)malloc(sizeof(link));
    new_node->data = data;
    new_node->next = (*last)->next;
    (*last)->next = new_node;
    *last = new_node;
}

void addBegin(link **last, int data)
{
    if (last == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    link *new_node = (link*)malloc(sizeof(link));
    new_node->data = data;
    new_node->next = (*last)->next;
    (*last)->next = new_node;
}

void print_list(link *last)
{
    link *head;

    if (last == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    head = last->next;
    printf("CLL is: ");
    do
    {
        printf("%d->", head->data);
        head = head->next;
    }
    while (head != last->next);
    printf("NULL\n");
}

void addtoempty(link **last, int data)
{
    if (last == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    link *new_node = (link*)malloc(sizeof(link));
    new_node->data = data;
    (*last) = new_node;
    (*last)->next = (*last);
}
