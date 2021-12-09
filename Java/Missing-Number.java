/* Out of N numbers marked from 1 to N, one no. is lost. Find the number. */

// 1st method : Using direct formula (1+2+3+.........+n=n*(n+1)/2)


import java.util.*;

class Main
{
 public static void main (String args[])
 {
  Scanner sc=new Scanner(System.in);
  int i,s=0;
  int n=sc.nextInt();
  int arr[]=new int[n-1];
  for(i=0;i<n-1;i++)
   arr[i]=sc.nextInt();
  for(i=0;i<n-1;i++)
   s=s+arr[i];
  System.out.print(((n*(n+1))/2)-s);
  sc.close();
 }
}



// 2nd method : Using bitwise operation


import java.util.*;

public class Main
{
 public static void main(String args[])
 {
  Scanner sc=new Scanner(System.in);
  int i,mn=0;
  int n=sc.nextInt();
  int arr[]=new int[n-1];
  for(i=0;i<n-1;i++)
   arr[i]=sc.nextInt();
  for(i=0;i<n-1;i++)
   mn=mn^arr[i];
  for(i=1;i<=n;i++)
   mn=mn^i;
  System.out.print(mn);
  sc.close();
 }
}
