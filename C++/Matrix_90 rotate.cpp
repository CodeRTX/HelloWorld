#include <iostream>
using namespace std;

int main()
{
 int i,j,n;
 cin >>n;
 int arr[n][n],b[n][n];
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   cin >>arr[i][j];
 }
 cout <<"Before-\n\n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   cout <<arr[i][j]<<"  ";
  cout<<endl;
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   b[j][n-1-i]=arr[i][j];
 }
 cout <<"\n-----------------------------------------\n\n";
 cout <<"After-\n\n";
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
   cout <<b[i][j]<<"  ";
  cout<<endl;
 }
 return 0;
}
