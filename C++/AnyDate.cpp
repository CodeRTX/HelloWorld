/*This prog. can find any date between 1900 & 2099 only*/

#include<iostream.h>
#include<conio.h>

struct day
{
 int date;
 char m[10];
 int yr;
}d;

int match(char *s,char *t)
{
 int temp=0;
 while(*s!='\0' && *t!='\0')
 {
  if(*s==*t || *s==*t+32)
   temp=1;
  else
   return 0;
  s++;
  t++;
  if((*s=='\0'&& *t!='\0') || (*s!='\0' && *t=='\0'))
   return 0;
 }
 return temp;
}
void invl()
{
 cout<<"\nThe entered value is invalid.\n\n\n"<<char(01)<<" ";
}

void main()
{
 clrscr();
 int a,b,c,r;
 h1:
 cout<<"Enter the date, month& year(in order): ";
 cin>>d.date>>d.m>>d.yr;
 if(d.date<1 || d.date>31)
 {
  invl();
  goto h1;
 }
 if(match("february",d.m)==1)
 {
  if(d.yr%4==0)
  {
   if(d.date>29)
   {
    invl();
    goto h1;
   }
  }
  else
  {
   if(d.date>28)
   {
    invl();
    goto h1;
   }
  }
 }
 if(d.yr<1900 || d.yr>2099)
 {
  invl();
  goto h1;
 }
 else
 {
  if(d.yr<2000)
   a=(d.yr)%100;
  else
   a=((d.yr)%100)+100;
 }
 if(match("april",d.m)==1 || match("july",d.m)==1)
  c=1;
 else if(match("january",d.m)==1 || match("october",d.m)==1)
  c=2;
 else if(match("may",d.m)==1)
  c=3;
 else if(match("august",d.m)==1)
  c=4;
 else if(match("february",d.m)==1 || match("march",d.m)==1 || match("november",d.m)==1 )
  c=5;
 else if(match("june",d.m)==1)
  c=6;
 else if(match("september",d.m)==1 || match("december",d.m)==1)
  c=7;
 else
 {
  invl();
  goto h1;
 }
 b=a/4;
 cout<<"\nThe date is- "<<d.date;
 cout<<" ";
 cout<<", "<<d.yr<<"\n";
 r=(a+b+c+(d.date))%7;
 if((match("february",d.m)==1) && ((d.yr)%4==0))
  r--;
 switch(r)
 {
  case 0: cout<<"The day corresponding to the mentioned date is Friday.\n";
	  break;
  case 1: cout<<"The day corresponding to the mentioned date is Saturday.\n";
	  break;
  case 2: cout<<"The day corresponding to the mentioned date is Sunday.\n";
	  break;
  case 3: cout<<"The day corresponding to the mentioned date is Monday.\n";
	  break;
  case 4: cout<<"The day corresponding to the mentioned date is Tuesday.\n";
	  break;
  case 5: cout<<"The day corresponding to the mentioned date is Wednesday.\n";
	  break;
  case 6: cout<<"The day corresponding to the mentioned date is Thrusday.\n";
 }
 cout<<"\n";
 getch();
}
