/* There are N trees in Terry's front yard. He is supposed to measures the height of each tree and find the average height of trees in his yard. What is the average height of a tree in Terry's front yard?
Note:- Print your answer as floor value (average height) */

#include <iostream>
using namespace std;

int main()
{
 long n,i,h=0;
 cin >>n;
 long *tree=new long[n];
 for(i=0;i<n;i++)
  cin >>tree[i];
 for(i=0;i<n;i++)
  h=h+tree[i];
 cout <<h/n;
 delete tree;
 return 0;
}
