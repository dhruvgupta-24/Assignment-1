#include<stdio.h>
#include<math.h>

int main(){

    float rad,area;
    printf("Enter the radius of circle: ");
    scanf("%f",&rad);
    area=3.14*rad*rad;
    printf("The Area of the circle is: %f",area);

    return 0;
}