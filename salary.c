#include<stdio.h>
#include<math.h>

int main(){

    float basic,da,ta,salary;
    printf("Enter the basic salary: ");
    scanf("%f",&basic);
    da=0.1*basic;
    ta=0.12*basic;
    salary=basic+da+ta;
    printf("The gross salary is: %f",salary);

    return 0;
}