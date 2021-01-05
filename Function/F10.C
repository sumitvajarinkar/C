//no argument with return type
#include<stdio.h>
#include<conio.h>
int leap();
void main()
{
 int s;
 clrscr();
 s=leap();
 if(s==1)
  printf("It is leap year");
 else
  printf("It is not leap year");
getch();
}
 int leap()
{
 int a;
 printf("Entyer any year=\n");
 scanf("%d",&a);
 if(a%4==0)
   return 1;
  else
   return 0;
 }

