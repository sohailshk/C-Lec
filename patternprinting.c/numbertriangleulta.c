#include <stdio.h>
                        // QUESTION PRINT 12334
                        //                123
                                        // 12
                                        // 1
                        
int main()
{  int n;
    printf("enter n;");
    scanf("%d",&n);
    //n=3
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
    printf("%d",&j);
        }
        printf("\n");
    }
    return 0;
}
