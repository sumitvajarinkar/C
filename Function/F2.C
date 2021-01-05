#include<stdio.h>
#include<conio.h>
void sqr();
void main()
{
 clrscr();
 sqr();
 getch();
}
void sqr()
{
 int a,s;
 printf("Enter any no.=\n");
 scanf("%d",&a);
 s=a*a;
 printf("Square of no.=%d",s);
}
