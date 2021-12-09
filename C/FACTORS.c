#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int i,n;
 printf ("Enter the no.: \n");
 scanf ("%d",&n);
 printf ("The factors are: \n");
 for(i=1;i<=(n/2);i++)
  if(n%i==0)
   printf ("%d\t",i);
 printf ("\n");
 getch();
}
