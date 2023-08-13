#include<stdio.h>
int main(){
    int n;
    printf("enter the number to count");
    scanf("%d",&n);
    int count=0;
    while(n>0){
    n=n/10;
    count++;
    }
    printf("%d is the number of digits",count);
    return 0;
}