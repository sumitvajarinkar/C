#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
 int a[15];
 clrscr();
 a[0]=0;
 a[1]=1;
 for(i=2;i<=15;i++)
 {
  a[i]=a[i-1]+a[i-2];
 }
 for(i=0;i<=15;i++)
 printf("Fibonacci no.=%d\n",a[i]);
 getch();
}

