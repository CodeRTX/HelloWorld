/* Given a sorted array of N integers a[], and Q queries. For each query,
you will be given one element K your task is to print the number of elements that are smaller than or equal to K.(using Binary Search). */


#include <iostream>
using namespace std;

void BSearch(long arr[], int start, int end, long el)
{
 int mid=(start+end)/2;
 if(end<0)
 {
  cout <<0;
  return;
 }
 if(start<=end)
 {
  if(arr[mid]==el)
  {
   cout <<(mid+1);
   return;
  }
  else if(arr[mid]<el)
   BSearch(arr,mid+1,end,el);
  else
   BSearch(arr,start,mid-1,el);
 }
 else
 {
  cout <<(mid+1);
  return;
 }
}

int main()
{
 int n,i,q;
 cin >>n;
 long arr[n],k;
 for(i=0;i<n;i++)
  cin >>arr[i];
 cin >>q;
 for(i=0;i<q;i++)
 {
  cin >>k;
  BSearch(arr,0,n-1,k);
  cout <<endl;
 }
 return 0;
}
