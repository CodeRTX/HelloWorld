// Given a matrix of size M*N, your task is to find the maximum sum of a column.


#include <iostream>
using namespace std;

int main()
{
 short m,n,i,j;
 int s,smax=0;
 cin >>m>>n;
 int arr[m][n];
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
   cin >>arr[i][j];
 }
 for(j=0;j<n;j++)
 {
  s=0;
  for(i=0;i<m;i++)
   s=s+arr[i][j];
  if(s>smax)
   smax=s;
 }
 cout <<smax;
 return 0;
}
