#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,d,e,f;
    int g;
    printf("Enter a number you want sin of(in rad): ");
    scanf("%f",&a);
    printf("Sin(%.3f) = %.3f\n",a,sin(a));

    printf("Enter a number you want cos of(in rad): ");
    scanf("%f",&b);
    printf("Cos(%.3f) = %.3f\n",b,cos(b));

    printf("Enter a number you want log of: ");
    scanf("%f",&c);
    printf("Log(%.3f) = %.3f\n",c,log(c));

    printf("Enter a number you want and its power: ");
    scanf("%f %d",&d,&g);
    printf("%.2f^%d = %.2f\n",d,g,pow(d,g));

    printf("Enter a number you want root of: ");
    scanf("%f",&e);
    printf("Root of %.2f = %.2f",e,sqrt(e));

    return 0;
}