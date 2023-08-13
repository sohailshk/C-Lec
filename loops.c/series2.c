#include<math.h>

#include <stdio.h>
//             sum 1-2+3-4+5.....n
int main() {
   int sum=0,n;
printf("enter the number n");
        scanf("%d",&n);
        for(int i=0;i<=n;i++){
            if(i%2!=0)
                sum = sum + i;
        if(i%2==0)
            sum = sum - i; 
            return 0;
        }
    printf("the sum is %d",sum);
    return 0;
}
// ororororororororororororororororororororororr


// option 2
// if(n%2==0){
//     sum=-n/2;
//     else sum=-n/2+n}
