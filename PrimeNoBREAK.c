// #include<stdio.h>
// int main()
// {
//  int n,i;
//  printf("enter no.")
// ;
// scanf("%d",&n);

//     for(i=2;i<=n-1;i++){
//     if(n%i==0){
//     printf("the given number is composite");
//     break;
//     }
// }
//     return 0;
    
// }
// ORORORORORORORORORORORORROROORORORORORORORORORORORORORORORORO
#include<stdio.h>
int main()
{
    int a=0,n,i;
    printf("enter no.");
    scanf("%d",&n);
  
    for(i=2;i<=n-1;i++){
    if(n%i==0){
    a=1;
    break;
        }
    }
    if(a==0){printf("the given no. is prime");}
    else printf("composite no.");
    return 0;
}