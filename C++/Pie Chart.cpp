#include<iostream.h>
#include<conio.h>
#include<graphics.h>

int approx(float x)
{
 int t=x;
 float v=10*(x-t);
 v=int(v);
 if(v<5)
  return x;
 else
  return (x+1);
}

void main()
{
 clrscr();
 int gd=DETECT,gm;
 int n,i,a,b,st=0,end=0,r=150;
 float val[16],s=0,p;
 cout<<"Enter the no. of Items(16 no.s max): ";
 cin>>n;
 cout<<"\nEnter the values:\n";
 for(i=0;i<n;i++)
 {
  cin>>val[i];
  s=s+val[i];
 }
 cout<<"Press any key to continue.....\n";
 getch();
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 a=getmaxx()/2;
 b=getmaxy()/2;
 cout<<"\n";
 for(i=0;i<n;i++)
 {
  end=end+approx((360*val[i])/s);
  setcolor(i+1);
  setfillstyle(SLASH_FILL,i+1);
  pieslice(a,b-40,st,end,r);
  floodfill(a,b-40,i+1);
  p=approx((val[i]*100)/s);
  cout<<""<<p<<"%, ";
  st=end;
 }
 cout<<"\b\b.";
 setcolor(WHITE);
 settextstyle(3,HORIZ_DIR,2);
 outtextxy(a+50,b+170,"Press any key to Exit.");
 getch();
 closegraph();
}
