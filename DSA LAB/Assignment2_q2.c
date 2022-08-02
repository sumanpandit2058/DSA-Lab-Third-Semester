/*2. WAP to add two distances (in km-meter) by passing structure to a function.*/
#include <stdio.h>
#include <string.h>

struct Distance
{
    int km;
    int m;
} d1, d2, result;

int main()
{
    printf("enter first distance \n");
    printf("enter km: ");
    scanf("%d", &d1.km);
    printf("enter m: ");
    scanf("%d", &d1.m);

    printf("enter second distance \n");
    printf("enter km: ");
    scanf("%d", &d2.km);
    printf("enter m: ");
    scanf("%d", &d1.m);

    result.km = d1.km + d2.km;
    result.m = d1.m + d2.m;

    while (result.m >= 1000)
    {
        result.m = result.m - 1000;
        ++result.km;
    }

    printf("the distance is %d km and %d meter", result.km, result.m);
    return 0;
}
