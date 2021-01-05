// no argument no return type
#include<stdio.h>
#include<conio.h>
int swap();
void main()
{
 clrscr();
 swap();
 getch();
}
int swap()
{
 int a,b;
 printf("\nEnter any no.=");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("Agter swapping a=%d\n b=%d",a,b);
}



