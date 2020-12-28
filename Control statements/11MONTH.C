#include<stdio.h>
#include<conio.h>
void main()
{
 int month;
 clrscr();
 printf("Enter any month\n");
 scanf("%d",month);
 if(month==2)
 {
   printf("28 or 29 days in month\n");
   }
     else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
     {
      printf("31 days in month\n");
      }
      else if(month==4 || month==6 || month==9 || month==11)
      {
       printf("30 days in month\n");
       }
       else
       {
	printf("Wrong choice\n");
       }
       getch();
       }