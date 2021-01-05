#include<stdio.h>
#include<conio.h>
int *large(int *p)
{
 int i,*d;
 d=p;
 p++;
 for(i=1;i<5;i++)
 {
	if(*d<*p)
	*d=*p;
	p++;
	}
 return d;
}
void main()
{
 int a[5],i,*p,*d;
 clrscr();
 printf("Enter 5 elements");
 for(i=0;i<5;i++)
  {
   scanf("%d",&a[i]);
  }
  p=a;
  d=large(p);
  printf("\n%d is  the largest ",*d);
  getch();
}