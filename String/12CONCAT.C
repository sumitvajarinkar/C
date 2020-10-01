#include<stdio.h>
#include<conio.h>
void main()
{
 char a[21],b[10];
 int i,l=0;
 clrscr();
 printf("Enter string\n");
 gets(a);
 printf("Enter another string");
 gets(b);
 for(i=0;a[i]!='\0';i++)
 {
  l++;
  }
  for(i=0;b[i]!='\0';i++)
  {
   a[l+i]=b[i];
   }
   a[l+i]='\0';
 printf("\n Concate=%s",a);
getch();
}