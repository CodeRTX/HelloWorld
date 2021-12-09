#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int a[200],r,i,j,c=0,b;
 printf ("Enter the value of r: ");
 scanf ("%d",&r);
 for(i=1;i<=r;i++)
  a[i]=i;
 for(i=1;i<=r;i++)
 {
  if((a[i]*a[i])<=a[r])
   c++;
 }
 for(j=2;j<=c;j++)
 {
  b=r/j;
  for(i=2;i<=b;i++)
   a[j*i]=1;
 }
 printf ("\n");
 for(i=1;i<=r;i++)
 {
  if(a[i]!=1)
  printf ("%d ",a[i]);
 }
 getch();
}
