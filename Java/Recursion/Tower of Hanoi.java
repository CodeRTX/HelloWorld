/* From wiki-
The Tower of Hanoi is a mathematical puzzle where we have 3 rods and N disks. The puzzle starts with all the disks in ascending order of size on the first row. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:

1. Only one disk can be moved at a time.
2. Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack or on an empty rod.
3. No larger disk may be placed on top of a smaller disk.
-----x--x--x------

Let the rods have names A, B and C. Given N number of disks, numbered 1 to N from top to bottom, display all the moves required to move the disks from rod A to C in minimum number of steps. */


import java.util.*;

class Main
{
 public static void main(String args[])
 {
  int n;
  Scanner sc=new Scanner(System.in);
  n=sc.nextInt();
  TowerofHanoi('A','B','C',n);
 }
 static void TowerofHanoi(char src,char helper,char dest,int x)
 {
  if(x==1)
   System.out.println("1:"+src+"->"+dest);
  else
  {
   TowerofHanoi(src,dest,helper,x-1);
   System.out.println(x+":"+src+"->"+dest);
   TowerofHanoi(helper,src,dest,x-1);
  }
 }
}
