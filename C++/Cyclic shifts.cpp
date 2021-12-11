/* You are given a number N represented as a binary representation of X=16 bits. You are also given a number m and a character c(L or R).
Determine a number M that is generated after cyclically shifting the binary representation of N by m positions either left if c=L or right is c=R. */


#include <iostream>
using namespace std;

void bitodec(int *arr)
{
 int s=0,i;
 for(i=15;i>=0;i--)
  s=(s*2)+arr[i];
 cout << s<<endl;
}

int main() 
{
 short i,t,m;
 int n,tmp,j,k,arr[16];
 char c;
 cin >>t;
 for(i=0;i<t;i++)
 {
  for(j=0;j<16;j++)
   arr[j]=0;
  cin >>n>>m>>c;
  j=0;
  while(n>0)
  {
   arr[j]=n%2;
   n=n/2;
   j++;
  }
  if(c=='l' || c=='L')
  {
   for(k=0;k<m;k++)
   {
    tmp=arr[15];
    for(j=14;j>=0;j--)
     arr[j+1]=arr[j];
    arr[0]=tmp;
   }
  } 
  if(c=='r' || c=='R')
  {
   for(k=0;k<m;k++)
   {
    tmp=arr[0];
    for(j=0;j<=14;j++)
     arr[j]=arr[j+1];
    arr[15]=tmp;
   }
  }
  bitodec(arr);
 }
 return 0;
}
