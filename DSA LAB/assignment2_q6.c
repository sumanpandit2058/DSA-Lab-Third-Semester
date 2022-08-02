/*6. Store information of n students using structures and Dynamic Memory
Allocation.*/
#include<stdio.h>
struct student {
    char name[50];
    int age;
    int roll;
    char branch[50];
};
int main()
{
    int n,i;
    printf("How many student's data do you want? ");
    scanf("%d", &n);
    struct student s[n];    
    for(i=0;i<n;i++)
    {
        printf("Enter your first name ");
        scanf("%s", &s[i].name);
        printf("Enter your age ");
        scanf("%d", &s[i].age);
        printf("Enter your Roll Number ");
        scanf("%d", &s[i].roll);
        printf("Enter your branch ");
        scanf("%s", &s[i].branch);
    }
    for(i=0;i<n;i++)
    {
        printf("%s\t", s[i].name);
        printf("%d\t", s[i].age);
        printf("%d\t", s[i].roll);
        printf("%s\n", s[i].branch);
    }
    

    return 0;
}