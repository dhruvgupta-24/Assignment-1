#include<stdio.h>
#include<math.h>

int main(){

    char c;
    int i,size;
    long int l;
    float f;
    double d;
    
    printf("Enter a character: ");
    scanf("%c",&c);
    size=sizeof(c);
    printf("The size of %c in bytes is %d\n",c,size);

    printf("Enter a integer: ");
    scanf("%d",&i);
    size=sizeof(i);
    printf("The size of %d in bytes is %d\n",i,size);

    printf("Enter a big integer: ");
    scanf("%ld",&l);
    size=sizeof(l);
    printf("The size of %ld in bytes is %d\n",l,size);

    printf("Enter a decimal number: ");
    scanf("%f",&f);
    size=sizeof(f);
    printf("The size of %f in bytes is %d\n",f,size);

    printf("Enter a big decimal number: ");
    scanf("%lf",&d);
    size=sizeof(d);
    printf("The size of %lf in bytes is %d",d,size);

    return 0;
}