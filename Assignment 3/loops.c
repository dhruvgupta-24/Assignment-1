#include<stdio.h>
#include<math.h>

int main(){

    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    // Factorial
    int fac=1;
    for(int i=1;i<=a;i++){
        fac=fac*i;
    } 
    printf("Factorial of %d = %d\n",a,fac);

    // Prime or not
    int i;
    for(i=2;i<a;i++){
        if(a%i==0){
            printf("%d is not a prime number\n",a);
            break;
        } 
    } if(a%i != 0){
        printf("%d is a prime number",a);
    }

    // X raised to power n (DOUBT)

    // Armstrong Number
    int b,c,d,e;
    printf("Specify the number of digits in your number: ");
    scanf("%d",&b);

    for(i=1;i<=500;i++){
        c=i%10;
        d=i%100/10;
        e=i%1000/100;
        if(pow(c,b)+pow(d,b)+pow(e,b)==a){
            printf("%d\n",a);
        }
    }

    return 0;
}