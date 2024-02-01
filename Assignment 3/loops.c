#include<stdio.h>
#include<math.h>

int fibonacci(int fib);

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
    
    // Check if the input integer is an Armstrong number or not?
    int b,c,d,e,f,g,h,j;
    printf("Enter a number: ");
    scanf("%d",&b);
    printf("Specify the number of digits in your number: ");
    scanf("%d",&h);


    c=b%10;
    d=b%100/10;
    e=b%1000/100;
    f=b%10000/1000;
    g=b%100000/10000;
    j=b%1000000/100000;
    
    if (pow(c,h)+pow(d,h)+pow(e,h)+pow(f,h)+pow(g,h)+pow(j,h)==b){
        printf("%d is a Armstrong number\n",b);
    } else {
        printf("%d is not an Armstrong number\n",b);
    }

    // Range of set of entered nos. by finding smallest and largest (DOUBT)

    // Multiplication table
    int mul;
    for(i=0;i<=10;i++){
        mul=a*i;
        printf("%d x %d = %d\n",a,i,mul);
    }

    // HCF of two numbers (DOUBT)

    // GCD of two numbers (DOUBT)

    // Generate Fibonacci series (DOUBT)
    int fib;
    printf("Enter the number of terms you want in Fibonacci series: ");
    scanf("%d",&fib);
    for(int i=0;i<fib;i++){
        printf("%d\n",fibonacci(i));
    }

    return 0;
}

int fibonacci(int fib){
    if(fib==0){
        return 0;
    } if(fib==1){
        return 1;
    }
    int fibo = fibonacci(fib-1) + fibonacci(fib-2);
    return fibo;
}