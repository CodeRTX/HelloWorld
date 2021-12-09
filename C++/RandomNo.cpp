#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 123

void main()                       //Generates a Random No. between 0 & MAX-1.
{
 clrscr();
 int i,n=5;
 time_t t;
 srand((unsigned)time(&t));
 for(i=0;i<n;i++)
  cout<<" "<<rand()%MAX;
 getch();
}
