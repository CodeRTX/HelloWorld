#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int c,r,a[10][10],i,j,s=0;
 printf ("Enter the no. of rows: \n");
 scanf ("%d",&r);
 printf ("Enter the no. of columns: \n");
 scanf ("%d",&c);
 printf ("Enter the elements of the matrix: \n");
 for(i=0;i<r;i++)
  for(j=0;j<c;j++)
   scanf ("%d",&a[i][j]);
 printf ("The elements of matrix are: \n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
   printf ("%d\t",a[i][j]);
  printf ("\n");
 }
 for(i=0;i<r;i++)
  for(j=0;j<c;j++)
   s=s+a[i][j];
 printf ("\nThe sum of all elements is %d\n",s);
 getch();
}
