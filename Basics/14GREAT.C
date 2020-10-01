#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("Enter 2 nos.=\n");
 scanf("%d%d",&a,&b);
 a>b || b>a ? printf("Greater no. is=%d") : printf("Greater no. is=%d");
 getch();
 }