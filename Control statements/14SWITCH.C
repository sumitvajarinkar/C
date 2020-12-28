#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 char ch;
 clrscr();
 printf("Enter any two nos.=\n");
 scanf("%d%d",&a,&b);
 fflush(stdin);
 printf("Enter operation\n");
 scanf("%c",&ch);
 switch(ch)
 {
  case '+':
  {       c=a+b;
	  printf("add=%d",c);
	  break;
	  }
 case '-':
 {       c=a-b;
	 printf("Sub=%d",c);
	 break;
	 }
 case '*':
 {       c=a*b;
	 printf("Mul=%d",c);
	 break;
	 }
 case '/':
   {     c=a/b;
	 printf("Div=%d",c);
	 break;
	 }
 default:
	 printf("Wrong choice\n");
}
     getch();
}
