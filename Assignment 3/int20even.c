#include<stdio.h>
#include<math.h>

int main(){

    int a, even=0;
    for(int i=1;i<=20;i++){
        printf("Enter a integer: ");
        scanf("%d",&a);
        if (a%2==0) {
            even = even + 1;
        }


        // Count even integers (DOUBT)
    }

    printf("You entered %d even numbers", even);

    return 0;
}