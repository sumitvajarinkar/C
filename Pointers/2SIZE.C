#include<stdio.h>
#include<conio.h>
void main()
{
int a;
int *pa=&a;
char b='x';
char *pb=&b;
float c=10.01;
float *pc=&c;
double d=10.01;
double *pd=&d;
clrscr();
printf("a=%d\n",sizeof(a));
printf("*pa=%d\n",sizeof(*pa));
printf("b=%d\n",sizeof(b));
printf("*b=%d\n",sizeof(*pb));
printf("c=%d\n",sizeof(c));
printf("*c=%d\n",sizeof(*pc));
printf("d=%d\n",sizeof(d));
printf("*d=%d",sizeof(*pd));
getch();
}