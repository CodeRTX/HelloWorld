#include <iostream>
using namespace std;

int main()
{
 short t,i,n,j,k,tmp,min;
 cin >>t;
 for(i=0;i<t;i++)
 {
  cin >>n;
  short arr[n];
  for(j=0;j<n;j++)
   cin >>arr[j];
  for(j=0;j<n-1;j++)
  {
   min=j+1;
   for(k=j+1;k<n;k++)
   {
	if(arr[k]<arr[min])
	 min=k;
   }
   if(arr[min]<arr[j])
   {
	 tmp=arr[min];
    arr[min]=arr[j];
    arr[j]=tmp;
   }
  }
  for(j=0;j<n;j++)
   cout <<arr[j]<<" ";
  cout <<endl;
 }
 return 0;
}
