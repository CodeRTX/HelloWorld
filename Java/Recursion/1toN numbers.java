
public class Print
{
 public static void main(String args[])
 {
  int n=5;
  print(n);                                     // This prints no.s between 1 to n.
 }
 static void print(int x)
 {
  if(x==0)
   return;
  print(x-1);
  System.out.print(x+" ");
 }
}
