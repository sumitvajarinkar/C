#include<stdio.h>
#include<conio.h>
int sum();
void main()
{
 int s;
 clrscr();
 s=sum();
 printf("Sum=%d",s);
 getch();
}
int sum()
{
 int i,sum=0,s;
 int a[10];
 printf("Enter any 10 nos.=\n");
 for(i=0;i<10;i++)
  {
   scanf("%d",&a[i]);
  }
 for(i=0;i<10;i++)
 {
  sum=sum+a[i];
 }
  return sum;
}
