/* Given an array A of size N containing 0's, 1's and 2's. The task is to segregate the 0's, 1's and 2's in the array as all the 0's should appear in the first part of the array, 1's should appear in middle part of the array and finally all the 2's in the remaining part of the array.
Note: Do not use inbuilt sort function. Try to solve in O(N) per test case. */


import java.io.*;
import java.util.*;

class Main
{
 public static void main(String args[])
 {
  short i,t;
  int n,j;
  Scanner sc=new Scanner(System.in);
  t=sc.nextShort();
  for(i=0;i<t;i++)
  {
   n=sc.nextInt();
   int zeros=0,ones=0;
   short arr[]=new short[n];
   for(j=0;j<n;j++)
    arr[j]=sc.nextShort();
   for(j=0;j<n;j++)
   {
	 if(arr[j]==0)
	  zeros++;
   }
   for(j=0;j<n;j++)
   {
	 if(arr[j]==1)
	  ones++;
   }
   j=0;
   while(j<zeros)
   {
	 arr[j]=0;
	 j++;
   }
   while(j<zeros+ones)
   {
	 arr[j]=1;
	 j++;
   }
   while(j<n)
   {
	 arr[j]=2;
	 j++;
   }
   for(j=0;j<n;j++)
    System.out.print(arr[j]+" ");
   System.out.println();
  }
 }
}
