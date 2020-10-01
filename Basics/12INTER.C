#include<stdio.h>
#include<conio.h>
void main()
{
 int c,d;
 clrscr();
 printf("Enter any two no.=\n");
 scanf("%d%d",&c,&d);
 c=c+d;
 d=c-d;
 c=c-d;
 printf("after interchanging=%d\n",c);
 printf("afetr interchangng=%d",d);
 getch();
 }