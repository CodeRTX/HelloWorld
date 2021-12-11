/* Toros went to the supermarket to buy K items. There were a total of N items.
Each item had a distinct price Pi. He is cost-effective, so he would buy the K cheapest item. But he knows that the more cheaper an item is, the more is the chances that it can be defective.
So he planned to ignore 2 cheapest items and buy K from the remaining ones. Find the total cost of all items that he would buy. */


import java.io.*;
import java.util.*;

class Main
{
 public static void main (String args[])
 {
  int n,k,i;
  long c=0;
  Scanner sc=new Scanner(System.in);
  n=sc.nextInt();
  k=sc.nextInt();
  int pr[]=new int[n];
  for(i=0;i<n;i++)
   pr[i]=sc.nextInt();
  Arrays.sort(pr);
  for(i=2;i<n;i++)
  {
   if(k>0)
   {
    k--;
    c=c+pr[i];
   }
   else
    break;
  }
  System.out.print(c);
 }
}
