#include<stdio.h>
#include<conio.h>
void main()
{
int c;
int a,b;
int *p1=&a;
int *p2=&b;
int *p3=&c;
clrscr();
printf("Enetr no. a");
scanf("%d",&a);
printf("Enter no. b");
scanf("%d",&b);
*p3=*p1+*p2;
printf("Addition=%d",*p3);
getch();
}