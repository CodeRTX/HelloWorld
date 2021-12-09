#include<iostream.h>
#include<conio.h>

struct btree
{
 int data;
 btree *left;
 btree *right;
}*root;
btree root=NULL;

void M_Sort(int arr[],int l,int u)                  // M_Sort means Merge Sort
{
 if(u>l)
 {
  int m=(l+u)/2;
  M_Sort(arr,l,m);
  M_Sort(arr,m+1,u);
  merge(arr,l,m,u);
 }
}
void merge(int arr[],int l,int m,int u)
{
 int i,j=l,k=m+1,L[m-l+1],R[u-m];
 for(i=l;i<=m;i++)
  L[i]=arr[i];
 for(i=m+1;i<u;i++)
  R[i]=arr[i];
 i=l;
 while(j<=m && k<u)
 {
  if(L[j]>R[k])
  {
   arr[i]=R[k];
   k++;
  }
  else
  {
   arr[i]=L[j];
   j++;
  }
  i++;
 }
 while(j<=m)
 {
  arr[i]=L[j];
  j++;
  i++;
 }
 while(k<u)
 {
  arr[i]=R[k];
  k++;
  i++;
 }
}
void insert(btree *sr,int num)
{
 if(sr==NULL)
 {
  sr=new btree;
  sr->data=num;
  sr->left=NULL;
  sr->right=NULL;
 }
 else
 {
  if(num<sr->data)
   insert(sr->left,num);
  else
   insert(sr->right,num);
 }
}
void ArrayToBST(int arr[],int l,int u)
{
 if(u>l)
 {
  int m=(u+l)/2;
  insert(root,arr[m]);
  ArrayToBST(arr,l,m);
  ArrayToBST(arr,m+1,u);
 }
}
void display(btree *sr)
{
 if(sr!=NULL)
 {
  display(sr->left);
  cout<<""<<sr->data<<" ";
  display(sr->right);
 }
}

void main()
{
 clrscr();
 int i,n;
 cout<<"Enter size of array: ";
 cin>>n;
 int *arr=new int[n];
 M_Sort(arr,0,n);
 ArrayToBST(arr,0,n);
 cout<<"\nThe AVL Balanced Tree is:\n";
 display(root);
 getch();
}
