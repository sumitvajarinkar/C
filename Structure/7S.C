#include<stdio.h>
#include<conio.h>
struct department
{
 char dept_name[20];
 int dept_est_year;
 int no_of_students;
} d[5];
void info(struct department d[]);
void main()
{
 int i;
 clrscr();
 printf("enter 5 department info\n");
 for(i=0;i<5;i++)
  {
   fflush(stdin);
   printf("Department name=");
   gets(d[i].dept_name);
   fflush(stdin);
   printf("Esatrablished year=");
   scanf("%d",&d[i].dept_est_year);
   printf("No of studens=");
   scanf("%d",&d[i].no_of_students);
   printf("Department name=%s\n",d[i].dept_name);
   printf("Esatrablished year=%d\n",d[i].dept_est_year);
   printf("No of studens=%d\n",d[i].no_of_students);
   printf("--------**-----**-----------\n");
  }
 info(d);
 getch();
}
void info(struct department d[])
{
 int i,s=0;
 for(i=0;i<5;i++)
 {
  s=s+d[i].no_of_students;
 }
 printf("No of students in all departments=%d",s);
}


