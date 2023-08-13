#include<stdio.h>
int main(){
    int a,b,power=1;
    printf("enter base");
    scanf("%d",&a);
    printf("enter the power");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        power=power*a;    
    }
    printf("%d to the power of %d is %d",a,b,power);
    return 0;
}