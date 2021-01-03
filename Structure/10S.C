#include<stdio.h>
#include<conio.h>
struct student_clg_detail
{
 int clg_id;
 char clg_name[10];
};
struct student_detail
{
 int id;
 char name[20];
 float percentage;
};
void main()
{
 struct student_clg_detail s;
 clrscr();
 printf("enter clg id=");
 scanf("%d",&s.clg_id);
 printf("Enter clg name=");
 scanf("5s",&s.clg_name);
 printf("Enter clg id=%d",s.clg_id);
 printf("Enter clg name=%s",s.clg_name);
}
struct student_detail
{
  struct student_detail s1;
  printf("student id=");
  scanf("%S",&s1.id);
  printf("na,e=");
  scanf("%s",&s1.name);
  printf("percentage=");
  scanf("%f",&s1.percentage);
  printf("Student id=%d",s1.id);
  printf("Name=%s",s1.name);
  printf("percentage=%f",s1.percentage);
 getch();
}