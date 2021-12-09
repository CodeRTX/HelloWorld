#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 int n,s=0,r;
 printf ("Enter a digit: \n");
 scanf ("%d",&n);
 while(n>0)
 {
  r=n%10;
  s=s+r;
  n=n/10;
 }
 printf ("\nThe sum of digits is %d\n",s);
 getch();
}
