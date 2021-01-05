#include<stdio.h>
#include<conio.h>
void main()
{
int a=10;
int *p=&a;
clrscr();
printf("a=%d\n",a);
printf("a=%d\n",*p);
printf("a=%d\n",*(*(&p)));
printf("a=%d\n",*(&(*p)));
printf("a=%d\n",*(&a));
printf("a=%d\n",&(*p));  // Wrong method
printf("Adress of a=%u\n",&a);
printf("Address of a=%u\n",p);
printf("Address of a=%u\n",&(*p));
getch();
}

