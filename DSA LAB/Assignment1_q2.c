// WAP to reverse the content of an array of n elements
#include<stdio.h>
 
int main()
{
int a[20],i,n,t;
printf("How many elements:");
scanf("%d",&n);

printf("Enter the Array:");
 
for(i=0;i<n;++i)
scanf("%d",&a[i]);
 for(int i = 0; i<n/2; i++){
        t= a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = t;
    }
for(i=0;i<n;++i)
printf("%d  ",a[i]);
 
return 0;
}