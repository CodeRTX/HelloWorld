/* There exists an island called Arpa s land, some beautiful girls live there, as ugly ones do.Mehrdad wants to become minister of Arpa s land.
Arpa has prepared an exam. Exam has only one question, given n, print the last digit of (1378^n). Mehrdad has become quite confused and wants you to help him.
Please help, although it's a naive cheat. */


#include <iostream>
using namespace std;

int main()
{
 long n;
 cin >>n;
 if(n==0)
  cout <<1;
 else
 {
  n=n%4;
  switch(n)
  {
   case 0: cout <<6;
           break;
   case 1: cout <<8;
           break;
   case 2: cout <<4;
           break;
   case 3: cout <<2;
  }
 }
 return 0;
}
