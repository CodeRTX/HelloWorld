/* Given a string S check if it is Pangram or not. A pangram is a sentence containing every letter in the English Alphabet.
   Note:- String will not contain any spaces. */


#include <iostream>
using namespace std;

int main()
{
 short t,i,j,k;
 string s;
 char c;
 cin >>t;
 for(i=0;i<t;i++)
 {
  k=0;
  cin >>s;
  for(c='a';c<='z';c++)
  {
   for(j=0;s[j]!=NULL;j++)
   {
	  if(s[j]==c || s[j]==c-32)
	  {
	   k++;
	   break;
	  }
   }
  }
  if(k==26)
   cout<<1<<endl;
  else
   cout<<0<<endl;
 }
 return 0;
}
