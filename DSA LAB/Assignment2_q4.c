/*4. Add two complex numbers by passing structures to a function*/
#include <stdio.h>
struct addition
{
    int real;
    int imaginary;
} num1, num2;
void student(int real1, int real2, int imaginary1, int imaginary2)
{
    printf("The sum is %d + %d i", real1 + real2, imaginary1 + imaginary2);
}
int main()
{
    printf("Enter real part of first number ");
    scanf("%d", &num1.real);
    printf("Enter imaginary part of first number ");
    scanf("%d", &num1.imaginary);
    printf("Enter real part of second number ");
    scanf("%d", &num2.real);
    printf("Enter imaginary part of second number ");
    scanf("%d", &num2.imaginary);
    student(num1.real, num2.real, num1.imaginary, num2.imaginary);
    return 0;
}