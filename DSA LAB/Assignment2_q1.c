/*1. WAP to store n employees data such as employee name, gender, designation, department, basic pay. Calculate
the gross pay of each employees as follows:
Gross pay=basic pay + HR+ DA
HR-25% of basic, DA=75% of basic.*/
#include <stdio.h>
struct employee
{
    char name[50];
    char gender[50];
    char designation[50];
    char department[50];
    int basic_pay;
    int HR;
    int DA;
    int gross_pay;
};
int main()
{
    int n, i;
    printf("How many employees data do you want to enter? ");
    scanf("%d", &n);
    struct employee person[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter name of employee ");
        scanf("%s", &person[i].name);
        printf("Enter gender of employee ");
        scanf("%s", &person[i].gender);
        printf("Enter designation of employee ");
        scanf("%s", &person[i].designation);
        printf("Enter department of employee ");
        scanf("%s", &person[i].department);
        printf("Enter basic pay of employee ");
        scanf("%d", &person[i].basic_pay);
        person[i].HR = 0.25 * person[i].basic_pay;
        person[i].DA = 0.75 * person[i].basic_pay;
        person[i].gross_pay = person[i].basic_pay + person[i].HR + person[i].DA;
    }
    printf("NAME\t");
    printf("GENDER\t");
    printf("DESIGNATION\t");
    printf("DEPARTMENT\t");
    printf("GROSS PAY\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\t", person[i].name);
        printf("%s\t", person[i].gender);
        printf("%s\t\t", person[i].designation);
        printf("%s\t\t", person[i].department);
        printf("%d\n", person[i].gross_pay);
    }

    return 0;
}
