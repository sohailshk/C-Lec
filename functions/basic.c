#include<stdio.h>
int add(int a,int b){ //for power int q=pow(3,3)
    return a+b;
}
int main()
{
    printf("enter no.1:");
    scanf("%d",&a);
    scanf("enter no. 2");
    printf("%d",&b);
    int sum=add(a,b);
    printf("%d",sum);
        return 0;
}