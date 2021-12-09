//pallindrome- no. which remains same after reversing it//

#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 long int n,s=0,r,a;
 printf ("Enter a no.: \n");
 scanf ("%ld",&n);
 a=n;
 while(n>0)
 {
  r=n%10;
  s=(s*10)+r;
  n=n/10;
 }
 if(s==a)
  printf ("\nThe no. is a pallindrome no.\n");
 else
  printf ("\nThe no. is not a pallindrome no.\n");
 getch();
}
