/* Given an array A of size n, and an integer k. Find the maximum force by involving only k elements. Force of an element is the square of its value.
Note: Elements are not needed to be continuous. */


import java.io.*;
import java.util.*;

class Main
{
 public static void main(String args[])
 {
  int n,k,i;
  long f=0;
  Scanner sc=new Scanner(System.in);
  n=sc.nextInt();
  k=sc.nextInt();
  long arr[]=new long[n];
  for(i=0;i<n;i++)
   arr[i]=sc.nextInt();
  for(i=0;i<n;i++)
  {
   if(arr[i]<0)
    arr[i]=arr[i]*(-1);
  }
  Arrays.sort(arr);
  for(i=n-1;i>=0;i--)
  {
   if(k>0)
   {
    k--;
    f=f+(arr[i]*arr[i]);
   }
   else
    break;
  }
  System.out.print(f);
  sc.close();
 }
}
