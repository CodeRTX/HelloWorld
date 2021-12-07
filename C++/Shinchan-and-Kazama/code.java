#include <iostream>
using namespace std;

int main()
{
 int a,b,v,t;
 cin >>a>>b>>v;
 a=a-b;
 if(a<0)
  a=a*(-1);
 t=a/v;
 cout <<t;
 return 0;
}
