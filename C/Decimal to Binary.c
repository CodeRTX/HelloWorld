#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 int i=0,n,s=0,r;
 printf ("Enter a binary digit: \n");
 scanf ("%d",&n);
 while(n>0)
 {
  r=n%10;
  s=s+pow(2,i)*r;
  n=n/10;
  i++;
 }
 printf ("\nThe equivalent decimal number is %d\n",s);
 getch();
}
