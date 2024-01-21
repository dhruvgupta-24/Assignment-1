#include<stdio.h>
#include<math.h>

int main(){

    float a,b,c,d,e,f,g,h,i,j,avg,standev;
    printf("Enter 1st number: ");
    scanf("%f",&a);
    printf("Enter 2nd number: ");
    scanf("%f",&b);
    printf("Enter 3rd number: ");
    scanf("%f",&c);
    printf("Enter 4th number: ");
    scanf("%f",&d);
    printf("Enter 5th number: ");
    scanf("%f",&e);

    // Average
    avg=(a+b+c+d+e)/5;
    printf("Average: %f\n",avg);

    // Max
    if(a>b && a>c && a>d && a>e){
        printf("%f is the maximum\n",a);
    } else if(b>a && b>c && b>d && b>e){
        printf("%f is the maximum\n",b);
    } else if(c>a && c>b && c>d && c>e){
        printf("%f is the maximum\n",c);
    } else if(d>a && d>b && d>c && d>e){
        printf("%f is the maximum\n",d);
    } else {
        printf("%f is the maximum\n",e);
    }

    // Min
    if(a<b && a<c && a<d && a<e){
        printf("%f is the minimum\n",a);
    } else if(b<a && b<c && b<d && b<e){
        printf("%f is the minimum\n",b);
    } else if(c<a && c<b && c<d && c<e){
        printf("%f is the minimum\n",c);
    } else if(d<a && d<b && d<c && d<e){
        printf("%f is the minimum\n",d);
    } else {
        printf("%f is the minimum\n",e);
    }

    // Standard Deviation
    f=pow(a-avg,2);
    g=pow(b-avg,2);
    h=pow(c-avg,2);
    i=pow(d-avg,2);
    j=pow(e-avg,2);
    standev=sqrt((f+g+h+i+j)/4);
    printf("Standard Devation is %f",standev);

    return 0;
}