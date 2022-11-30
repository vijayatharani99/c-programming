#include<stdio.h>
float cube(long n)
{
     long c;
     c=n*n*n;
     return c;
}
int main()
{
     long a,z;
     printf("Enter Number : ");
     scanf("%ld",&a);
     z=cube(a);
     printf("\nCube of %ld = %ld",a,z);
     return 0;
}

