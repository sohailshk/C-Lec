#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("enter the number n");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        product = product*i;
        printf("the factorial is%d",product);
    }
    
    return 0;
}