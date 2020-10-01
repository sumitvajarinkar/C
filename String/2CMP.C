#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[10],b[10];
 int c;
 clrscr();
 printf("Enter a word");
 gets(a);
 printf("Enter another word");
 gets(b);
 c=strcmp(a,b);
 if(c==0)
  printf("Both strings are alphabetically equal");
 else if(c>1)
  printf("A is alphabetically 1st");
  else if(c<1)
   printf("B is alphabetically 1st");
getch();
}
