/*WAP to convert a given singly linked to circular list.*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *last;
void printlist()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}
void printcircular()
{
    struct node *temp=head;
    do
    {
       printf("%d\t", temp->data);
       temp=temp->next;
    } while (temp!=head);
    
}
void createlist()
{
    int i, n;
    printf("How many nodes do you want to create? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct node *temp = head;
        struct node *current;
        current = (struct node *)malloc(sizeof(struct node));
        current->next = NULL;
        printf("Enter data: ");
        scanf("%d", &current->data);
        if (head == NULL)
        {
            head = temp = current;
        }
        else
        {
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = current;
        }
    }
    struct node *temp = head, *last;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    printf("\n SINGLE LINKED LIST: \n");
    printlist();
    printf("\nHead=%d", head);
    printf("\nLast->next=%d", temp->next);
    last = temp;
    last->next = head;
    printf("\n CIRCULAR LINK LIST: \n");
    printcircular();
    printf("\nHead=%d", head);
    printf("\nLast->next=%d", last->next);
}
int main()
{
    createlist();
    return 0;
}