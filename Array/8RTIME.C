#include<stdio.h>
#include<conio.h>
void take();
void main()
{
 clrscr();
 take();
 getch();
}
void take()
{
 int i;
 int a[5];
  printf("Entyer any no.\n");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<5;i++)
 printf("%d is element at index of %d\n",a[i],i);
getch();
}

