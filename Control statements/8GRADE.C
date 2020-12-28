#include<stdio.h>
#include<conio.h>
void main()
{
 float a,b,c,d,e,per;
 clrscr();
 printf("Enter marks of 5 subjects=\n");
 scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
 per=(a+b+c+d+e)/5;
 printf("Percentage=%f",per);
 if(per>90)
  {
   printf("Grade A");
   }
  else if(per>80)
     {
      printf("Grade B");
      }
  else if(per>70)
      {
       printf("Grade C");
       }
  else if(per>60)
	{
	printf("Grade D");
	}
  else if(per>40)
	{
	 printf("Grade E");
	}
  else
     {
      printf("Grade F");
      }
getch();
}