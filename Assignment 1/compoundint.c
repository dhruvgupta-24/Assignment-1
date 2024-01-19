#include<stdio.h>
#include<math.h>

int main(){

    float principal,rate,time,n,interest;
    printf("Enter the Principal Amount: ");
    scanf("%f",&principal);
    printf("Enter the Rate of Interest: ");
    scanf("%f",&rate);
    printf("Enter the Time Span: ");
    scanf("%f",&time);
    printf("Enter no. of times interest applied per year: ");
    scanf("%f",&n);

    interest=principal*pow(1+(rate/(100*n)),time*n);
    printf("The Coumpund Interest is: %f",interest);

    return 0;
}