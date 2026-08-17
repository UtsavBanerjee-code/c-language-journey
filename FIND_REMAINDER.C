#include<stdio.h>
int main(){
    int a, b;
    printf("Enter 1st number");
    scanf("%d", &a);
    printf("Enter 2nd number");
    scanf("%d", &b);
    int r =a % b;
    printf("Remainder: %d\n", r);
    return 0;
}