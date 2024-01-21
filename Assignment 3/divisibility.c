#include<stdio.h>
#include<math.h>

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%5==0 && n%8==0){
        printf("%d is divisible by 5 and 8",n);
    } else if(n%5==0 || n%8==0){
        printf("%d is divisible by 5 or 8",n);
    } else {
        printf("%d is neither divisible by 5 nor 8",n);
    }

    return 0;
}