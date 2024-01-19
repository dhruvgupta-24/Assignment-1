#include<stdio.h>
#include<math.h>

int main(){

    float principal,rate,time,interest;
    printf("Enter the principal amount: ");
    scanf("%f",&principal);
    printf("Enter the Rate of Interest: ");
    scanf("%f",&rate);
    printf("Enter the Time Span: ");
    scanf("%f",&time);

    interest=(principal*rate*time)/100;
    printf("The Simple Interest is: %f",interest);

    return 0;
}