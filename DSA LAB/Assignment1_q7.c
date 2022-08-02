/*7. Let A be nXn square matrix array. WAP by using appropriate user defined
functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c)Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/
#include<stdio.h>
int no_nonzero(int n,int (*ptr)[n]){
int i,j,count=0;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(ptr[i][j]){
count++;
}
}
}
return count;
}
int sum(int n,int (*ptr)[n]){
int i,j,sum=0;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i<j){
sum+=ptr[i][j];
}
}
}
return sum;
}
void display_below_minor(int n,int (*ptr)[n]){
int i,j;
printf("\n*All elements below minor diagonal:\n");
for(i=1;i<n;i++){
for(j=1;j<n;j++){
if(j>=(n-i)&&j<n){
printf("%d ",ptr[i][j]);
}
}
}
}
int product_diagonal(int n,int (*ptr)[n]){
int i,j,product=1;
for(i=0;i<n;i++){
for(j=0;j<n;j++){
if(i==j){
product*=ptr[i][j];
}
}
}
return product;
}
int main(){
    int i,j,n;
    printf("What is the order of the matrix?:");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    printf("Enter element in row %d and column %d: ",i,j);
    scanf("%d",&a[i][j]);
    }
    }
    printf("\n*Total number of non zero elemenets is %d.\n",no_nonzero(n,a));
    printf("\n*Sum of elements above leading diagonal is %d.\n",sum(n,a));
    display_below_minor(n,a);
    printf("\n\n*The product of all diagonal elements is %d.",product_diagonal(n,a));
    return 0;
}