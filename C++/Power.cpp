/*This is an eg. of Recursion.*/


#include<iostream.h>
#include<conio.h>

long double myPow(long double x,int y)
{
 if(y<0)
  return (1/myPow(x,-y));
 if(y%2!=0)
  return (x*myPow(x,y-1));
 if(y==0)
  return 1;
 else
  return (myPow(x,y/2)*myPow(x,y/2));
}

void main()
{
 clrscr();
 long double a;
 int n;
 cout <<"Enter the no.s : ";
 cin >>a>>n;
 cout <<"The value is "<<myPow(a,n)<<endl;
 getch();
}
