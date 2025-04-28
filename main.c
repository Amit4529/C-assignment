#include <stdio.h>
#include "header.h" 

int main() {
    int (*ptr_evenodd)(int);
    int (*ptr_factorial)(int);
    int (*ptr_prime)(int);

    ptr_evenodd = evenodd;
    ptr_factorial = factorial;
    ptr_prime = prime;

    int n,a,l;

    printf("Enter number to check even/odd :-\n");
    scanf("%d",&l);
    if(ptr_evenodd(l) == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }

    printf("Enter number to find factorial :- ");
    scanf("%d",&n);
    printf("%d\n", ptr_factorial(n));

    printf("Enter number to check prime :- ");
    scanf("%d",&a);
    if (ptr_prime(a) == 1){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }

    return 0;
}
