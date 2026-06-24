#include<stdio.h>
#include<conio.h>
void main()
{
int math,english,hindi,total,average;
clrscr();
printf("enter math marks=");
scanf("%d",& math);
printf("enter english marks=");
scanf("%d", & english);
printf("enter hindi marks=");
scanf("%D",& hindi);
total=(math+english+hindi);
printf("total=%d\n",total);
average=total/3;
printf("average=%d",average);
getch();
}