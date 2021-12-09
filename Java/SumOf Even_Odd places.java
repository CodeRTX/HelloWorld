public class abc
{
 public static void main(String args[])
 {
  int n=542,so=0,se=0;
  boolean i=false;
  while(n>0)
  {
   if(i==true)
    se=se+(n%10);
   else
    so=so+(n%10);
   n=n/10;
   i=!i;
  }
  System.out.println("Sum of even places is "+se);
  System.out.print("Sum of odd places is "+so);
 }
}
