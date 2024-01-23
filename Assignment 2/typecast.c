#include<stdio.h>
#include<math.h>

int main(){

    int a,b,c;
    float avg;
    printf("Enter 3 integers:\n");
    scanf("%d %d %d",&a,&b,&c);

    avg=(float)(a+b+c)/3;
    printf("Average of %d, %d, %d = %.3f",a,b,c,avg);

    return 0;
}