#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20],b[20];
 clrscr();
 printf("Enter a word\n");
 gets(a);
 printf("Enter another word\n");
 gets(b);
 strcat(a,b);
 printf("String concatenate=%s",a);
 getch();
 }