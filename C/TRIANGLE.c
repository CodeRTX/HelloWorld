#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
 clrscr();
 float ar,s,a,b,c;
 printf ("Enter the sides of the Triangle:");
 scanf ("%f%f%f",&a,&b,&c);
 if((a+b)>c && (b+c)>a && (a+c)>b)
 {
  printf ("\nThe foll. Triangle exists.\n");
  if(a!=b && b!=c && a!=c)
   printf ("\nThe triangle is scalene\n");
  if((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b))
   printf ("\nThe triangle is isoceles\n");
  if(a==b && b==c)
   printf ("\nThe triangle is equilateral\n");
  s=(a+b+c)/2;
  ar=sqrt(s*(s-a)*(s-b)*(s-c));
  printf ("The area of triangle is %0.3f\n",ar);
 }
 else
  printf ("\nThe Triangle is not possible\n");
 getch();
}
