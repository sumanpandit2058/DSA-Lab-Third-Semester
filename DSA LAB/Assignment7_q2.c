/*To reverse dll*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int info;
    struct node *next;
};
struct node *head = NULL, *temp, *last;
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
void end()
{
    temp = head;
    while (temp->next != NULL)
    {

        temp = temp->next;
        last = temp;
    }
}
void reverse()
{
    temp = last;
    printf("Reversed of Linked List \n");
    while (temp != NULL)
    {
        printf("%d", temp->info);
        if (temp->prev!= NULL)
        {
            printf(" -> ");
        }
        temp = temp->prev;
    }
}
int main()
{
    create();
    printf("\n\n");
    display();
    printf("\n \n");
    end();
    reverse();
}