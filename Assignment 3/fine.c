#include<stdio.h>
#include<math.h>

int main(){

    int late,fine;
    printf("How many days late are you to return the book? ");
    scanf("%d",&late);

    if(late==0){
        printf("No fine!");
    } else if(late>0 && late<=5){
        printf("Your fine 50 Paisa.");
    } else if(late>=6 && late<=10){
        printf("Your fine is 1 Rupee");
    } else if(late>=10 && late<=29){
        printf("Your fine is 5 Rupees");
    } else if(late>=30){
        printf("Your Membership has been canceled");
    } else {
        printf("Invalid number of days");
    }

    return 0;
}