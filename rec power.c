#include <stdio.h>
#include <math.h>
int power(int n,int a)
{
  if(a==0)
    return 1;
  return n*power(n,a-1);
}
int main()
{
  int n,a;
  printf("Enter base:");
  scanf("%d",&n);
  printf("Enter exponent:");
  scanf("%d",&a);
  printf("The base %d to the exponent %d is %d",n,a,power(n,a));
}
