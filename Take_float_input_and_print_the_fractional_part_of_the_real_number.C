#include<stdio.h>
int main(){
    float x;
    int y;
    printf("Enter a float number\n");
    scanf("%f",&x);
    y = (int)x;
    float z = x - y;
    printf("The fractional part of the number is :%f\n",z);
    return 0;
}