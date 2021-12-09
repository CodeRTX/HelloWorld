/*Abhijit has an Array Arr which may or may not be in strictly increasing order. He wants to make this array increasing but does not wish to change the position of any element so he came with an idea that he will replace an element with any of its divisors i.e he changes an element X to M if X%M=0.
Your task is to tell whether the given array can be transformed to strictly increasing by performing the operation given above.*/

#include <iostream>
using namespace std;

int main()
{
 int n,i,j;
 bool flag=false;
 cin >>n;
 int *arr=new int[n];
 for(i=0;i<n;i++)
  cin >>arr[i];
 arr[0]=1;
 for(i=1;i<n-1;i++)
 {
  for(j=arr[i-1]+1;j<=arr[i]/2;j++)
  {
   if(arr[i]%j==0)
   {
    arr[i]=j;
    break;
   }
  }
 }
 for(i=0;i<n-1;i++)
 {
  if(arr[i]>=arr[i+1])
  {
   flag=true;
   break;
  }
 }
 if(flag==false)
  cout <<"YES";
 else
  cout <<"NO";
 return 0;
}
