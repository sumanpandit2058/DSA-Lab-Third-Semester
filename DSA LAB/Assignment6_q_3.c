/*WAP to swap two nodes if 1st given key is greater than 2nd given key in circular single linked list;
otherwise no noting*/
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
void swap()
{
    int a, b, temp;
    struct node *tempa = head, *tempb = head;
    printf("\nEnter first data: ");
    scanf("%d", &a);
    printf("Enter second data: ");
    scanf("%d", &b);
    if (a > b)
    {
        while (tempa->data != a)
        {

            tempa = tempa->next;
        }
        while (tempb->data != b)
        {

            tempb = tempb->next;
        }
        temp = tempa->data;
        tempa->data = tempb->data;
        tempb->data = temp;
    }
    else
    {
        printf("Operation not possible.\n");
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
    swap();
    printlist();
}
