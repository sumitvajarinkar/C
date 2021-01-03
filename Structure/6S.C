#include<stdio.h>
#include<conio.h>
struct book_store
{
 char title[20];
 char author[20];
 int price;
};
void main()
{
 struct book_store b[5];
 int i,p=0;
 clrscr();
 printf("Info of 5 books");
 for(i=0;i<5;i++)
{
 printf("Enter book title=\n");
 scanf("%s",b[i].title);
 printf("Enter author=\n");
 scanf("%s",b[i].author);
 printf("Enter price=\n");
 scanf("%d",&b[i].price);
/* printf("Book title=%s\n",b.title);
 printf("Author=%s\n",b.author);
 printf("Price=%d\n",b.price);*/
 printf("****----*****------*****\n");
}
for(i=0;i<5;i++)
 {
 p=p+b[i].price;
 }
 printf("Total price of books=%d\n",p);
getch();
}
