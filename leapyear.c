#include<stdio.h>
int main(){
    int n;
    printf("Enter the YEAR:");
    scanf("%d",&n);
    if(n%4==0 &&n%100!=0){
        printf("LEAP YEAR");
    }
    else{
        printf("NOT LEAP YEAR");
    }
return 0;
}
