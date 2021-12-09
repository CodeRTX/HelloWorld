#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int c,r,a[10][10],i,j;
 printf ("Enter the no. of rows:");
 scanf ("%d",&r);
 printf ("\nEnter the no. of columns:");
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
 printf ("The transpose of matrix is: \n");
 for(i=0;i<c;i++)
 {
  for(j=0;j<r;j++)
   printf ("%d\t",a[j][i]);
  printf ("\n");
 }
 getch();
}
