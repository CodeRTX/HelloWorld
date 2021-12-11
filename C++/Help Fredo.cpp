/* Fredo is assigned a task today. He is given an array A containing N integers. His task is to update all elements of array to some minimum value x, that is, such that product of all elements of this new array is strictly greater than the product of all elements of the initial array.
Note that x should be as minimum as possible such that it meets the given condition. Help him find the value of x. */


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
 long long int n,arr[100000],i,p=1,x=1;
 cin>>n;
 for(i=0;i<n;i++)
  cin>>arr[i];
 for(i=0;i<n;i++)
  p=p*arr[i];
 i=1;
 while(p>=x)
 {
  i++;
  x=pow(i,n);
 }
 cout<<i;
 return 0;
}
