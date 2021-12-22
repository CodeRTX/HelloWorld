/* The cost of a stock on each day is given in an array, find the max profit that you can make by buying and selling in those days. For example, if the given array is {100, 180, 260, 310, 40, 535, 695}, the maximum profit can earned by buying on day 0, selling on day 3.
Again buy on day 4 and sell on day 6. If the given array of prices is sorted in decreasing order, then profit cannot be earned at all. */

public class code
{
 public static void main(String args[])
 {
  int arr[]={7,1,5,3,6,4},i,min,p=0;
  min=arr[0];
  for(i=1;i<arr.length;i++)
  {
   if(arr[i]<min)
    min=arr[i];
   if(arr[i]-min>p)
    p=arr[i]-min;
  }
  System.out.print("The Max. Profit is "+p);
 }
}
