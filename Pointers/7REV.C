#include<stdio.h>
#include<conio.h>
#include<string.h>
void  main()
{
 char str[10]={"hello"};
 char *p;
 int i;
 clrscr();
 p=&str[0];
 while(*p!='\0')
  {
   p++;
  }
   printf("Reversed=");
   while(p!=&str[0])
    {
     p--;

    printf("%c",*p);
}
getch();
}

