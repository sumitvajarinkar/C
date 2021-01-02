#include<stdio.h>
#include<conio.h>
void search();
void main()
{
 clrscr();
 search();
 getch();
}
void search()
{
 int a[3][3],i,j,x,c=0;
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
     scanf("%d",&a[i][j]);
    }
   }
   printf("Select any element\n");
   scanf("%d",&x);
 for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
    {
      if(a[i][j]==x)
       {
	c++;
       }
       if(c==1)
       printf(" no. is present");
       break;
   }
  }
  if(c==0)
 printf("No.is not present");
}