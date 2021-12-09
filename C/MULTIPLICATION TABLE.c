#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int i,n;
 printf ("Enter the value whose multiplication table you need: \n");
 scanf ("%d",&n);
 for(i=1;i<=10;i++)
  printf ("%d x %d =%d\n",n,i,n*i);
 getch();
}
