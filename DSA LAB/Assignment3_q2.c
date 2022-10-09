/*2. WAP using function that adds given two polynomials f(x) = h(x) + g(x)*/
#include <stdio.h>
#include <stdlib.h>

#define MAXDEGREE 90 
typedef struct
{
    int deg; //degree
    int coef[MAXDEGREE]; 
} poly;

int main()
{
    poly polynomialA;
    poly polynomialB;
    int i,j, maxdeg; 
    int terminator; 

    printf("\nAdd polynomials in an array\n\n_______________\n\n"
           "Enter the degree of the first polynomial: ");
    scanf("%d", &polynomialA.deg);
    printf("\nEnter the degree of the second polynomial: ");
    scanf("%d", &polynomialB.deg);

    if(polynomialA.deg > polynomialB.deg) {
        maxdeg = polynomialA.deg;
    } else if (polynomialA.deg < polynomialB.deg) {
        maxdeg = polynomialB.deg;
        } else {
            maxdeg = polynomialA.deg;
        }


    printf("\nEnter the coefficients of a, from the largest power of X including 0s for blank fields\n...\n");

    for(i=0; i<=maxdeg; i++) {
        scanf("%d", &polynomialA.coef[i]);
    }
    printf("\n\nNow enter the coefficients of b, from the largest power of X including 0s for blank fields\n...\n");
    for(j=0; j<=maxdeg; j++) {
        scanf("%d", &polynomialB.coef[j]);
    }
    printf("\n\n...");


   addpolynomials(polynomialA, polynomialB);

    scanf("%d", &terminator);
    return 0;

}

void addpolynomials(poly a, poly b)
{
    poly c; 
    int y,z; 
    int maxdeg; 

    if(a.deg > b.deg) {
        maxdeg = a.deg;
    } else
    {
        maxdeg = b.deg;
    }

    c.deg = maxdeg;

    
    for(y =0; y <= maxdeg; y++) {
        c.coef[y] = a.coef[y] + b.coef[y];
    }

 

    printf("\n_____\nAnd the resultant polynomial is \n");

    for(z = 0; z<=maxdeg; z++) {
        printf("%i  ", c.coef[z]);
    }
    printf("\nAnd its degree is %d\n", c.deg);

}