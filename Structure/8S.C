#include<stdio.h>
#include<conio.h>
struct dairy
{
 char name[20];
 int qty;
 int days;
}d[5];
void info(struct dairy *d);
int main()
{
int i;
  for(i=0;i<5;i++)
 {
  printf("Enter 5 costomers info\n");
  printf("name\n");
  scanf("%s",d[i].name);
  printf("Quantity\n");
  scanf("%d",&d[i].qty);
  printf("Days\n");
  scanf("%d",&d[i].days);
  printf("******-----******\n");
 }
 info(d);
 getch();
}
void info(struct dairy *d)
{
 int i,t;

 for(i=0;i<5;i++)
  {
    t=d->qty*d->days*46;
    printf("Name=%s\n",d[i].name);
    printf("Total bill=%d\n",t);
    d++;
   }
}
