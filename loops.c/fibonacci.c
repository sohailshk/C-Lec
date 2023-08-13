#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number n");
    scanf("%d",&n);
    int a=1,b=1,sum=1;   //sum ko 1 likhne se 1 aur second term well defined milegi
    for(int i=3;i<=n;i++){     //we can write loop as n-2 and start from 1 too;S
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("%d",sum);
    return 0;
}
   