//calculate year ,month and days
#include<stdio.h>
#include<conio.h>
void main()
{
	int days,month,year;
	printf("Enter the days::");
	scanf("%d",&days);
	
	year=days/365;   //calculate year  year=400/365=1
 	days=days%365;    //days=400%365=35
 	month=days/30;   //calculate month  month=35/30=1
 	days=days%30;    //days=days%30  days=5
 	printf("year::%d\n",year);
 	printf("month::%d\n",month);
 	printf("days::%d",days);
 	getch();
}
