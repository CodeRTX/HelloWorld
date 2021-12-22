#include <iostream>
using namespace std;

struct Node
{
 int data;
 Node *link;
}*head=NULL;

void addatbegin(int);
void addatend(int);
void addatpos(int,int);
void sort();
void print();
int count();
void delakey(int);
void reverse();
void clear();

int main()
{
 addatbegin(2);
 addatbegin(5);
 addatbegin(4);
 addatbegin(43);
 addatend(8);
 print();
 cout <<"The no. of Nodes in List is "<<count()<<endl;
 delakey(10);
 clear();
 return 0;
}

void addatbegin(int x)
{
 Node *tmp=new Node;
 tmp->data=x;
 tmp->link=head;
 head=tmp;
}
void addatend(int x)
{
 if(head==NULL)
 {
  Node *tmp=new Node;
  tmp->data=x;
  tmp->link=NULL;
  head=tmp;
 }
 else
 {
  Node *tmp=head;
  while(tmp->link!=NULL)
   tmp=tmp->link;
  tmp->link=new Node;
  tmp=tmp->link;
  tmp->data=x;
  tmp->link=NULL;
 }
}
void addatpos(int x,int loc)
{
 Node *tmp=head,*next;
 for(int i=0;i<loc-2;i++)
 {
  tmp=tmp->link;
  if(tmp==NULL)
  {
   cout <<"Error! element can't be added at specified location.\n";
   return;
  }
 }
 next=tmp->link;
 tmp->link=new Node;
 tmp=tmp->link;
 tmp->link=next;
 tmp->data=x;
}
void sort()
{
 Node *tmp1=head,*tmp2;
 while(tmp1!=NULL)
 {
  tmp2=tmp1->link;
  while(tmp2!=NULL)
  {
   if((tmp1->data)>(tmp2->data))
    swap(tmp1->data,tmp2->data);
   tmp2=tmp2->link;
  }
  tmp1=tmp1->link;
 }
}
void print()
{
 Node *tmp=head;
 if(tmp==NULL)
 {
  cout <<"List is empty.\n";
  return;
 }
 while(tmp!=NULL)
 {
  cout <<tmp->data<<" ";
  tmp=tmp->link;
 }
 cout <<endl;
}
int count()
{
 Node *tmp=head;
 int c=0;
 while(tmp!=NULL)
 {
  c++;
  tmp=tmp->link;
 }
 return c;
}
void delakey(int k)
{
 if(head==NULL)
  return;
 bool flag=0;
 Node *tmp=head,*pre=head;
 while(tmp!=NULL)
 {
  if(tmp->data==k)
  {
   flag=1;
   break;
  }
  tmp=tmp->link;
 }
 if(flag==0)
  cout <<"The Node with the given Key is not found.\n";
 else
 {
  if(tmp==head)
  {
   head=head->link;
   delete tmp;
  }
  else
  {
   while(pre->link!=tmp)
    pre=pre->link;
   pre->link=tmp->link;
   tmp->link=NULL;
   delete tmp;
  }
 }
}
void reverse()
{
 Node *q=head,*r,*s=NULL;
 while(q!=NULL)
 {
  r=q;
  q=q->link;
  r->link=s;
  s=r;
 }
 head=s;
 delete q;
}
void clear()
{
 Node *tmp;
 while(head!=NULL)
 {
  tmp=head;
  head=head->link;
  delete tmp;
 }
}