#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char name[10],n;
 int i,c=0;
 clrscr();
 printf("Enter string\n");
  gets(name);
 printf("Enter character to serach");
 scanf("%c",&n);
 for(i=0;name[i]!='\0';i++)
 {
  if(name[i]==n)
   {
    c=1;
    break;
   }
  }
  if(c==1)
   printf("Character found at %d index",i);
  else
   printf("Character not found");
getch();
}