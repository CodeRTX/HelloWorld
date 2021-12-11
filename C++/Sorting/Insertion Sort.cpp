#include <iostream>
using namespace std;

int main()
{
 short t,i,n,j,k,tmp;
 cin >>t;
 for(i=0;i<t;i++)
 {
  cin >>n;
  short arr[n];
  for(j=0;j<n;j++)
   cin >>arr[j];
  for(j=0;j<n-1;j++)
  {
   if(arr[j]>arr[j+1])
    swap(arr[j],arr[j+1]);
   for(k=j;k>0;k--)
   {
	if(arr[k-1]>arr[k])
     swap(arr[k],arr[k-1]);
   }
  }
  for(j=0;j<n;j++)
   cout <<arr[j]<<" ";
  cout <<endl;
 }
 return 0;
}
