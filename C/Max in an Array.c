#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int a[40],r,i,loc;
 printf ("Enter the range: ");
 scanf ("%d",&r);
 printf ("\n\nEnter the elements of Array:\n");
 for(i=0;i<r;i++)
  scanf ("%d",&a[i]);
 int max=a[0];
 printf ("\nThe Array is-\n");
 for(i=0;i<r;i++)
  printf ("%d\t",a[i]);
 for(i=1;i<r;i++)
 {
  if(max<a[i])
  {
   loc=i+1;
   max=a[i];
  }
 }
 printf ("\nThe Max. value is %d & its location is %d\n",max,loc);
 getch();
}
