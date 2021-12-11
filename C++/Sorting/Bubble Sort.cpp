#include <iostream>
using namespace std;

int main()
{
 short t,i,n,j,k,tmp;
 bool flag;
 cin >>t;
 for(i=0;i<t;i++)
 {
  cin >>n;
  short arr[n];
  for(j=0;j<n;j++)
   cin >>arr[j];
  for(j=0;j<n;j++)
  {
   flag=false;
   for(k=0;k<n-1;k++)
   {
    if(arr[k]>arr[k+1])
    {
     flag=true;
     tmp=arr[k];
	   arr[k]=arr[k+1];
	   arr[k+1]=tmp;
    }
   }
   if(flag==false)
    break;
  }
  for(j=0;j<n;j++)
   cout <<arr[j]<<" ";
  cout <<endl;
 }
 return 0;
}
