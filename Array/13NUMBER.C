#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i;
 clrscr();
 printf("Enter 10 elements\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<10;i++)
 {
  if(a[i]%2==0)
   printf("even nos. are=%d\n",a[i]);
  }
  for(i=0;i<10;i++)
   {
    if(a[i]%2!=0)
     printf("Odd nos. are=%d\n",a[i]);
  }
getch();

}