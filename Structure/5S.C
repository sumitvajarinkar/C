#include<stdio.h>
#include<conio.h>
struct student
{
 int rollno;
 char name[20];
 char address[20];
 int marks;
}s[5];
void main()
{
  int i;
 clrscr();
 printf("Enter 5 studets info\n");
 for(i=0;i<5;i++)
 {
 printf("Roll no=\n");
 scanf("%d",&s[i].rollno);
 printf("name=\n");
 scanf("%s",s[i].name);
 printf("Address=\n");
 scanf("%s",s[i].address);
 printf("Marks=\n");
 scanf("%d",&s[i].marks);
 printf("---------******-------\n");
}
printf("Info of 5 students");
for(i=0;i<5;i++)
{
 if(s[i].marks>=40)
 {
   printf("roll no=%d\n",s[i].rollno);
 printf("name=%s\n",s[i].name);
 printf("Address=%s\n",s[i].address);
 printf("marks=%d\n",s[i].marks);
 }
}
getch();
}

