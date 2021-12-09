/*fact Function is only defined for positive no.s inc. 0*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int GIF(float);
int fact(int x);

void main()
{
 register float a,b,add,sub,mul,div,sq,cb,sqroot,sine,cosine,tangent,expo,lg,ap,gp,hp,powr;
 register int choice,option,gif,n,i=1,r,combn,permn;
 while(i>0)
 {
  printf ("-----------------MENU----------------------\n\n");
  printf ("1.Do you want to add?\n");
  printf ("2.Do you want to subtract?\n");
  printf ("3.Do you want to multiply?\n");
  printf ("4.Do you want to divide?\n");
  printf ("5.Do you want to find the square?\n");
  printf ("6.Do you want to find the cube?\n");
  printf ("7.Do you want to find the squareroot?\n");
  printf ("8.Do you want to find the sine?\n");
  printf ("9.Do you want to find the cosine?\n");
  printf ("10.Do you want to find the tangent?\n");
  printf ("11.Do you want to find the exponential value?\n");
  printf ("12.Do you want to find the logarithm?\n");
  printf ("13.Do you want to find the A.P.?\n");
  printf ("14.Do you want to find the G.P.?\n");
  printf ("15.Do you want to find the H.P.?\n");
  printf ("16.Do you want to find the Greatest Integer Function value?\n");
  printf ("17.Do you want to find the Power of number?\n");
  printf ("18.Do you want to find the value of Combination & Permutation?\n");
  printf ("\nEnter the two no.s: ");
  scanf ("%f%f",&a,&b);
  add=a+b;
  sub=a-b;
  mul=a*b;
  div=a/b;
  sq=a*a;
  cb=a*a*a;
  sqroot=sqrt(a);
  sine=sin(a);
  cosine=cos(a);
  tangent=tan(a);
  expo=exp(a);
  lg=log(a);
  ap=(a+b)/2;
  gp=sqrt(a*b);
  hp=(2*a*b)/(a+b);
  gif=GIF(a);
  printf ("\nEnter your choice: \n");
  scanf ("%d",&choice);
  switch(choice)
  {
   case 1: printf ("\nThe Addition is %0.2f\n",add);
           break;
   case 2: printf ("The Subtraction of b from a is %0.2f\n",sub);
           sub=b-a;
           printf ("The Subtraction of a from b is %0.2f\n",sub);        
           break;
   case 3: printf ("The Multiplication is %f\n",mul);
           break;
   case 4: printf ("The Division of a by b is %f\n",div);
           div=b/a;
           printf ("The Division of b by a is %f\n",div);
           break;
   case 5: printf ("The Square of a is %f\n",sq);
           sq=b*b;
           printf ("The Square of b is %f\n",sq);
           break;
   case 6: printf ("The Cube of a is %f\n",cb);
           cb=b*b*b;
           printf ("The Cube of b is %f\n",cb);
           break;
   case 7: printf ("The Square Root of a is %f\n",sqroot);
           sqroot=sqrt(b);
           printf ("The Square Root of b is %f\n",sqroot);
           break;
   case 8: printf ("The Sine of a is %f\n",sine);
           sine=sin(b);
           printf ("The Sine of b is %f\n",sine);
           break;
   case 9: printf ("The Cosine of a is %f\n",cosine);
           cosine=cos(b);
           printf ("The Cosine of b is %f\n",cosine);
           break;
   case 10: printf ("The Tangent of a is %f\n",tangent);
            tangent=tan(b);
            printf ("The Tangent of b is %f\n",tangent);
            break;
   case 11: printf ("The Exponential value of a is %f\n",expo);
            expo=exp(b);
            printf ("The Exponential value of b is %f\n",expo);
            break;
   case 12: printf ("The Logarithm of a is %f\n",lg);
            lg=log(b);
            printf ("The Logarithm of b is %f\n",lg);
            break;
   case 13: printf ("The Arithmetic Mean is %f\n",ap);
            break;
   case 14: printf ("The Geometric Mean is %f\n",gp);
            break;
   case 15: printf ("The Harmonic Mean is %f\n",hp);
            break;
   case 16: printf ("The Greatest Integer value of a is %d\n",gif);
            gif=GIF(b);
            printf ("The Greatest Integer value of b is %d\n",gif);
            break;
   case 17: printf ("n= ");
            scanf ("%d",&n);
            powr=pow(a,n);
            printf ("The value of a to power n is %f\n",powr);
            powr=pow(b,n);
            printf ("The value of a to power n is %f\n",powr);
            break;
   case 18: printf ("n= ");
            scanf ("%d",&n);
            printf ("r= ");
            scanf ("%d",&r);
            permn=fact(n)/fact(n-r);
            combn=permn/fact(r);
   if(n>=r)
   {
    printf ("\nThe reqd. Combination value is %d",combn);
    printf ("\nThe reqd. Permutation value is %d",permn);
   }
   else
    printf ("\nThe above combination is not possible");
   break;
   default:
    printf ("You entered a wrong choice\n");
  }
  control:
  printf ("\nDo you want to Continue?(Press 0 for YES & 1 for NO)\n");
  scanf ("%d",&option);
  if(option==0)
   return;
  else if(option==1)
   continue;
  else
  {
   printf ("ERROR!\n");
   goto control;
  }
 }
 getch();
}

int GIF(float x)
{
 int temp;
 if(x>=0)
  temp=x;
 else
  temp=(int)(x)-1;
 return temp;
}
int fact(int x)
{
 int i,f=1;
 for(i=1;i<=x;i++)
  f=f*i;
 if(x>0)
  return f;
 else
  return 1;
}
