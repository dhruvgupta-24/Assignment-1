#include<stdio.h>
#include<math.h>

int main(){

    int a,b,c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);

    // Method (a)
    if(a>b && a>c){
        printf("%d is the greatest integer",a);
    } else if(b>a && b>c){
        printf("%d is the greatest integer",b);
    } else {
        printf("%d is the greatest integer\n",c);
    }

    // Method (b)
    int greatest;
    greatest = a>b ? ((a>c)?a:c):((b>c)?b:c);
    printf("%d is the greatest integer",greatest);

    return 0;
}