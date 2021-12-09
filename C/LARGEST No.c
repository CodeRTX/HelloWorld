#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int a,b,c;
 printf ("Enter the 3 no.s:");
 scanf ("%d%d%d",&a,&b,&c);
 if(a>b && a>c)
  printf ("%d is largest\n",a);
 else if(b>c)
  printf ("%d is largest\n",b);
 else
  printf ("%d is largest\n",c);
 getch();
}
