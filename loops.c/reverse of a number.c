#include<stdio.h>
int main(){
    int n;
    printf("enter the number to reverse");
    scanf("%d",&n);
    int r=0;
    while(n>0){
    r=r+(n%10);
    r=r*10;
    n=n/10;
    }
    r=r/10;
    printf("%d is the reverse of digits",r);
    return 0;
}