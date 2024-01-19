#include<stdio.h>
#include<math.h>

int main(){

   int age;
   printf("Enter your age: ");
   scanf("%d",&age);

   age>=18 ? printf("You can drive"):printf("You cannot drive");

    return 0;
}