#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int n,a[10][10],i,j,p=0,q=0,s;
 printf ("Enter the dimensions of square matrix: \n");
 scanf ("%d",&n);
 printf ("Enter the elements of the matrix: \n");
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   scanf ("%d",&a[i][j]);
 printf ("The elements of matrix are: \n");
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   printf ("%d\t",a[i][j]);
  printf ("\n");
 }
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
   if(i==j)
   p=p+a[i][j];
  }
 for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
   if(i+j==c-1)
   q=q+a[i][j];
  }
 s=p+q;
 if(n%2!=0)
  s=s-a[(n-1)/2][(n-1)/2];
 printf ("\nThe total sum of diagonal elements is %d\n",s);
getch();
}
