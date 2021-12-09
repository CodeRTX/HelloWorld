#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int i;
 printf ("Enter a no.: ");
 scanf ("%d",&i);
 if(i%2==0)
  printf ("The no. is even\n");
 else
  printf ("The no. is odd\n");
 getch();
}
