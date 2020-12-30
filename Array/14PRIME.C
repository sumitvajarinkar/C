#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i;
 int c=0,n;
 clrscr();
 printf("Enter 10 elements\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&a[i]);
 }
  for(i=0;i<10;i++)

  {
   for(n=1;n<=a[10];n++)
 {
  if(a[i]%n==0)
   {
    c++;
   }
 }
}
 if(c==2)
   printf("prime nos. are=%d",a[i]);
  else
   printf("Non prime nos.=%d",a[i]);
getch();
}