#include<stdio.h>

struct book
{
 char name[30],author[30];
 int pages;
 float price;
};

main()
{
 struct book b;
 printf ("Enter name of the Book & its Author: ");
 gets(b.name);
 gets(b.author);
 printf ("\nNo. of pages: ");
 scanf ("%d",&b.pages);
 printf ("\nPrice of book: ");
 scanf ("%f",&b.price);
 printf ("Your book contents are: %s by %s(%d pages) at Rs.%0.2f",b.name,b.author,b.pages,b.price);
 return 0;
}
