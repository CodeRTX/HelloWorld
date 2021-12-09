/* Given an array of N elements and a number K. The task is to arrange array elements according to the absolute difference with K, i. e., element having minimum difference comes first and so on.
Note : If two or more elements are at equal distance arrange them in same sequence as in the given array.*/

import java.util.*;

public class CandidateCode
{
 public static void main(String args[])
 {
  short i,t;
  int j,n,k,v,tmp;
  Scanner sc=new Scanner(System.in);
  t=sc.nextShort();
  for(i=0;i<t;i++)
  {
   n=sc.nextInt();
   k=sc.nextInt();
   int arr[]=new int[n];
   for(j=0;j<n;j++)
    arr[j]=sc.nextInt();
   int b[]=new int[n];
   for(j=0;j<n;j++)
    b[j]=abso(k-arr[j]);
   for(j=0;j<n-1;j++)
   {
    for(v=j+1;v<n;v++)
    {
     if(b[j]>b[v])
     {
      tmp=arr[j];
      arr[j]=arr[v];
      arr[v]=tmp;
      tmp=b[j];
      b[j]=b[v];
      b[v]=tmp;
     }
     else if(b[j]==b[v] && arr[j]>arr[v])
     {
      tmp=arr[j];
      arr[j]=arr[v];
      arr[v]=tmp;
     }
    }
   }
   for(j=0;j<n;j++)
    System.out.print(arr[j]+" ");
   System.out.println("");
  }
  sc.close();
 }
 static int abso(int x)
 {
  if(x<0)
   x=x*(-1);
  return x;
 }
}
