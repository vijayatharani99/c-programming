#include <stdio.h>
int x=12,y=23;
void exchange()
{
     int t;
     printf("\nValues Before Exchange x=%d, y=%d\n",x,y);
     t=x;
     x=y;
     y=t;
     printf("\nValues After Excahnge x=%d, y=%d",x,y) ;
}
int main()
{
     printf("Enter Value for x : ");
     scanf("%d",&x);
     printf("\nEnter Value for y : ");
     scanf("%d",&y);
     exchange();
     return 0;
}
