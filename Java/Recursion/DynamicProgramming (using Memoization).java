import java.util.*;

public class Main
{
 static long arr[]=new long[100];
 public static void main(String args[])
 {
  int n=92;
  System.out.print(fib(n));
 }
 static long fib(int x)
 {
  if(x<=1)
   return x;
  if(arr[x]!=0)
   return arr[x];
  else
  {
   arr[x]=fib(x-1)+fib(x-2);
   return arr[x];
  }
 }
}
