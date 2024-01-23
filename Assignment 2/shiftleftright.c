#include<stdio.h>
#include<math.h>

int main(){

    int a,b,c,d,e;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("How many digits do you want to shift left? ");
    scanf("%d",&b);
    printf("How many digits do you want to shift right? ");
    scanf("%d",&c);

    d=a<<b;
    e=a>>c;
    printf("%d when shifted left %d digits = %d\n",a,b,d);
    printf("%d when shifted right %d digits = %d",a,c,e);

    return 0;
}