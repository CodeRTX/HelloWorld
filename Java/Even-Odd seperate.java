/* Given an array A of positive integers. Your task is to sort them in such a way that the first part of the array contains odd numbers sorted in descending order,
rest portion contains even numbers sorted in ascending order. */


import java.util.*;

class Main
{
 public static void main (String args[])
 {
  int i,j=-1,n,c=0;
  Scanner sc=new Scanner(System.in);
  n=sc.nextInt();
  Integer A[]=new Integer[n];
  Integer arr[]=new Integer[n];
  for(i=0;i<n;i++)
   A[i]=sc.nextInt();
  for(i=0;i<n;i++)
  {
   if(A[i]%2!=0)
   {
    j++;
    arr[j]=A[i];
    c++;
   }
  }
  for(i=0;i<n;i++)
  {
   if(A[i]%2==0)
   {
    j++;
    arr[j]=A[i];
   }
  }
  Arrays.sort(arr,0,c,Collections.reverseOrder());
  Arrays.sort(arr,c,n);
  for(i=0;i<n;i++)
   System.out.print(arr[i]+" ");
 }
}
