#include<stdio.h>
#include<math.h>

int main(){

    int a;
    int b;
    float c;
    float d;
    printf("Enter a number to root: \n");
    scanf("%d",&a);
    printf("Enter the root: ");
    scanf("%d",&b);
    d=1/b;
    c=pow(a,d);
    printf("The root of the number is: %f",c);

    return 0;
}