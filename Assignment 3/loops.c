#include<stdio.h>
#include<math.h>

int main(){

    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    // Factorial of number
    int fac=1;
    for(int i=1;i<=a;i++){
        fac=fac*i;
    } 
    printf("Factorial of %d = %d\n",a,fac);

    // Whether no. is prime or not
    int i;
    for(i=2;i<a;i++){
        if(a%i==0){
            printf("%d is not a prime number\n",a);
            break;
        } 
    } if(i==a){
        printf("%d is a prime number\n",a);
    }

    // X raised to power n (DOUBT)

    // Armstrong numbers between 1 to 500 (DOUBT)

    // Range of set of entered nos. by finding smallest and largest.

    // Multiplication table
    int mul;
    for(i=0;i<=10;i++){
        mul=a*i;
        printf("%d x %d = %d\n",a,i,mul);
    }

    // HCF of two numbers (DOUBT)

    // GCD of two numbers (DOUBT)

    // Generate Fibonacci series (DOUBT)
    
    return 0;
}