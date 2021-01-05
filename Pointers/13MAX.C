#include<stdio.h>
#include<conio.h>
void max(int *a, int *b);
void main()
{
 int a,b;
 clrscr();
 printf("Enter a 2 nos.\n");
 scanf("%d%d",&a,&b);
 max(&a,&b);
 getch();
}
void max(int *a, int *b)
{
 if(a>b)
  printf("%d is maximun no.",*a);
 else
  printf("%d is maximum",*b);
getch();
}

