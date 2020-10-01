#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[30],b[30];
 int c;
 clrscr();
 printf("Enter a string\n");
 gets(a);
 printf("Enter another string\n");
 gets(b);
 c=strcmp(a,b);
 if(c==0)
  printf("String are equal");
 else
  printf("String are not equal");
getch();
}