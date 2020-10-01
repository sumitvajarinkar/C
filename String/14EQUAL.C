#include<stdio.h>
#include<conio.h>
void main()
{
 char a[100],b[100];
 int i;
 clrscr();
 printf("Enter string\n");
 gets(a);
 printf("Enter another string\n");
 gets(b);
 for(i=0;a[i]==b[i] && a[i]!='\0';i++);
   if(a[i]<b[i])
     printf("a<b");
 else if(a[i]>b[i])
   printf("a>b");
  else
  printf("a=b");
  getch();
}