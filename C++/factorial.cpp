#include <iostream>
using namespace std;

long double fact(int x)
{
 if(x==1 || x==0)
  return 1;
 else
  return (x*fact(x-1));
}

int main()
{
 long double ans;
 int num;
 cin >>num;
 cout.precision(5);
 ans=fact(num);
 cout <<ans<<endl;
 return 0;
}
