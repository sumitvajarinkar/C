#include<stdio.h>
#include<conio.h>
void main()
{
 char a[15],b[15];
 int i;
 clrscr();
 printf("Enter string\n");
 scanf("%s",a);
 for(i=0;a[i]!='\0';i++);
  {
   b[i]=a[i];
   }
  b[i]='\0';
 printf("Copied= %s",a);
getch();
}