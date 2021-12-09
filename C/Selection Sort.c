#include<stdio.h>

#define SIZE 30

void swap(int*,int*);

main()
{
 int a[SIZE],i,j,r;
 printf ("Enter a range: ");
 scanf ("%d",&r);
 printf ("Enter the elements:\n");
 for(i=0;i<r;i++)
  scanf ("%d",&a[i]);
 for(i=0;i<r-1;i++)
 {
  for(j=i+1;j<r;j++)
  {
   if(a[i]>a[j])
    swap(&a[i],&a[j]);
  }
 }
 printf ("\n\n");
 for(i=0;i<r;i++)
  printf ("%d\t",a[i]);
 return 0;
}

void swap(int *x,int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}
