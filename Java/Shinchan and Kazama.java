/* Shinchan and Kazama are standing in a horizontal line, Shinchan is standing at point A and Kazama is standing at point B. Kazama is very intelligent and recently he learned how to calculate the speed if the distance and time are given and now he wants to check if the formula he learned is correct or not so he starts running at a speed of S unit/s towards Shinhan and noted the time he reaches to Shinchan.
Since Kazama is disturbed by Shinchan, can you calculate the time for him?*/

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
