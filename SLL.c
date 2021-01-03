//This is a singly linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} link;

void append(link **head_ref, int data);
void push (link **head_ref, int data);
void addatpos (link **head_ref, int data, int pos);
void delatpos (link **head_ref, int pos);
void revi (link **head_ref);
void revr (link *head);
void print_list(link *head);

int main()
{
    link *head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 40);
    append(&head, 80);

    push(&head, 5);
    push(&head, 1);

    addatpos(&head, 60, 6);
    addatpos(&head, 0, 1);

    delatpos(&head, 1);
    delatpos(&head, 2);

    print_list(head);

    revi(&head);
    print_list(head);

    printf("Linked list is: ");revr(head);printf("NULL\n");
    return 0;
}

void revr (link *head)
{
    link *temp = head;

    if (temp == NULL) return;

    revr (temp->next);
    printf("%d->", temp->data);
}

void revi (link **head_ref)
{
    link *current = *head_ref, *prev = NULL, *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

void delatpos (link **head_ref, int pos)
{
    link *current = (*head_ref);
    if (pos == 1)
    {
        (*head_ref) = current->next;
        free(current);
        return;
    }
    link *prev = NULL;
    while (pos != 1)
    {
        prev = current;
        current = current->next;
        --pos;
    }
    prev->next = current->next;
    free(current);
}

void addatpos (link **head_ref, int data, int pos)
{
    link *new_node = (link*)malloc(sizeof(link));
    new_node->data = data;

    if (pos == 1)
    {
        new_node->next = *head_ref;
        *head_ref = new_node;
        return;
    }
    link *prev = *head_ref;
    --pos;
    while (pos != 1)
    {
        prev = prev->next;
        --pos;
    }
    new_node->next = prev->next;
    prev->next = new_node;
}

void push (link **head_ref, int data)
{
    link *new_node = (link*)malloc(sizeof(link));
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void append(link **head_ref, int data)
{
    link *new_node = (link*)malloc(sizeof(link));
    new_node->data = data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    link *last = *head_ref;
    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
}

void print_list(link *head)
{
    printf("Linked list is: ");
    link *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
