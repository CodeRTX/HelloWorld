#include<stdio.h>

int main()
{
 int a[100],i,r,b,t=0;
 printf ("Enter the range:");
 scanf ("%d",&r);
 printf ("Enter the elements:\n");
 for(i=0;i<r;i++)
  scanf ("%d",&a[i]);
 printf ("Enter the element to be searched: \n");
 scanf ("%d",&b);
 for(i=0;i<r;i++)
  if(b==a[i])
  {
   t=1;
   printf ("The element is found at location %d \n",i+1);
  }
 if(t==0)
  printf ("Element is not found\n");
 return 0;
}
