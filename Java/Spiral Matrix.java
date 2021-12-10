import java.util.*;

public class abc
{
 public static void main(String args[])
 {
  int r=4,c=3,i,j;
  Scanner sc=new Scanner(System.in);
  int arr[][]=new int[r][c];
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
	arr[i][j]=sc.nextInt();
  }
  System.out.print("\n\nThe given Matrix is-\n");
  for(i=0;i<r;i++)
  {
   for(j=0;j<c;j++)
	System.out.print(arr[i][j]+" ");
   System.out.println();
  }
  System.out.print("\nThe Spiral Order is-\n");
  int top=0,bottom=r-1,left=0,right=c-1;
  while(true)
  {
   for(j=left;j<=right;j++)
	System.out.print(arr[top][j]+" ");
   top++;
   if(top>bottom)
	break;
   for(i=top;i<=bottom;i++)
    System.out.print(arr[i][right]+" ");
   right--;
   if(left>right)
    break;
   for(j=right;j>=left;j--)
	System.out.print(arr[bottom][j]+" ");
   bottom--;
   if(top>bottom)
	break;
   for(i=bottom;i>=top;i--)
    System.out.print(arr[i][left]+" ");
   left++;
   if(left>right)
	break;
  }
  System.out.println();
 }
}
