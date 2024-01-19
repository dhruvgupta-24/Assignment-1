#include<stdio.h>

int main(){

    int a;
    int b;
    int c;
    printf("Enter value of 'a': ");
    scanf("%d",&a);
    printf("Enter value of 'b': ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
    printf("Swapped value of 'a'=%d\n",a);
    printf("Swapped value of 'b'=%d",b);

    return 0;
}