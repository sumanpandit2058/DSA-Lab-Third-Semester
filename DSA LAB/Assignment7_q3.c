/*To delete duplicate in dll*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;
};
struct node *head = NULL, *temp;
void create()
{
    struct node *newNode;
    int choice = 1;
    while (choice != 0)
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the data : ");
        scanf("%d", &newNode->info);
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            newNode->prev = temp;
            temp->next = newNode;
            temp = newNode;
        }
        printf("Do you want to continue 0/1 : ");
        scanf("%d", &choice);
    }
}
void display()
{

    temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->info);
        if (temp->next != NULL)
        {
            printf(" -> ");
        }
        temp = temp->next;
    }
}
void duplicate()
{
    struct node *first;
    first = head;

    while (first->next != NULL)
    {
        if (first->info == first->next->info)
        {
            first->next = first->next->next;
        }
        else
        {
            first = first->next;
        }
    }
}
int main()
{
    create();
    printf("\n\n");
    printf("You Have Successfully Created The Linked List\n");
    display();
    printf("\n\n");
    printf("Deleting the Duplicate items\n");
    duplicate();
    display();
}