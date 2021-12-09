#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int i,n,s=0,a;
 printf ("Enter the value of n: \n");
 scanf ("%d",&n);
 for(i=1;i<=n;i++)
  s=s+(i*i);
 printf ("The sum is %d\n",s);
 getch();
}
