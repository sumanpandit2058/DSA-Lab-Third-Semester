/*3. Store information of 10 students using structure*/
#include<stdio.h>
struct student {
    char name[50];
    int age;
    int roll;
    char branch[50];
}s[10];
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter your first name ");
        scanf("%s", &s[i].name);
        printf("Enter your age ");
        scanf("%d", &s[i].age);
        printf("Enter your Roll Number ");
        scanf("%d", &s[i].roll);
        printf("Enter your branch");
        scanf("%s", &s[i].branch);
    }
    for(i=0;i<10;i++)
    {
        printf("%s  ", s[i].name);
        printf("%d  ", s[i].age);
        printf("%d  ", s[i].roll);
        printf("%s\n", s[i].branch);
    }
    

    return 0;
}