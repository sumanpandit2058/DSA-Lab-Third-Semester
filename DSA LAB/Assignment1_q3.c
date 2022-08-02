// WAP to search an element in an array of n numbers
#include <stdio.h>

int main()
{
    int n, i, r, arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the item to be searched: ");
    scanf("%d", &r);

    i = 0;
   for (i; i<n; ++i){
    {
        if (arr[i]= r){
            break;
        }
    }
   }
   if (i<n){
    printf("Element found %d", arr[i]);
   }
   else{
    printf("element not found");
   }
    return 0;
}