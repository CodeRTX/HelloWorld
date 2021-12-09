#include<iostream.h>
#include<conio.h>

float setnum(float x);

void main()
{
 clrscr();
 int n,i,j,mode,m=0,q=0,*arr,*flag;
 float mean,median,s=0;
 cout<<"Enter size of array: ";
 cin>>n;
 arr=new int[n];
 cout<<"\nEnter the elements:\n";
 for(i=0;i<n;i++)
  cin>>arr[i];
 sort(arr,n);
 cout<<"\nThe reqd. array is:\n";
 for(i=0;i<n;i++)
  cout<<arr[i]<<"  ";
 for(i=0;i<n;i++)
  s=s+arr[i];
 mean=s/n;
 mean=setnum(mean);
 cout<<"\n\nThe Mean is "<<mean<<endl;
 if(n%2==0)
  median=(arr[n/2]+arr[(n/2)-1])/2;
 else
  median=arr[(n-1)/2];
 cout<<"\nThe Median is "<<median<<endl;
 flag=new int[n];
 for(i=0;i<n;i++)
  flag[i]=-1;
 for(i=0;i<n;i++)
 {
  if(flag[i]==-1)
  {
   flag[i]=0;
   for(j=i+1;arr[i]==arr[j];j++)
   {
     flag[i]++;
     flag[j]=0;
   }
   if(m<flag[i])
   {
    m=flag[i];
    mode=arr[i];
   }
  }
 }
 for(i=0;i<n;i++)
 {
  if(m==flag[i])
   q++;
 }
 if(m==0)
  cout<<"\nThe Mode doesn't exist.\n";
 else
 {
 if(q==1)
  cout<<"\nThe Mode is "<<mode<<"(occurs "<<m+1<<" times).\n";
 else
  cout<<"\nThe Mode doesn't exist.\n";
 }
 getch();
}

float setnum(float x)
{
 float t,r;
 t=int(x);
 x=x-t;
 x=x*1000;
 x=int(x);
 r=x/10;
 x=int(r);
 r=r-x;
 r=r*10;
 x=x/100;
 t=t+x;
 if(r>=5)
  t=t+0.01;
 return t;
}
