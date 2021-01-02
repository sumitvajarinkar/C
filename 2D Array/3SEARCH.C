#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],i,j,n,c=0;
 clrscr();
 printf("Enter 9 elements\n");
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
     scanf("%d",&a[i][j]);
    }
   }
 printf("Matrix\n");
   for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
     printf("\t%d",a[i][j]);
    }
    printf("\n");
   }
   printf("enter the no. which you find\n");
   scanf("%d",&n);
    for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
     if(a[i][j]==n)
      {
       c=1;
       printf("No. is searched at index of[%d][%d]",i,j);
      break;
    }
   }
  }
   if(c==0)
  {
   printf("No is not present");
   }
getch();
}

