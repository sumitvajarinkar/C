#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20],b[20],t[20];
 clrscr();
 printf("Enter a string\n");
 gets(a);
 printf("Enter another string\n");
 gets(b);
 strcpy(t,b);
 strcpy(b,a);
 strcpy(a,t);
 printf("Swapped\n%s\n%s",a,b);
 getch();
}