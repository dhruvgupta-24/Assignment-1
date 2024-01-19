#include<stdio.h>
#include<math.h>

int main(){

    float marks;
    printf("Enter your marks: ");
    scanf("%f",&marks);

    marks<=33 ? printf("You Failed") : printf("You Passed");

    return 0;
}