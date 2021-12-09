#include <iostream>
using namespace std;

int BSearch(int arr[], int start, int end, int el)
{
 int mid=start+((end - start)/2);
 if(start<=end)
 {
  if(arr[mid]==el)
   return (mid+1);
  else if(arr[mid]<el)
   BSearch(arr,mid+1,end,el);
  else
   BSearch(arr,start,mid-1,el);
 }
 else
  return (-1);
}

int main()
{
 int index,arr[]={1,2,3,4,67};
 index=BSearch(arr,0,4,67);
 if(index==-1)
  cout <<"Element is not found";
 else
  cout <<"Element is found at position "<<index;
 return 0;
}
