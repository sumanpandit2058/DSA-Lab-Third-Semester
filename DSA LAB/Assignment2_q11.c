/*4. WAP to find the largest number and counts the occurrence of the largest
number in an array of n integers using a single loop.*/

#include <stdio.h> 
int main() 
{int n; 
printf("Enter the number of elements of the array:\n"); 
scanf("%d", &n); 
int array[n]; 
printf("Enter the elements of the array:\n"); 
int i; 
for (i = 0; i < n; i++) 
{ 
scanf("%d", &array[i]); 
}
int max = 0; 
int count = 0; 
for (i = 0; i < n; i++) 
{ 
if (array[i] > max) 
{ 
max = array[i]; 
count = 1; 
}
else if (array[i] == max) 
{ 
count++; 
} 
}
printf("\n\nThe largest number is %d and it appears %d times in the array\n", max, count); 
return 0; 
}
