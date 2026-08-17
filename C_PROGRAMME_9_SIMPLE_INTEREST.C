#include<stdio.h>
int main(){
    float principal,rate,time,simple_interest ;
    printf("Enter Principal :");
    scanf("%f",&principal);
    printf("Enter Rate :");
    scanf("%f",&rate);
    printf("Enter Time :");
    scanf("%f",&time);
    simple_interest = (principal * rate * time) / 100 ;
    printf("Your Simple Interest is : %f",simple_interest);
    return 0;
}