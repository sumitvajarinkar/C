#include<stdio.h>
#include<conio.h>
struct company
{
 char company_name[20];
 int year;
 int no_of_employees;
}c[2];
void pass(struct company *c)
{
 int i,num;
 for(i=0;i<2;i++)
 {
 scanf("%d",&num);
 c->no_of_employees=num;
  printf("********------*********\n");
   printf("name=%s",c->company_name);
   printf("Year=%d",c->year);
   printf("Employess=%d",c->no_of_employees);
  c++;
 }
 }
int main()
 {
 int i;
 for(i=0;i<2;i++)
  {
   printf("Name\n");
   scanf("%s",c[i].company_name);
   printf("Year\n");
   scanf("%d",&c[i].year);
   printf("Employess\n");
   scanf("%d",&c[i].no_of_employees);
   printf("********------*********");
  }
  pass(c);

   for(i=0;i<2;i++)
   {
   printf("name=%s\n",c[i].company_name);
   printf("Year=%d\n",c[i].year);
   printf("Employess=%d\n",c[i].no_of_employees);
  }
 getch();
}

