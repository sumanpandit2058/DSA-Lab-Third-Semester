/*WAP to remove the duplicate in sorted circular single linked list.*/
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

void duplicate()
{
    struct node *temp=head,*temp1,*temp2;
    do
    {
    
    while(temp->data!=temp->next->data)
    {
        temp=temp->next;
    }
    temp1=temp->next;

    while(temp->data==temp1->data)
    {
        temp->next=temp1->next;
        temp2=temp1;
        temp1=temp1->next;
        free(temp2);      
    }
    temp=temp->next;
    }while(temp->next!=head);


  
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
    duplicate();
    printf("\n");
    printlist();
}
