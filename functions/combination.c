#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
    fact=fact*i;}
    return fact;
}
int combination(int n,int r){
  int ncr=factorial(n)/(factorial(r)*factorial(n-r));
  return ncr;
}
int main()      
{
    int n,r;
  printf("enter number of rows ");
  scanf("%d",&n);
  printf("%d",fact);
  return 0;
}