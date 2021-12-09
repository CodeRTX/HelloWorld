#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 int a,b,c,option;               /*Value of 'a' can be anything except 0*/
 float d,p,q;
 while(1)
 {
  printf ("Enter the quadratic coefficients: \n");
  scanf ("%d%d%d",&a,&b,&c);
  d=sqrt((b*b)-(4*a*c));
  p=(-b+d)/(2*a);
  q=(-b-d)/(2*a);
  if(((b*b)-(4*a*c))>0)
   printf ("\nThe roots of the Quadratic Equation are %f and %f\n",p,q);
  else if(d==0)
   printf ("\nThe roots are each equal to %f\n",p);
  else
   printf ("\nThe roots do not exist\n");
  printf ("Do you want to continue?(Press 0 or 1) ");
  scanf ("%d",&option);
  if(option==0)
   return;
  else if(option==1)
   continue;
  else
   printf ("ERROR!\n");
  return;
 }
 getch();
}
