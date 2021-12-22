import java.util.*;

public class CandidateCode
{
 public static void main(String args[])
 {
  int n,a=0,c=0;
  Scanner sc=new Scanner(System.in);
  n=sc.nextInt();
  if(n!=0)
  {
   while(n%10==0)
   {
    c++;
    n=n/10;
   }
  }
  while(n>0)
  {
   a=(a*10)+(n%10);
   n=n/10;
  }
  if(a==0)
   System.out.print("zero");
  convert(a);
  for(a=0;a<c;a++)
   System.out.print("zero"+" ");
 }
 static void NumtoChar(int x)
 {
  switch(x)
  {
   case 0: System.out.print("zero");
           break;
   case 1: System.out.print("one");
           break;
   case 2: System.out.print("two");
           break;
   case 3: System.out.print("three");
           break;
   case 4: System.out.print("four");
           break;
   case 5: System.out.print("five");
           break;
   case 6: System.out.print("six");
           break;
   case 7: System.out.print("seven");
           break;
   case 8: System.out.print("eight");
           break;
   case 9: System.out.print("nine");
  }
 }
 static void convert(int x)
 {
  int r;
  while(x>0)
  {
   r=x%10;
   NumtoChar(r);
   System.out.print(" ");
   x=x/10;
  }
 }
}