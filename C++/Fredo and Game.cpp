/* Fredo is playing a game. The rules of the game are:
Initially, you are given A units of ammo. There are N obstacles placed on a path. When you hit an obstacle, you gain three units ammo and lose one unit of ammo. When you don't hit an obstacle, you lose one unit ammo. If at any instance, you are left with 0 ammo units, the game ends there.

Fredo asks you to tell him if he will be able to reach the end of the path. If yes, then also tell him the remaining number of ammo units.
If he is not able to reach the end of the path, tell him the obstacle index at which his game would end.

Note: If Fredo reaches the last obstacle, he is said to reach the end of the path. */


#include <iostream>
using namespace std;

int main()
{
 long long int t,arr[100000],i,j,a,n;
 cin>>t;
 for(i=0;i<t;i++)
 {
  cin>>a>>n;
  for(j=0;j<n;j++)
   cin>>arr[j];
  for(j=0;j<n;j++)
  {
   if(arr[j]==0)
    a--;
   else
    a=a+2;
   if(a==0)
   {
    cout<<"\nNo "<<j+1;
    break;
   }
  }
  if(a!=0 || j==n-1)
   cout<<"\nYes "<<a;
 }
 return 0;
}
