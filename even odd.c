#include<stdio.h>
int isEven(int n)
{
     if(n%2==0)
          return 1;
     else
          return 0;
}
int main()
{
     int num,ans,i,z;
     scanf("%d",&z);
     for(i=1;i<=z;i++)
     {
          printf("\nEnter Number-%d : ",i);
          scanf("%d",&num);
          ans=isEven(num);
          if(ans==1)
               printf("%d is Even\n",num);
          if(ans==0)
               printf("%d is Odd\n",num);
     }
     return 0;
}
