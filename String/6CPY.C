#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[21],b[10];
 clrscr();
 printf("Enter a word\n");
 gets(a);
 strcpy(b,a);
 printf("Copied string=%s",b);
 getch();
 }