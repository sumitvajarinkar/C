#include<stdio.h>
#include<conio.h>
void main()
{
 float a,b;
 clrscr();
 printf("Enter value of fahrenheit=\n");
 scanf("%f",&a);
 b=(a-32)*5/9;
 printf("Value of celsius=%f",b);
 getch();
 }