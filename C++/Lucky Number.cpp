/* Chef buys a lottery ticket that has a 3 digit code associated with it.
He thinks that digit 7 is his lucky digit and brings him good luck. Chef will win some amount in the lottery if at least one of the digits of the lottery ticket is 7.
Given three digits A, B, and C of the lottery ticket, tell whether Chef wins something or not? */


#include <iostream>
using namespace std;

int main()
{
 int t,i;
 short a,b,c;
 cin >>t;
 for(i=0;i<t;i++)
 {
  cin >>a>>b>>c;
  if(a==7 || b==7 || c==7)
   cout <<"yes\n";
  else
   cout <<"no\n";
 }
 return 0;
}
