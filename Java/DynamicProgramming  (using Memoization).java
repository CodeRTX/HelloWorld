class Main
{
 static long arr[]=new long[1000];
 static long fib(int x)                            // A Top-down approach
 {                                                           // Decr. time complexity from O(2^n) to O(n)
  if(x<=1)
   return x;
  if (arr[x]!=0)
   return arr[x];
  else
  {
   arr[n]=fib(n-1)+fib(n-2);
    return arr[n];
  }
 }
 public static void main(String args[])
 {
  int n=40;
  System.out.println(fib(n));
 }
}

