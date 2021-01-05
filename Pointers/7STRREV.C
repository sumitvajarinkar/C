#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char *s;
 int l,i;
 clrscr();
 printf("Enter a string\n");
 gets(s);
 l=strlen(s);
 printf("The reverse of the string");
 for(i=l;i>=0;i--)
  {
   printf("%c",*(s+i));
  }
getch();

}

