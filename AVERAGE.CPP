#include<stdio.h>
#include<conio.h>
void main()
{
int hindi,english,math,history,science,total;
double avg;
clrscr();
printf("Enter markes of 5 subject");
scanf("%d%d%d%d%d",&hindi,&english,&math,&history,&science);

total=hindi+english+math+history+science;
printf("total marks: %d\n",total);

avg=total/5;
printf("average marks:%if",avg);
getch();
}