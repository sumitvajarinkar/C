//with arguments with return type
#include<stdio.h>
#include<conio.h>
int avg(int a, int b, int c);
void main()
{
 int a,b,c,s;
 clrscr();
 printf("Enter 3 nos.=\n");
 scanf("%d%d%d",&a,&b,&c);
 s=avg(a,b,c);
 if(s==1)
  printf("A is max");
   else if(s==2)
    printf("B is max");
     else
      printf("C is max");
 getch();
}
int avg(int a, int b, int c)
{
 int s;
 if(a>b && a>c)
  return 1;
   else if(b>c)
    return 2;
     else if(b>a && b>c)
      return 2;
       else if(a>c)
	return 1;
    else
       return 3;
 }