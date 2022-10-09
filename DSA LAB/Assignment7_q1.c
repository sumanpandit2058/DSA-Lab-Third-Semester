/*To create dll and display it*/
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
    printf("You Have Successfully Created The Linked List\n");
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
int main()
{
    create();
    display();
}