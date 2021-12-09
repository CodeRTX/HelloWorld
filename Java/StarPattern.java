public class pattern
{
 public static void main(String args[])
 {
  int i,j,n=10;
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n-i;j++)
    System.out.print(" ");
   j--;
   for(j++;j<=n;j++)
    System.out.print("*");             // Just by adding extra space after the star here changes the entire Pattern.
   System.out.print("\n");
  }
 }
}
