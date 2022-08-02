/*1. WAP to print all permutations of a given string using pointers.*/
#include <stdio.h> 
#include <string.h> 
void swap (char *x, char *y) 
{ 
char temp; 
temp = *x; 
*x = *y; 
*y = temp; 
}
void permute(char *a, int i, int n) 
{ 
int j; 
if (i == n) 
printf("%s\n", a); 
else { 
for (j = i; j <= n; j++) 
{ 
swap((a + i), (a + j)); 
permute(a, i + 1, n); 
swap((a + i), (a + j)); 
} 
} 
}int main() 
{ 
char a[20]; 
int n; 
printf("Enter a string: "); 
scanf("%s", a); 
n = strlen(a); 
printf("All Permutaions of the given string are:\n"); 
permute(a, 0, n - 1); 
getchar(); 
return 0; 
} 