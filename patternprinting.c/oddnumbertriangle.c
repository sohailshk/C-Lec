#include<stdio.h>
int main()
{
  int n;
    printf("enter n;");
    scanf("%d",&n);
    //n=3
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){

        a=a+2;
    printf("%d",&j);
        }
        printf("\n");
    }
    return 0;
}
