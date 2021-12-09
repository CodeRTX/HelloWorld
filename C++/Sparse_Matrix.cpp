#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int p,q,c=0,i,j,x=1,a[50][50],s[50][50];
 float initial,final,eff;
 cout<<"Enter the dimensions of the Matrix:";
 cin>>p>>q;
 initial=p*q;
 cout<<"Enter the elements: ";
 for(i=0;i<p;i++)
  for(j=0;j<q;j++)
   cin>>a[i][j];
 cout<<"\nYour Matrix:\n";
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
   cout<<"  "<<a[i][j];
  cout<<endl;
 }
 for(i=0;i<p;i++)
  for(j=0;j<q;j++)
   {
    if(a[i][j]!=0)
     c++;
   }
 final=(c+1)*3;
 s[0][0]=p;
 s[0][1]=q;
 s[0][2]=c;
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
  {
   if(x<c+1)
   {
    if(a[i][j]!=0)
    {
     s[x][0]=i;
     s[x][1]=j;
     s[x][2]=a[i][j];
     x++;
    }
   }
   else
    goto h1;
  }
 }
 h1:
 cout<<"\nReqd. Matrix:\n";
 for(i=0;i<c+1;i++)
 {
  for(j=0;j<3;j++)
   cout<<"  "<<s[i][j];
  cout<<endl;
 }
 eff=1-(final/initial);
 eff=eff*100;
 cout<<"\nEfficiency- "<<eff<<"%. ";
 if(eff<0)
  cout<<"\n(The -ve sign simply implies that Sparse Matrix is taking more space than the original Matrix)\n";
 getch();
}
