#include<stdio.h>
#include<conio.h>
struct stud
{
 int rollno;
 char name[20];
 char address[20];
 int marks;
}s={33,"sumit","kameri",89};
void main()
{
 clrscr();
 printf("Roll no.=%u\n",s.rollno);
 printf("name=%s\n",s.name);
 printf("Address=%s\n",s.address);
 printf("Marks=%d\n",s.marks);
getch();
}