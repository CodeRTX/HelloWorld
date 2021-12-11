#include<iostream>
using namespace std;

void main()
{
 long int a[100],n,i;
 cout <<"Enter the range: \n";
 cin >>n;
 a[0]=0;
 a[1]=1;
 for(i=2;i<n;i++)
  a[i]=a[i-1]+a[i-2];                                 // This is an eg. of DynamicProgramming  (Tabulation Method)
 for(i=0;i<n;i++)                                    // A Bottom-Up approach
  cout <<a[i]<<"\t";
}
