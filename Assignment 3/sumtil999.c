#include<stdio.h>
#include<math.h>

int main(){

    int a;
    int sum=0;
    do{
        printf("Enter a integer: ");
        scanf("%d",&a);
        sum=sum+a;
    } while(a!=-999);
    printf("Sum of numbers entered before -999 = %d",sum+999);

    return 0;
}