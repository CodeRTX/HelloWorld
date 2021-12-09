//e.g; 371=3^3+7^3+1^3//

#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int n,r,s=0,a;
 printf ("Enter the no.: \n");
 scanf ("%d",&n);
 a=n;
 while(n>0)
 {
  r=n%10;
  s=s+(r*r*r);
  n=n/10;
 }
 if(a==s)
  printf ("%d is an Armstrong no.\n",a);
 else
  printf ("%d is not an Armstrong no.\n",a);
 getch();
}
