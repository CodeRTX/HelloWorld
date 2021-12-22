import java.util.*;

public class CandidateCode
{
 public static void main(String args[])
 {
  int n,r;
  String x="";
  Scanner sc=new Scanner(System.in);
  n=sc.nextInt();
  if(n==0)
   System.out.print(0);
  else
  {
   while(n>0)
   {
    r=n%2;
    x=String.valueOf(r)+x;
    n=n/2;
   }
   System.out.print(x);
  }
 }
}
