#include<stdio.h>

int MIN(int,int);

main()
{
 int a,b,i=2,m,hcf=1;
 printf ("Enter two numbers: ");
 scanf ("%d%d",&a,&b);
 m=MIN(a,b);
 while(i<=m)
 {
  if(a%i==0 && b%i==0)
  {
   hcf=hcf*i;
   a=a/i;
   b=b/i;
   continue;
  }
  i++;
 }
 printf ("\nThe HCF of 2 no.s is %d\n",hcf);
 return 0;
}

int MIN(int x,int y)
{
 if(x>y)
  return y;
 else
  return x;
}
