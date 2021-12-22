// Implementation using ArrayList.
import java.util.*;

class RemoveDuplicates
{
 public static void main(String args[])                      // Time Complexity is O(n log(n)).
 {
  int i,j,n;
  boolean b;
  Scanner sc=new Scanner(System.in);
  n=sc.nextInt();
  ArrayList<Integer> list=new ArrayList<Integer>();
  for(i=0;i<n;i++)
   list.add(sc.nextInt());
  System.out.print("The original Array is: ");
  System.out.print(list);
  Collections.sort(list);
  System.out.print("\nThe duplicate elements is/are: ");
  n=0;
  for(i=0;i<list.size()-1;i++)
  {
   j=i+1;
   b=false;
   while(list.get(i)==list.get(j))
   {
    b=true;
    list.remove(j);
    n=1;
    if(list.size()==1)
     break;
   }
   if(b==true)
    System.out.print(list.get(i)+" ");
  }
  if(n==0)
   System.out.println("NULL");
  else
   System.out.println("");
  System.out.print("The final Array(after sorted & removed duplicates) is: ");
  System.out.print(list);
  sc.close();
 }
}
