#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char a[20];
 char n[20];
 clrscr();

 printf("Enter any word");
 gets(a);
 strcpy(n,a);
 strrev(a);
 if(strcmp(a,n)==0)
  printf("pallindrome");
  else
   printf("Not pallindrome");
getch();
}