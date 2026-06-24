#include<stdio.h>
#include<conio.h>
void main()
{
int cp,sp,p,l;
clrscr();
printf("enter cost price");
scanf("%d",&cp);
printf("enter selling price");
scanf("%d",&sp);
p=sp-cp;
p=cp-sp;
if(sp==cp)
printf("no any profit and loss");
else if (sp>cp)
printf("profit:%d",p);
else
printf("lossl);
getch();
}