#include<stdio.h>
#include<math.h>

int main(){
    float a;
    float b;
    float c;

    printf("Enter 1st number: ");
    scanf("%f",&a);
    printf("Enter 2nd number: ");
    scanf("%f",&b);
    c = a+b;
    printf("Sum: %f\n",c);
    
    c=a-b;
    printf("Subtraction: %f\n",c);

    c=a*b;
    printf("Multiplictaion: %f\n", c);

    c=a/b;
    printf("Division: %f",c);
    

    return 0;
}