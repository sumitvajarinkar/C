#include<stdio.h>
#include<conio.h>
struct book
{
 int book_id;
 char author[20];
 char title[20];
 int price;
 };
void main()
{
 struct book b;
 clrscr();
 printf("Enter book id=");
 scanf("%d",&b.book_id);
 printf("Author name=");
 scanf("%s",&b.author);
 printf("titile=");
 scanf("%s",&b.title);
 printf("Price=");
 scanf("%d",&b.price);
 printf("book ID=%d\n",b.book_id);
 printf("Author name=%s\n",b.author);
 printf("titile=%s\n",b.title);
 printf("Price=%d\n",b.price);
 getch();
 }


