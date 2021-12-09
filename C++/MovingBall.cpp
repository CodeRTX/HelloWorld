#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

#define WAIT 1

void main()
{
 clrscr();
 int gd=DETECT,gm;
 int a,b,x;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 setbkcolor(WHITE);
 a=getmaxx()/2;
 b=getmaxy()/2;
 x=a-1;
 while(kbhit()==0)
 {
  setcolor(4);
  setfillstyle(SOLID_FILL,4);
  circle(x,b,60);
  floodfill(x,b,4);
  delay(WAIT);
  cleardevice();
  x=x+2;
  if(x==(2*a)+60)
   x=-60;
 }
 closegraph();
}
