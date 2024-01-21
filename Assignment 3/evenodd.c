#include<stdio.h>
#include<math.h>

int main(){

    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    // (a) even or odd using (a) if-else
    if(a%2==0){
        printf("%d is Even\n",a);
    } else {
        printf("%d is Odd\n",a);
    }
    
    // (a) even or odd using (b) ternary operator
    a%2==0 ? printf("%d is Even\n",a) : printf("%d is Odd\n",a);

    // (b) positive or negative using (a) if-else
    if(a>0){
        printf("%d is Positive\n",a);
    } else if(a<0) {
        printf("%d is Negative\n",a);
    } else {
        printf("%d is Zero\n",a);
    }

    // (b) positive or negative using (b) ternary operator
    a>0 ? printf("%d is Positive\n",a) : ((a<0) ? printf("%d is Negative\n",a) : printf("%d is Zero\n",a));

    return 0;
}