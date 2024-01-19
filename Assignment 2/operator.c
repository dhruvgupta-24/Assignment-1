#include<stdio.h>
#include<math.h>

int main(){

    int a;
    int b;
    int c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);

    a += b;
    printf("%d\n",a);
    a -= b;
    printf("%d\n",a);
    a *= b;
    printf("%d\n",a);
    a /= b;
    printf("%d\n",a);
    a %= b;
    printf("%d\n",a);

    return 0;
}