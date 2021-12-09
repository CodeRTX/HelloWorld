/*This is an eg. of Recursion.*/

#include<iostream.h>
#include<conio.h>

long double powr(long double x,int y)
{
 if(y<0)
  return (1/powr(x,-y));
 if(y%2!=0)
  return (x*powr(x,y/2)*powr(x,y/2));
 if(y==0)
  return 1;
 else
  return (powr(x,y/2)*powr(x,y/2));
}

void main()
{
 clrscr();
 long double a;
 int n;
 cout<<"Enter the no.s : ";
 cin>>a>>n;
 cout<<"The value is "<<powr(a,n)<<endl;
 getch();
}
