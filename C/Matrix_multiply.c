#include<stdio.h>

main()
{
 int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
 printf ("Enter the dimensions of 1st matrix: ");
 scanf ("%d%d",&m,&n);
 printf ("\nEnter the dimensions of 2nd matrix: ");
 scanf ("%d%d",&p,&q);
 printf ("\nEnter the  elements of 1st matrix:\n");
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   scanf ("%d",&a[i][j]);
 printf ("\nEnter the  elements of 2nd matrix:\n");
 for(i=0;i<p;i++)
  for(j=0;j<q;j++)
   scanf ("%d",&b[i][j]);
 printf ("\nThe matrices are -\n\n\n");
 for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
  printf ("%d ",a[i][j]);
 printf ("\n");
 }
 printf ("\n");
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
   printf ("%d ",b[i][j]);
  printf ("\n");
 }
 printf ("\n\nThe result -\n");
 if(n==p)
 {
  for(i=0;i<m;i++)
  {
   for(j=0;j<q;j++)
   {
    c[i][j]=0;
    for(k=0;k<n;k++)
     c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
    printf ("%d\t\t",c[i][j]);
   }
   printf ("\n");
  }
 }
 else
  printf ("Matrix multiplication is not possible\n");
 return 0;
}
