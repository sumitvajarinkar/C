#include<stdio.h>
#include<conio.h>
void main()
{
 char s[20];
 int i;
 clrscr();
 printf("Enter string\n");
 gets(s);
 for(i=0;s[i]!='\0';i++);
 printf("Length of string %d",i);
getch();
}