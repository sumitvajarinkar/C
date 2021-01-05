#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);
void main()
{
 int a=1,b=2;
 clrscr();
 swap(&a,&b);
 getch();
}
 void swap(int *x, int *y)
{
 int t;
 t=*x;
 *x=*y;
 *y=t;
  printf("After swapping\na=%d\nb=%d",*x,*y);

}