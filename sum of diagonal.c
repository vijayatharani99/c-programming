#include<stdio.h>
#include<stdlib.h>
int main()
{
      int **a, row,col,i,j,k,s1=0,s2=0;
      printf("Enter Limit for Rows : ");
      scanf("%d",&row);
      printf("\nEnter Limit for Columns : ");
      scanf("%d",&col);
      a=(int **)malloc(row*sizeof(int*));
      for(i=0;i<row;i++)
      {
            a[i]=(int *)malloc(col*sizeof(int));
      }
      printf("\nEnter Elements for Matrix of Size %d*%d:\n\n",row,col);
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  scanf("%d",&a[i][j]);
            }
      }
      printf("\n%d*%d Matrix : \n\n",row,col);
      for(i=0;i<row;i++)
      {
            for(j=0;j<col;j++)
            {
                  printf("%3d ",a[i][j]);
            }
            printf("\n");
      }
      printf("\nMajor Diagonal Elements : ");
      //prints the major diagonal elements
      for(k=0;k<col;k++)
      {
            printf("%d ",a[k][k]);
            s1=s1+a[k][k];
      }
      printf("\n\nMinor Diagonal Elements : ");
      /*prints the minor diagonal elements */
      for(i=0,j=col-1;i<row&&j>=0;i++,j--)
      {
            printf("%d ",a[i][j]);
            s2=s2+a[i][j];
      }
      printf("\n\nSum of Major Diagonal Elements : %d\n\n",s1);
      printf("Sum of Minor Diagonal Elements : %d\n\n",s2);
      if(s1==s2)
            printf(" Sum is SAME");
      else
            printf(" Sum is NOT SAME");
      return 0;
}

