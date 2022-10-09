/*WAP to count the total number of nodes in a circular single linked list. If count is greater than the 
certain given value then delete the remaining node from the 1st position*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *last;
void create()
{
    int n, i;
    printf("How many nodes do you want to create? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        struct node *temp = head, *current;
        current = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &current->data);
        current->next = NULL;
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
            last = current;
            temp->next = current;
        }
    }
    last->next = head;
}

void countanddelete()
{
    struct node *temp = head, *temp1;
    
    int count = 0, num, i;
    do
    {
        count++;
        temp = temp->next;
    } while (temp != head);
    printf("\n\nTotal number of nodes are: %d", count);
    printf("\nEnter expected number: ");
    scanf("%d", &num);

    if (count > num)
    {
        do
        {
           temp=temp->next;
        } while (temp->next!=head);
        for (i = 0; i < count - num; i++)
        {
            temp1=head;
            head = head->next;  
            free(temp1);
        }
        temp->next=head;
    }
}
void printlist()
{
    struct node *temp = head;
    do
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    } while (temp != head);
}
int main()
{
    create();
    printlist();
    countanddelete();
    printlist();
}
