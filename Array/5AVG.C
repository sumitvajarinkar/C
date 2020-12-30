#include<stdio.h>
#include<conio.h>
void main()
{
 int i,sum=0,avg;
 int a[5];
 clrscr();
 printf("Enter any 5 elements=\n");
  for(i=0;i<5;i++)
  {
   scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++)
  {
   sum=sum+a[i];
  }
  avg=sum/5;
  printf("avg=%d",avg);
 getch();
}