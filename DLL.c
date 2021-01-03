#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} link;

void append (link **head, int data);
void push(link **head, int data);
void print_list(link *head);

int main()
{
    link *head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 50);

    push(&head, 5);

    print_list(head);
    return 0;
}

void append (link **head, int data)
{
    link *new_node = (link*)malloc(sizeof(link));
    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        new_node->prev = NULL;
        return;
    }
    link *last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
}

void push(link **head, int data)
{
    link *new_node = (link*)malloc(sizeof(link));
    new_node->data = data;
    new_node->next = *head;
    new_node->prev = NULL;
    *head = new_node;
}

void print_list(link *head)
{
    printf("Linked list is: ");
    link *temp = head;
    link *last;
    while (temp != NULL)
    {
        last = temp;
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    printf("Reversed Linked list is: ");
    while(last != NULL)
    {
        printf("%d->", last->data);
        last = last->prev;
    }
    printf("NULL\n");
}
