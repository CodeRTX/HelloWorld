#include<stdio.h>
#include<conio.h>

#define PERIOD 10
#define PRINCIPAL 5000

void main()
{
 clrscr();
 int time=0;
 float rate=0.11,amount=PRINCIPAL;
 printf ("Time           Amount\n\n");
 while(time<=PERIOD)
 {
  printf ("%2d             %0.2f \n",time,amount);
  time++;
  amount=amount+(amount*rate);
 }
 getch();
}
