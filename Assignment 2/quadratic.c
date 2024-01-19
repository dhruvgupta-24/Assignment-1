#include<stdio.h>
#include<math.h>

int main (){

    float a,b,c,d,x,y;
    printf("Enter the coefficient of x^2: ");
    scanf("%f",&a);
    printf("Enter the coefficient of x: ");
    scanf("%f",&b);
    printf("Enter the constant value: ");
    scanf("%f",&c);

    d=(b*b)-(4*a*c);
    x=(-b+sqrt(d))/(2*a);
    y=(-b-sqrt(d))/(2*a);
    printf("1st root of quadratic equation (%f)x^2+(%f)x+(%f)=%f\n",a,b,c,x);
    printf("2nd root of quadratic equation (%f)x^2+(%f)x+(%f)=%f",a,b,c,y);

    return 0;
}