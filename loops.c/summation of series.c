#include <stdio.h>

//             sum 1+2+3..n
    int main() {
        int sum=0,n;
        printf("enter the number n;");
        scanf("%d",&n);
        for(int i=0;i<=n;i++){
            sum=sum+i;
            
        }
    printf("the sum is%d",sum);
    return 0;
}