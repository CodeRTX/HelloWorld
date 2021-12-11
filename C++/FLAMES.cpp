/* They say friendship is greater than love. Why not play the famous game "FLAMES".
The rules are super simple. Given two strings (all lowercase), remove all the letters that are common to both the strings from both the strings. You cannot erase two characters corresponding to one character.
For example, in the case
String 1: saumya
String 2: ansh
You can remove only 1 'a' and 1 's' from both the strings.
Remaining strings are:
String 1: umya
String 2: nh

Now all you need to do is find the sum of the remaining strings length % 6.

Output:
If obtained value is 1, output "Friends"
If obtained value is 2, output "Love"
If obtained value is 3, output "Affection"
If obtained value is 4, output "Marriage"
If obtained value is 5, output "Enemy"
If obtained value is 0, output "Siblings" */


#include <iostream>
using namespace std;

int len(string t)
{
 int c=0;
 for(int i=0;i<t.length();i++)
 {
  if(t[i]!='0')
   c++;
 }
 return c;
}

int main()
{
 string s1,s2;
 cin >>s1>>s2;
 int i,j;
 for(i=0;i<s1.length();i++)
 {
  for(j=0;j<s2.length();j++)
  {
   if(s1[i]==s2[j])
   {
    s1[i]='0';
    s2[j]='0';
    break;
   }
  }
 }
 i=(len(s1)+len(s2))%6;
 switch(i)
 {
  case 0: s1="Siblings";
          break;
  case 1: s1="Friends";
          break;
  case 2: s1="Love";
          break;
  case 3: s1="Affection";
          break;
  case 4: s1="Marriage";
          break;
  case 5: s1="Enemy";
 }
 cout <<s1;
 return 0;
}
