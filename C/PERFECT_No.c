//perfect no.-no. equal to sum of its proper divisors(inc.1,exc. no. itself)//

#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int i,n,a,s=0;
 printf ("Enter the no.: \n");
 scanf ("%d",&n);
 a=n;
 for(i=1;i<n;i++)
 {
  if(n%i==0)
   s=s+i;
 }
 if(s==a)
  printf ("The no. is a perfect no.");
 else
  printf ("It's not a perfect no.");
 getch();
}
