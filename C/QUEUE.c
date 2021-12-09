//Implementation of FIFO

#include<stdio.h>
#include<conio.h>

#define SIZE 30

void INSERT(int*,int);
void DEL(int*,int);
void DISPLAY(int*,int);

void main()
{
 clrscr();
 int a[SIZE],ch,l=0,ans=1;
 while(ans)
 {
  for(i=0;a[i]!='\0';i++)
   l++;
  printf ("-------------------MENU----------------------\n\n");
  printf ("1.Insert an Element?\n");
  printf ("2.Delete an Element?\n");
  printf ("3.View Queue.\n");
  printf ("\nEnter your choice: ");
  scanf ("%d",&ch);
  l=length(&a[0]);
  switch(ch)
  {
   case 1: INSERT(&a[l],l);
           break;
   case 2: DEL(&a[0],l);
           break;
   case 3: DISPLAY(&a[0],l);
           break;
   default:
   printf ("Your choice is invalid.\n");
  }
  printf ("Do you want to Continue?(Press 1 for YES & 0 for NO)\n");
  scanf ("%d",&ans);
 }
 getch();
}

void INSERT(int *x,int v)
{
 int t;
 if(v==SIZE)
  printf ("Insertion is not possible.\n");
 else
 {
  printf ("Enter the element you want to insert:\n");
  scanf ("%d",&t);
  *x=t;
 }
}
void DEL(int *x,int v)
{
 int *t;
 if(v==0)
  printf ("Deletion is not possible.\n");
 else
 {
  t=x+1;
  while(*x!='\0')
  {
   *x=*t;
   x++;
   t++;
  }
 }
}
void DISPLAY(int *x,int v)
{
 if(v==0)
 {
  *x='\0';
  printf ("Empty Queue\n");
 }
 else
 {
  while(*x!='\0')
  {
   printf ("%d ",*x);
   x++;
  }
 }
 printf ("\n\n");
}
