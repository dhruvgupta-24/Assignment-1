#include<stdio.h>
#include<math.h>

int main(){

    int a;
    do {
        printf("Enter a number: \n");
        scanf("%d",&a);
    } while (a<=100);
    printf("OOPS! You entered number greater than 100");

    return 0;
}