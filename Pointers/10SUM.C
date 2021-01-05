#include<stdio.h>
#include<conio.h>
void sum(int *a);
void main()
{
 int a[10],i;
 clrscr();
 for(i=0;i<10;i++)
  {
   scanf("%d",a[i]);
  }
 sum(&a[10]);
 getch();
}
void sum(int *a)
{
  int i,sum=0;
  for(i=0;i<10;i++)
   {
    sum=sum+a[i];
   }
  printf("%d\n",sum);
}

