#include <stdio.h>
{
     int r;
     long binary = 0, i = 1;
     while(n != 0)
     {
          r = n%2;
          n = n/2;
          binary= binary + (r*i);
          i = i*10;
     }
     return binary;
}
int main()
{
     long d,z;
     printf("Enter Decimal Number : ");
     scanf("%ld", &d);
     z=DtoB(d);
     printf("\nBinary Number of %ld  : %ld", d,z);
     return 0;
}
