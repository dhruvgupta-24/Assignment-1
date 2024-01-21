#include<stdio.h>
#include<math.h>

int main(){

    float a,b,sum,sub,mul,div;
    char op;
    printf("Enter 1st number: ");
    scanf("%f",&a);
    printf("Enter 2nd number: ");
    scanf("%f",&b);
    printf("Enter operation (+,-,*,/): ");
    scanf("%c",&op);


    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    switch(op){
        case '+': printf("Sum=%f",sum);
            break;
        case '-': printf("Subtraction=%f",sub);
            break;
        case '*': printf("Multiplication=%f",mul); 
            break;
        case '/': printf("Division=%f",div);
            break;
    }

    return 0;
}